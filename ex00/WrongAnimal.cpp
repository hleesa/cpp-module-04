
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("none") {
	std::cout << "WrongAnimal type:" << type << " Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	std::cout << "WrongAnimal type:" << type << " Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal type:" << type << " Copy assignment operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal type:" << type << " Destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeWrongSound() const {
	std::cout << "a n y m o r e" << std::endl;
}