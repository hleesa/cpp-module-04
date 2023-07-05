
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {

private:
	void printMessageCall(std::string msg);

public:
	Cat();

	Cat(const Cat& other);

	Cat& operator=(const Cat& other);

	~Cat();

	void makeSound() const;
};


#endif //CAT_HPP
