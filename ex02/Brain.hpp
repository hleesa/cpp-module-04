
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

private:
	static const size_t size = 100;
	std::string ideas[size];

	void printMessageCall(std::string msg);

public:
	Brain();

	Brain(const Brain& other);

	Brain& operator=(const Brain& other);

	~Brain();

	void showIdeas();
};


#endif //BRAIN_HPP
