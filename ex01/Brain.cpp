
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Default constructor called, Brain" << std::endl;
	for (size_t i = 0; i < size; ++i) {
		ideas[i] = i + 1;
	}
}

Brain::Brain(const Brain& other) {
	std::cout << "Copy constructor called, Brain" << std::endl;
	operator=(other);
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "Copy assignment operator called, Brain" << std::endl;
	if (this != &other) {
		for (size_t i = 0; i < size; ++i) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Destructor called, Brain" << std::endl;
}

//void Brain::printAllIdea(){
//	for (size_t i = 0; i < size; ++i) {
//		std::cout << "index[" << i << "]: " << ideas[i] << std::endl;
//	}
//}


//size_t Brain::getsize() {
//	return size;
//}
