
#include "Cat.hpp"

Cat::Cat() : Animal() {
	type = "Cat";
	brain = new Brain;
	std::cout << "Cat type:" << type << " Default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat type:" << type << " Copy constructor called" << std::endl;
	if (other.brain == NULL) {
		brain = NULL;
	}
	else {
		brain = new Brain;
		*brain = *other.brain;
	}
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat type:" << type << " Copy assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		delete brain;
		if (other.brain == NULL) {
			brain = NULL;
		}
		else {
			brain = new Brain;
			*brain = *other.brain;
		}
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat type:" << type << " Destructor called" << std::endl;
	delete brain;
}

void Cat::makeSound() const {
	std::cout << "m i a o w" << std::endl;
}
