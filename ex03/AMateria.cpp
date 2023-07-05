
#include "AMateria.hpp"

void AMateria::printMessageCall(std::string msg) {
	std::cout << msg << " called, AMateria type: " << type << std::endl;
}

AMateria::AMateria(const std::string& type) : type(type) {
	printMessageCall("Parameterized constructor");
}

std::string const& AMateria::getType() const {
	return type;
}

AMateria::~AMateria() {
	printMessageCall("Destructor");
}
