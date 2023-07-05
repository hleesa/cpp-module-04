
#include "Animal.hpp"

void Animal::printMessageCall(std::string msg) {
	std::cout << msg << " called, Animal type: " << type << std::endl;
}

Animal::Animal() : type("none") {
	printMessageCall("Default constructor");
}

Animal::Animal(const Animal& other) : type(other.type) {
	printMessageCall("Copy constructor");
}

Animal& Animal::operator=(const Animal& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Animal::~Animal() {
	printMessageCall("Destructor");
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "a n i " << std::endl;
}