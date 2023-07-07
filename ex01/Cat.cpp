
#include "Cat.hpp"

void Cat::printMessageCall(std::string msg) {
	std::cout << msg << " called, Cat type: " << type << std::endl;
}

Cat::Cat() : Animal() {
	type = "Cat";
	printMessageCall("Default constructor");
	brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
	printMessageCall("Copy constructor");
	if (other.brain == NULL) {
		brain = NULL;
	}
	else {
		brain = new Brain();
		*brain = *other.brain;
	}
}

Cat& Cat::operator=(const Cat& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		Animal::operator=(other);
		if (other.brain == NULL) {
			brain = NULL;
		}
		else {
			*brain = *other.brain;
		}
	}
	return *this;
}

Cat::~Cat() {
	printMessageCall("Destructor");
	delete brain;
}

void Cat::makeSound() const {
	std::cout << "m i a o w" << std::endl;
}
