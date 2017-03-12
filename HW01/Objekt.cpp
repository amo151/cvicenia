//
// Created by Johny on 9. 3. 2017.
//

#include <iostream>
#include <cmath>
#include <string>
#include "Objekt.h"


/*******************************
 * **     Trojuholnik         **
 *******************************
 */
double Trojuholnik::vypocitajObvod()
{
	if ( isValid())
	{
		return a + b + c;
	}
	else
	{
		std::cerr << "Takyto trojuholnik neexistuje!!!" << std::endl;
		return -1;
	}
}

double Trojuholnik::vypocitajPlochu()//vypocet heronovym vzorcom
{
	double s = vypocitajObvod() / 2;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

double Trojuholnik::getA() const
{
	return a;
}

void Trojuholnik::setA(double a)
{
	if ( a > 0 )
	{
		Trojuholnik::a = a;
	}
	else
	{
		std::cerr << "Nepodarilo sa nastaviť stranu a!(zaporna hodnota)" << std::endl;
	}
}

double Trojuholnik::getB() const
{
	return b;
}

void Trojuholnik::setB(double b)
{
	if ( b > 0 )
	{
		Trojuholnik::b = b;
	}
	else
	{
		std::cerr << "Nepodarilo sa nastaviť stranu b!(zaporna hodnota)" << std::endl;
	}
}

double Trojuholnik::getC() const
{
	return c;
}

void Trojuholnik::setC(double c)
{
	if ( c > 0 )
	{
		Trojuholnik::c = c;
	}
	else
	{
		std::cerr << "Nepodarilo sa nastaviť stranu c!(zaporna hodnota)" << std::endl;
	}
}

bool Trojuholnik::isValid()
{
	if ( a + b > c && b + c > a && c + a > b && a != 0 && b != 0 &&
	     c != 0 )//clion chce toto previes na ternarny operator :-D to je ale usporne IDE :-D
	{
		return true;
	}
	return false;
}

Trojuholnik::Trojuholnik(double stranaA, double stranaB, double stranaC)
{

	a = stranaA;
	b = stranaB;
	c = stranaC;
	if ( !isValid())
	{
		std::cerr
				<< "Parametre boli nastavene ale nie su spravne preto kazda operacia bude vyhodnotena ako neuskutocnitelna!!!"
				<< std::endl;
	}
}

void Trojuholnik::nastav()
{
	double _var;
	std::cout << "Zadajte stranu a trojuholnika:" << std::endl;
	std::cin >> _var;
	if ( std::cin.good() && _var > 0 )
	{
		a=_var;
	}
	std::cout << "Zadajte stranu b trojuholnika:" << std::endl;
	std::cin >> _var;
	if ( std::cin.good() && _var > 0 )
	{
		b= _var;
	}
	std::cout << "Zadajte stranu b trojuholnika:" << std::endl;
	std::cin >> _var;
	if ( std::cin.good() && _var > 0 )
	{
		c=_var;
	}

}

/*******************************
 * **       Obdlznik          **
 *******************************
 */

double Obdlznik::getA() const
{
	return a;
}

void Obdlznik::setA(double a)
{
	if ( a > 0 )
	{
		Obdlznik::a = a;
	}
	else
	{
		std::cerr << "Nepodarilo sa nastaviť stranu a!(zaporna hodnota)" << std::endl;
	}
}

double Obdlznik::getB() const
{
	return b;
}

void Obdlznik::setB(double b)
{
	if ( b > 0 )
	{
		Obdlznik::b = b;
	}
	else
	{
		std::cerr << "Nepodarilo sa nastaviť stranu b!(zaporna hodnota)" << std::endl;
	}
}

Obdlznik::Obdlznik(double stranaA, double stranaB)
{
	if ( stranaA != 0 && stranaB != 0 && stranaA > 0 && stranaB > 0 )
	{
		a = stranaA;
		b = stranaB;
	}
	else
	{
		std::cerr << "Nepodarilo sa zostaviť objekt!!!" << std::endl;
	}
}

void Obdlznik::nastav()
{
	double _var;
	std::cout << "Zadajte stranu a:" << std::endl;
	std::cin >> _var;
	if ( std::cin.good() && _var > 0 )
	{
		a = _var;
	}
	else
	{
		std::cerr << "Neplatny vstup!!" << std::endl;
	}
	std::cout << "Zadajte stranu b:" << std::endl;
	std::cin >> _var;
	if ( std::cin.good() && _var > 0 )
	{
		b = _var;
	}
	else
	{
		std::cerr << "Neplatny vstup!!" << std::endl;
	}
}

double Obdlznik::vypocitajObvod()
{
	return 2 * (a + b);
}

double Obdlznik::vypocitajPlochu()
{
	return a * b;
}

/*******************************
 * **       Stvorec           **
 *******************************
 */
Stvorec::Stvorec(double a)
{
	if ( a > 0 )
	{
		Stvorec::a = a;
		Stvorec::b = a;
	}
	else
	{
		std::cerr << "Nepodarilo sa zostaviť objekt!!!" << std::endl;
	}
}

void Stvorec::nastav()
{
	double _var;
	std::cout << "Zadajte stranu stvorca: " << std::endl;
	std::cin >> _var;
	if ( std::cin.good() && _var > 0 )
	{
		a = _var;
		b = _var;
	}
	else
	{
		std::cerr << "Neplatny vstup!!" << std::endl;
	}
}

/*******************************
 * **        Kruh             **
 *******************************
 */

double Kruh::getR() const
{
	return r;
}

void Kruh::setR(double r)
{
	if ( r > 0 )
	{
		Kruh::r = r;
	}
	else
	{
		std::cerr << "Nepodarilo sa nastaviť polomer!(zaporna hodnota)" << std::endl;
	}
}

Kruh::Kruh(int r)
{
	if ( r > 0 )
	{
		Kruh::r = r;
	}
	else
	{
		std::cerr << "Nepodarilo sa zostaviť objekt!!!" << std::endl;
	}
}

void Kruh::nastav()
{
	double _var;
	std::cout << "Zadajte polomer" << std::endl;
	std::cin >> _var;
	if ( std::cin.good() && _var > 0 )
	{
		r = _var;
	}
	else
	{
		std::cerr << "Neplatny vstup!!" << std::endl;
	}
}


double Kruh::vypocitajObvod()
{
	return 2 * M_PI * r;
}

double Kruh::vypocitajPlochu()
{
	return M_PI * r * r;
}


int menu1()
{
	int vyber = 0;
	do
	{
		std::cout << "Vyberte pozadovany objekt: " << std::endl;
		std::cout << "1.    Trojuholnik" << std::endl;
		std::cout << "2.    Obdlznik" << std::endl;
		std::cout << "3.    Stvorec" << std::endl;
		std::cout << "4.    Kruh" << std::endl;
		std::cout << "0.    Skoncit program." << std::endl;
		std::cin >> vyber;
	} while ( std::cin.good() && (vyber < 0 || vyber > 4));
	return vyber;

}

bool hodnotyUser()
{
	std::string string;
	std::cout << "Chcete zadavat hodnoty manualne?(yes/no)" << std::endl;
	std::cin >> string;
	if ( string.compare("yes") == 0 )
	{
		return true;
	}

	return false;
}


