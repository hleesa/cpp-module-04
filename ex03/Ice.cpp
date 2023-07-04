
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Default constructor called, Ice type: " << type << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other.type) {
	std::cout << "Copy constructor called, Ice type: " << type << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
	std::cout << "Copy assignment operator called, Ice type: " << type << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Ice::~Ice() {
	std::cout << "Destructor called, Ice type: " << type << std::endl;
}

AMateria* Ice::clone() const {
	std::cout << "Ice::clone() called, type: " << type << std::endl;
	AMateria* aMateria = new Ice();
	return aMateria;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}