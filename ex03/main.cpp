
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {

	std::cout << "############################################################"<< std::endl;
	std::cout << "############################################################"<< std::endl;
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter *me = new Character("me");
	std::cout << "============================================================" << std::endl;
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "============================================================" << std::endl;
	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "============================================================" << std::endl;
	delete bob;
	delete me;
	delete src;
	std::cout << "============================================================" << std::endl;
//	ICharacter* my = new Character("my");
//	*my = *bob;
//	my->use(0, *me);
//	me->unequip(1);
//	me->unequip(0);
//	salee.equip(tmp);
//	salee.use(0, *me);



//	ICharacter *me = new Character("me");
//	std::cout << me << '\n';
//	Character you = Character(*me);
//	std::cout << you << '\n';
//	Character a = Character("a");
//	std::cout << &a << '\n';
//	Character b = a;
//	std::cout << &b << '\n';

//	system("leaks abstarctclass");
	return 0;
}