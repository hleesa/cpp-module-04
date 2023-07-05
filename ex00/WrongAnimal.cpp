
#include "WrongAnimal.hpp"

void WrongAnimal::printMessageCall(std::string msg) {
	std::cout << msg << " called, WrongAnimal type: " << type << std::endl;
}

WrongAnimal::WrongAnimal() : type("none") {
	printMessageCall("Default constructor");
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	printMessageCall("Copy constructor");
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	printMessageCall("Destructor");
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeWrongSound() const {
	std::cout << "a n i " << std::endl;
}