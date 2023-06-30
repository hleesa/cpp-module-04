
#include "Animal.hpp"

Animal::Animal() : type("none") {
	std::cout << "Default constructor called, Animal type:" << type <<  std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Copy constructor called, Animal type:" << type <<  std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Copy assignment operator called, Animal type:" << type <<  std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Destructor called, Animal type:" << type <<  std::endl;
}

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "a n y m o r e" << std::endl;
}