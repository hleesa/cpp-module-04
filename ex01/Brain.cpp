
#include "Brain.hpp"

Brain::Brain() {
}

Brain::Brain(const Brain& other) {
	operator=(other);
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (size_t i = 0; i < size; ++i) {
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
}

size_t Brain::getsize() {
	return size;
}
