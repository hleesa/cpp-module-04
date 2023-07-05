
#include "Cat.hpp"

void Cat::printMessageCall(std::string msg) {
	std::cout << msg << " called, Cat type: " << type << std::endl;
}

Cat::Cat() : Animal() {
	type = "Cat";
	printMessageCall("Default constructor");
}

Cat::Cat(const Cat& other) : Animal(other) {
	printMessageCall("Copy constructor");
}

Cat& Cat::operator=(const Cat& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Cat::~Cat() {
	printMessageCall("Destructor");
}

void Cat::makeSound() const {
	std::cout << "m i a o w" << std::endl;
}
