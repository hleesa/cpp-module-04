
#include "Dog.hpp"

Dog::Dog() : Animal() {
	type = "Dog";
	brain = new Brain;
	std::cout << "Default constructor called, Dog type: " << type <<  std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Copy constructor called, Dog type: " << type <<  std::endl;
	if (other.brain == NULL) {
		brain = NULL;
	}
	else {
		brain = new Brain;
		*brain = *other.brain;
	}
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Copy assignment operator called, Dog type: " << type <<  std::endl;
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
	std::cout << "Destructor called, Dog type: " << type <<  std::endl;
	delete brain;
}

void Dog::makeSound() const{
	std::cout << "b a r k" << std::endl;
}