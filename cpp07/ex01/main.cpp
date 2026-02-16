#include "iter.hpp"
#include <iostream>


int main(void){

	const int 		empty[0] = {};
	const int 		onlyOne[1] = {5};
	const int		intArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	const short		shortArray[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	const long		longArray[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
	const float		floatArray[10] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.10f};
	const double	doubleArray[10] = {1.11, 2.22, 3.33, 4.44, 5.55, 6.66, 7.77, 8.88, 9.99, 10.101};
	const char		charArray[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	const wchar_t	wcharArray[10] = {L'A', L'B', L'C', L'D', L'E', L'F', L'G', L'H', L'I', L'J'};
	const bool		boolArray[10] = {true, false, true, false, true, false, true, false, true, false};
	std::string		stringArray[10] = {"red", "blue", "green", "yellow", "purple","orange", "pink", "brown", "black", "white"};
	
	iter(onlyOne, sizeof(onlyOne) / sizeof(onlyOne[0]), print_item); std::cout << std::endl;     
	iter(empty, sizeof(empty) / sizeof(empty[0]), print_item); std::cout << std::endl;
	iter(intArray, sizeof(intArray) / sizeof(intArray[0]), print_item); std::cout << std::endl;
	iter(shortArray, sizeof(shortArray) / sizeof(shortArray[0]), print_item); std::cout << std::endl;
	iter(longArray, sizeof(longArray) / sizeof(longArray[0]), print_item); std::cout << std::endl;
	iter(floatArray, sizeof(floatArray) / sizeof(floatArray[0]), print_item); std::cout << std::endl;
	iter(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]), print_item); std::cout << std::endl;
	iter(charArray, sizeof(charArray) / sizeof(charArray[0]), print_item); std::cout << std::endl;
	iter(wcharArray, sizeof(wcharArray) / sizeof(wcharArray[0]), print_item); std::cout << std::endl;
	iter(boolArray, sizeof(boolArray) / sizeof(boolArray[0]), print_item); std::cout << std::endl;
	iter(stringArray, sizeof(stringArray) / sizeof(stringArray[0]), print_item); std::cout << std::endl;

	{
		int 		empty[0] = {};
		int 		onlyOne[1] = {5};
		int         intArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		short       shortArray[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
		long        longArray[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
		float       floatArray[10] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 10.10f};
		double      doubleArray[10] = {1.11, 2.22, 3.33, 4.44, 5.55, 6.66, 7.77, 8.88, 9.99, 10.101};
		char        charArray[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
		wchar_t     wcharArray[10] = {L'A', L'B', L'C', L'D', L'E', L'F', L'G', L'H', L'I', L'J'};
		bool        boolArray[10] = {true, false, true, false, true, false, true, false, true, false};
		std::string stringArray[10] = {"red", "blue", "green", "yellow", "purple"," std::cout << std::endl;orange", "pink", "brown", "black", "white"};
		
		iter(onlyOne, sizeof(onlyOne) / sizeof(onlyOne[0]), increment);            
		iter(empty, sizeof(empty) / sizeof(empty[0]), increment);
		iter(intArray, sizeof(intArray) / sizeof(intArray[0]), increment);
		iter(shortArray, sizeof(shortArray) / sizeof(shortArray[0]), increment);
		iter(longArray, sizeof(longArray) / sizeof(longArray[0]), increment);
		iter(floatArray, sizeof(floatArray) / sizeof(floatArray[0]), increment);
		iter(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]), increment);
		iter(charArray, sizeof(charArray) / sizeof(charArray[0]), increment);
		iter(wcharArray, sizeof(wcharArray) / sizeof(wcharArray[0]), increment);
		iter(boolArray, sizeof(boolArray) / sizeof(boolArray[0]), increment);

		iter(intArray, sizeof(intArray) / sizeof(intArray[0]), print_item);std::cout << std::endl;
		iter(shortArray, sizeof(shortArray) / sizeof(shortArray[0]), print_item); std::cout << std::endl;
		iter(longArray, sizeof(longArray) / sizeof(longArray[0]), print_item); std::cout << std::endl;
		iter(floatArray, sizeof(floatArray) / sizeof(floatArray[0]), print_item); std::cout << std::endl;
		iter(doubleArray, sizeof(doubleArray) / sizeof(doubleArray[0]), print_item); std::cout << std::endl;
		iter(charArray, sizeof(charArray) / sizeof(charArray[0]), print_item); std::cout << std::endl;
		iter(wcharArray, sizeof(wcharArray) / sizeof(wcharArray[0]), print_item); std::cout << std::endl;
		iter(boolArray, sizeof(boolArray) / sizeof(boolArray[0]), print_item); std::cout << std::endl;
		iter(stringArray, sizeof(stringArray) / sizeof(stringArray[0]), print_item); std::cout << std::endl;
	}
	return (0);
}

