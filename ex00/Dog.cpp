
#include "Dog.hpp"

void Dog::printMessageCall(std::string msg) {
	std::cout << msg << " called, Dog type: " << type << std::endl;
}

Dog::Dog() : Animal() {
	type = "Dog";
	printMessageCall("Default constructor");
}

Dog::Dog(const Dog& other) : Animal(other) {
	printMessageCall("Copy constructor");
}

Dog& Dog::operator=(const Dog& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog() {
	printMessageCall("Destructor");
}

void Dog::makeSound() const {
	std::cout << "b a r k" << std::endl;
}