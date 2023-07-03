
#include "Cure.hpp"

Cure::Cure() : AMateria("ice") {
}

Cure::Cure(const Cure& other) : type(other.type) {
}

Cure& Cure::operator=(const Cure& other) {
	if (this != other) {
	}
	return *this;
}

Cure:: ~Cure() {

}