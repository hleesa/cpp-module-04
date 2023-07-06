
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void test1() {
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
	std::cout << "############################################################"<< std::endl;
	std::cout << "############################################################"<< std::endl;
}

void test2() {
	std::cout << "############################################################"<< std::endl;
	std::cout << "############################################################"<< std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "============================================================" << std::endl;
	Character* cadet = new Character("cadet");
	Character* bocal = new Character("bocal");
	std::cout << "============================================================" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	cadet->equip(tmp);
	tmp = src->createMateria("cure");
	cadet->equip(tmp);
	std::cout << "============================================================" << std::endl;
	cadet->use(0, *bocal);
	cadet->use(1, *bocal);
	std::cout << "============================================================" << std::endl;
	Character* member = new Character(*cadet);
	member->use(0, *bocal);
	member->use(1, *bocal);
	std::cout << "============================================================" << std::endl;
	delete cadet;
	member->use(0, *bocal);
	member->use(1, *bocal);
	std::cout << "============================================================" << std::endl;
	delete src;
	delete bocal;
	delete member;
	std::cout << "############################################################"<< std::endl;
	std::cout << "############################################################"<< std::endl;
}

void test3() {
	std::cout << "############################################################"<< std::endl;
	std::cout << "############################################################"<< std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "============================================================" << std::endl;
	ICharacter* cadet = new Character("cadet");
	ICharacter* bocal = new Character("bocal");
	std::cout << "============================================================" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	cadet->equip(tmp);
	cadet->equip(tmp);
	cadet->equip(tmp);
	std::cout << "============================================================" << std::endl;
	tmp = src->createMateria("hell ice");
	cadet->equip(tmp);
	std::cout << "============================================================" << std::endl;
	tmp = src->createMateria("ice");
	cadet->equip(tmp);
	tmp = src->createMateria("ice");
	cadet->equip(tmp);
	tmp = src->createMateria("ice");
	cadet->equip(tmp);
	std::cout << "============================================================" << std::endl;
	cadet->use(2, *bocal);
	cadet->unequip(2);
	cadet->unequip(2);
	cadet->use(2, *bocal);
	std::cout << "============================================================" << std::endl;
	tmp = src->createMateria("cure");
	cadet->equip(tmp);
	cadet->use(2, *bocal);
	std::cout << "============================================================" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	std::cout << "============================================================" << std::endl;
	delete src;
	delete cadet;
	delete bocal;
	std::cout << "############################################################"<< std::endl;
	std::cout << "############################################################"<< std::endl;
}

int main() {
//	test1();
//	test2();
//	test3();
//	system("leaks abstarctclass");
	return 0;
}