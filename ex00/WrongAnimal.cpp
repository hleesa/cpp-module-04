
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("none") {
	std::cout << "Default constructor called, WrongAnimal type: " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	std::cout << "Copy constructor called, WrongAnimal type: " << type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "Copy assignment operator called, WrongAnimal type: " << type << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor called, WrongAnimal type: " << type << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeWrongSound() const {
	std::cout << "a n i " << std::endl;
}