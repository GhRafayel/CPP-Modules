#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm () {}

ShrubberyCreationForm::ShrubberyCreationForm() :
    AForm("_shrubbery", 145, 137), _target("no target") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) :
    AForm("_shrubbery", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & obj) :
    AForm(obj) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm & obj) {
    if (this != & obj) AForm::operator = (obj);
    return *this;
}
    
std::string ShrubberyCreationForm::getTarget(void) const {
    return this->_target;
}

void ShrubberyCreationForm::tobeExecutedd(const Bureaucrat & executor) const {

    execute(executor);
    std::ofstream file((getTarget() + getName()).c_str());
        
	if (!file.is_open()) {
		std::cout << "Error can not create file " << std::endl;
        return ;
	}
    
    file  << "          .     .  .      +     .      .          ."  << std::endl;
    file  << "     .       .      .     #       .           ."  << std::endl;
    file  << "        .      .         ###            .      ."  << std::endl;
    file  << "      .      .   \"#:. .:##\"##:. .:#\"  .      ."  << std::endl;
    file  << "          .      . \"####\"###\"####\"  ."  << std::endl;
    file  << "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        ."  << std::endl;
    file  << "  .             \"#########\"#########\"        .        ."  << std::endl;
    file  << "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       ."  << std::endl;
    file  << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ."  << std::endl;
    file  << "                .\"##\"#####\"\"#####\"##\"           .      ."  << std::endl;
    file  << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ."  << std::endl;
    file  << "      .     \"#######\"##\"#\"####\"##\"#######\"      .     ."  << std::endl;
    file  << "    .    .     \"#####\"\"#######\"\"#####\"    .      ."  << std::endl;
    file  << "            .     \"      000      \"    .     ."  << std::endl;
    file  << "       .         .   .   000     .        .       ."  << std::endl;
    file  << "      .. ... ... ... ... 000 ... ... ... ... .."  << std::endl;
    
    file.close();
}
