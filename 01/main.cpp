#include <iostream>
#include "triedaA.h"

namespace test {
	int a = 10;
}

using namespace std;

int main()
{
	/*int a = 33;
	int b = 20;

	std::cout << "Hello, World!" << std::endl;

	std::cout << "10 + 20 = " << 10 + 20 << std::endl;

	std::cout << "b = " << b << std::endl;

	std::cout << "a = " << a << std::endl;

	std::cout << "a::test = " << test::a
	          << std::endl;//ak by som pouzil using namespace test tak vypis dopadne rovnako lebo prednost ma premenna deklarovana vo funkcii

	/*
	 * mennny priestor std nam dava k dispozicii:
	 * std::cout    vystup
	 * std::cin     vstup
	 * std::cerr    chybovy vystup
	 * std::clog    logovacia konzola


	cout << "Zadaj cislo typu int: ";
	cin >> b;

	if ( cin.good())
	{
		cout << endl << "zadal si cislo: " << b << endl;
	}
	else
	{
		cout << "Nauc sa datove typy" << endl;
	}*/

	/*
	float pi = 3.14159265;

	cout << pi << endl;
	cout << setprecision(5);
	cout << pi << endl;
	cout << fixed;//upravuje aby setprecision prerabal len desatinne miesta
	cout << pi << endl;

	cout << scientific;
	cout << pi << endl;

	cout.unsetf(ios_base::floatfield);//vrati defaultne nastavenie

	cout << setw(10);//celkova dlzka tlaceneho retazca
	cout << pi << endl;
*/

	triedaA a;
	a.c = 10;
	cout << a.c << endl;

	triedaA *b = new triedaA();
	b->c = 30;
	cout << "c = " << b->c << endl;
	delete b;

	return 0;
}