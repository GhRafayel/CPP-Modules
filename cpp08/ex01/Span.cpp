#include "Span.hpp"

Span::~Span() { array.clear(); }

Span::Span() : possible_addition(5) { array.reserve(5); }

Span::Span(unsigned int N) : possible_addition(N) {
    array.reserve(N);
}

Span::Span(const Span & obj) : array(obj.array), possible_addition(obj.possible_addition) {}

Span & Span::operator = (const Span & obj)
{
    if (this != &obj)
    {
        this->array.clear();
        this->array.reserve(obj.possible_addition + obj.array.size());
        this->array.insert(this->array.end(), obj.array.begin(), obj.array.end());
        this->possible_addition = obj.possible_addition;
    }
    return *this;
}

void    Span::addNumber(std::vector<int> & array)
{
    size_t len = std::distance(array.begin(), array.end());
    if (len > this->possible_addition) throw std::length_error("Array capacity is full");
    this->array.insert(this->array.end(), array.begin(), array.end());
    this->possible_addition -= len;
}

void    Span::addNumber(int val)
{
    if (!possible_addition) throw std::length_error("Array capacity is full");
    array.push_back(val);
    possible_addition--;
}

int Span::shortestSpan() {

    int index = 1;
    int span = 0;

    if (array.size() < 2) throw std::length_error("Array size must be greater than 1");

    std::sort(array.begin(), array.end());

    span = array[1] - array[0];
    for (size_t i = 2; i < array.size(); i++)
    {
        if (array[i] - array[i - 1] < span)
        {
                index = i;
                span = array[i] - array[i - 1];
        }
    }
   return array[index] - array[index - 1];
}

int Span::longestSpan() {

    if (array.size() <= 1) throw std::length_error("Array size must be greater than 1");

    std::vector<int>::iterator min_it = std::min_element(array.begin(), array.end());
    std::vector<int>::iterator max_it = std::max_element(array.begin(), array.end());

   return *max_it - *min_it;
}
