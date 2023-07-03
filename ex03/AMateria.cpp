
#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : type(type) {
}

std::string AMateria::getType() const {
	return type;
}