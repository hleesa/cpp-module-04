
#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "Dog";
	brain = new Brain;
	std::cout << "Dog type:" << type << " Default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog type:" << type << " Copy constructor called" << std::endl;
	if (other.brain == NULL) {
		brain = NULL;
	}
	else {
		brain = new Brain;
		*brain = *other.brain;
	}
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog type:" << type << " Copy assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		if (other.brain == NULL) {
			brain = NULL;
		}
		else {
			delete brain;
			brain = new Brain;
			*brain = *other.brain;
		}
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog type:" << type << " Destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const{
	std::cout << "b a r k" << std::endl;
}