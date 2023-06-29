
#include "Animal.hpp"

Animal::Animal() : type("none") {
	std::cout << "Animal type:" << type << " Default constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Animal type:" << type << " Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal type:" << type << " Copy assignment operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal type:" << type << " Destructor called" << std::endl;
}