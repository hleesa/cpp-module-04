
#include "Dog.hpp"

void Dog::printMessageCall(std::string msg) {
	std::cout << msg << " called, Dog type: " << type << std::endl;
}

Dog::Dog() : Animal() {
	type = "Dog";
	printMessageCall("Default constructor");
	brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
	printMessageCall("Copy constructor");
	if (other.brain == NULL) {
		brain = NULL;
	}
	else {
		brain = new Brain();
		*brain = *other.brain;
	}
}

Dog& Dog::operator=(const Dog& other) {
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

Dog::~Dog() {
	printMessageCall("Destructor");
	delete brain;
}

void Dog::makeSound() const{
	std::cout << "b a r k" << std::endl;
}

void Dog::openBrain() {
	brain->showIdeas();
}