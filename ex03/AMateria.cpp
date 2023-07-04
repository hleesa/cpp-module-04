
#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : type(type) {
}

std::string const& AMateria::getType() const {
	return type;
}

AMateria::~AMateria() {
}
