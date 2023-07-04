
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Default constructor called, Cure type: " << type << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other.type) {
	std::cout << "Copy constructor called, Cure type: " << type << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
	std::cout << "Copy assignment operator called, Cure type: " << type << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Cure:: ~Cure() {
	std::cout << "Destructor called, Cure type: " << type << std::endl;
}

AMateria* Cure::clone() const {
	std::cout << "Cure::clone() called, type: " << type << std::endl;
	AMateria* aMateria = new Cure();
	return aMateria;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}