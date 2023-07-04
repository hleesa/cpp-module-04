
#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : type(type) {
	std::cout << "parameterized constructor called, AMateria type: " << type  << std::endl;
}

std::string const& AMateria::getType() const {
	std::cout << "AMateria::getTtype() called, AMateria type: " << type << std::endl;
	return type;
}