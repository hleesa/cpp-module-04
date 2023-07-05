
#include "Cure.hpp"

void Cure::printMessageCall(std::string msg) {
	std::cout << msg << " called, Cure type: " << type << std::endl;
}

Cure::Cure() : AMateria("cure") {
	printMessageCall("Default constructor");
}

Cure::Cure(const Cure& other) : AMateria(other.type) {
	printMessageCall("Copy constructor called");
}

Cure& Cure::operator=(const Cure& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Cure:: ~Cure() {
	printMessageCall("Destructor");
}

AMateria* Cure::clone() const {
	AMateria* aMateria = new Cure();
	return aMateria;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}