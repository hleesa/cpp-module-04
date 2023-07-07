
#include "Brain.hpp"

void Brain::printMessageCall(std::string msg) {
	std::cout << msg << " called, Brain" << std::endl;
}

Brain::Brain() {
	printMessageCall("Default constructor");
	for (size_t i = 0; i < size; ++i) {
		ideas[i] = 'i';
	}
}

Brain::Brain(const Brain& other) {
	printMessageCall("Copy constructor");
	operator=(other);
}

Brain& Brain::operator=(const Brain& other) {
	printMessageCall("Copy assignment operator");
	if (this != &other) {
		for (size_t i = 0; i < size; ++i) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	printMessageCall("Destructor");
}

void Brain::showIdeas() {
	for (size_t i = 0; i < size; ++i) {
		std::cout << ideas[i] << " ";
	}
	std::cout << std::endl;
}