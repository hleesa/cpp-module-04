
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {

private:
	std::string name;
	static const int size = 4;
	AMateria* inventory[size];
	int rIdx;
	static const int remainingSize = 1234;
	AMateria* remainingMateria[remainingSize];

	void initInventory();

	void initRemainigMateria();

	void printMessageCall(std::string msg);

	bool isDuplicateMateria(AMateria* m);

	int getEmptyInvenIdx();

	bool isValidIdx(int idx);

public:

	Character();

	Character(const std::string name);

	Character(const Character& other);

	Character& operator=(const Character& other);

	~Character();

	std::string const& getName() const;

	void equip(AMateria* m);

	void unequip(int idx);

	void use(int idx, ICharacter& target);

};

#endif //CHARACTER_HPP
