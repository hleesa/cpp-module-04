
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(const Ice& other) : type(other.type) {

}

Ice& Ice::operator=(const Ice& other) {
	if (this != &other) {

	}
	return *this;
}

Ice::~Ice() {

}