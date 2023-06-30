
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <stddef.h>
#include <string>

class Brain {

private:
	static const size_t size = 100;
	std::string ideas[size];

public:
	Brain();

	Brain(const Brain& other);

	Brain& operator=(const Brain& other);

	~Brain();

	static size_t getsize();

};


#endif //BRAIN_HPP
