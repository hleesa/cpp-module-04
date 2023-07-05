
#include "Ice.hpp"

void Ice::printMessageCall(std::string msg) {
	std::cout << msg << " called, Ice type: " << type << std::endl;
}

Ice::Ice() : AMateria("ice") {
	printMessageCall("Default constructor");
}

Ice::Ice(const Ice& other) : AMateria(other.type) {
	printMessageCall("Copy constructor called");
}

Ice& Ice::operator=(const Ice& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Ice::~Ice() {
	printMessageCall("Destructor");
}

AMateria* Ice::clone() const {
	AMateria* aMateria = new Ice();
	return aMateria;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}