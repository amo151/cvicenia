#include <iostream>
#include <cmath>
#include <string>
#include "ppc-hw01-balgajan.h"

using namespace std;

int main()
{
	int typObjektu;
	Objekt *objekt = NULL;


	while ((typObjektu = menu1()) != 0 )//vypytam od uzivatela aky chce objekt
	{
		if ( hodnotyUser())//ak chce zadavat hodnoty uzivatel
		{
			if ( pridel(typObjektu, &objekt) == 100 )//funkciou pridel pridelim do objektu typ objektu
			{
				objekt = new Trojuholnik;//nieco naalokujem aby bolo co zmazat
				break;
			}
			objekt->nastav();//pouzijem nastav() na nastavenie hodnot od uzivatela
		}
		else
		{
			if ( pridel(typObjektu, &objekt) == 100 )//
			{
				objekt = new Trojuholnik;//nieco naalokujem aby bolo co zmazat
				break;
			}
		}

		if ( menu2(&objekt) == 100 )//chcem pokracovat
		{
			delete objekt;
		}
		else
		{
			break;
		}
	}

	delete objekt;
	return 0;
}


/*******************************
 * **     Trojuholnik         **
 *******************************
 */
double Trojuholnik::vypocitajObvod()
{
	std::cout << "Rozmery trojuholnika su: a = " << a << " b = " << b << " c = " << c << std::endl;
	return a + b + c;
}

double Trojuholnik::vypocitajPlochu()//vypocet heronovym vzorcom
{
	double s = (a+b+c) / 2.0;
	std::cout << "Rozmery trojuholnika su: a = " << a << " b = " << b << " c = " << c << std::endl;
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
	if ( a + b > c && b + c > a && c + a > b && a != 0 && b != 0 && c != 0 )
	{
		return true;
	}
	else
	{
		std::cout << "Neplati trojuhonikova nerovnost!" << std::endl;
		return false;
	}
}

Trojuholnik::Trojuholnik(double stranaA, double stranaB, double stranaC)
{

	a = stranaA;
	b = stranaB;
	c = stranaC;
	while ( !isValid())
	{
		std::cerr << "Zadajte spravne hodnoty!!!" << std::endl;
		nastav();
	}
}

void Trojuholnik::nastav()
{
	double _var;
	do
	{
		do
		{
			std::cout << "Zadajte stranu a trojuholnika:" << std::endl;
			std::cin >> _var;
			if ( !std::cin.good() || _var <= 0 )
			{
				std::cout << "Zadajte spravnu hodnotu(double)!" << std::endl;
				std::cin.clear();
				while ( std::cin.get() != '\n' )
				{
				}
				continue;
			}
			break;
		} while ( true );

		a = _var;

		do
		{
			std::cout << "Zadajte stranu b trojuholnika:" << std::endl;
			std::cin >> _var;
			if ( !std::cin.good() || _var <= 0 )
			{
				std::cout << "Zadajte spravnu hodnotu(double)!" << std::endl;
				std::cin.clear();
				while ( std::cin.get() != '\n' )
				{
				}
				continue;
			}
			break;
		} while ( true );

		b = _var;

		do
		{
			std::cout << "Zadajte stranu c trojuholnika:" << std::endl;
			std::cin >> _var;
			if ( !std::cin.good() || _var <= 0 )
			{
				std::cout << "Zadajte spravnu hodnotu(double)!" << std::endl;
				std::cin.clear();
				while ( std::cin.get() != '\n' )
				{
				}
				continue;
			}
			break;
		} while ( true );

		c = _var;

	} while ( !isValid());
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
	if ( stranaA > 0 && stranaB > 0 )
	{
		a = stranaA;
		b = stranaB;
	}
	else
	{
		std::cerr << "Zadajte platne hodnoty!!!" << std::endl;
		nastav();
	}
}

void Obdlznik::nastav()
{
	double _var;

	do
	{
		std::cout << "Zadajte stranu a:" << std::endl;
		std::cin >> _var;
		if ( !std::cin.good() || _var <= 0 )
		{
			std::cout << "Zadajte spravnu hodnotu(double)!" << std::endl;
			std::cin.clear();
			while ( std::cin.get() != '\n' )
			{
			}
			continue;
		}
		break;
	} while ( true );

	a = _var;

	do
	{
		std::cout << "Zadajte stranu b:" << std::endl;
		std::cin >> _var;
		if ( !std::cin.good() || _var <= 0 )
		{
			std::cout << "Zadajte spravnu hodnotu(double)!" << std::endl;
			std::cin.clear();
			while ( std::cin.get() != '\n' )
			{
			}
			continue;
		}
		break;
	} while ( true );

	b = _var;
}

double Obdlznik::vypocitajObvod()
{
	std::cout << "Rozmery " << (a == b ? "stvorca" : "obdlznika") << "a su: a = " << a << " b = " << b << std::endl;
	return 2 * (a + b);
}

double Obdlznik::vypocitajPlochu()
{
	std::cout << "Rozmery " << (a == b ? "stvorca" : "obdlznika") << "su: a = " << a << " b = " << b << std::endl;
	return a * b;
}

/*******************************
 * **       Stvorec           **
 *******************************
 */
Stvorec::Stvorec(double a)
{
	Stvorec::a = a;
	Stvorec::b = a;
}


void Stvorec::nastav()
{
	double _var;

	do
	{
		std::cout << "Zadajte stranu stvorca: " << std::endl;
		std::cin >> _var;
		if ( !std::cin.good() || _var <= 0 )
		{
			std::cout << "Zadajte spravnu hodnotu(double)!" << std::endl;
			std::cin.clear();
			while ( std::cin.get() != '\n' )
			{
			}
			continue;
		}
		break;
	} while ( true );
	a = _var;
	b = _var;
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
		std::cerr << "Zadajte platnu hodnotu!!!" << std::endl;
		nastav();
	}
}

void Kruh::nastav()
{
	double _var;

	do
	{
		std::cout << "Zadajte polomer" << std::endl;
		std::cin >> _var;
		if ( !std::cin.good() || _var <= 0 )
		{
			std::cout << "Zadajte spravnu hodnotu(double)!" << std::endl;
			std::cin.clear();
			while ( std::cin.get() != '\n' )//vymazavam buffer
			{
			}
			continue;
		}
		break;
	} while ( true );

	r = _var;
}


double Kruh::vypocitajObvod()
{
	std::cout << "Polomer kruhu je: r = " << r << std::endl;
	return 2 * M_PI * r;
}

double Kruh::vypocitajPlochu()
{
	std::cout << "Polomer kruhu je: r = " << r << std::endl;
	return M_PI * r * r;
}


int menu1()
{
	int vyber = 0;
	do
	{
		std::cout << "Vyberte pozadovany objekt: " << std::endl;
		std::cout << "[1]    Trojuholnik" << std::endl;
		std::cout << "[2]    Obdlznik" << std::endl;
		std::cout << "[3]    Stvorec" << std::endl;
		std::cout << "[4]    Kruh" << std::endl;
		std::cout << "[0]	 Skoncit program." << std::endl;
		std::cin >> vyber;
		if ( !std::cin.good() || (vyber < 0 || vyber > 4) )
		{
			std::cout << "Zadajte spravnu hodnotu!" << std::endl;
			std::cin.clear();
			while ( std::cin.get() != '\n' )
			{
			}
			continue;
		}
		break;
	} while ( true );
	return vyber;

}

bool hodnotyUser()
{
	std::string string;
	std::cout << "Chcete zadavat hodnoty manualne?(yes/no)" << std::endl;
	std::cin >> string;
	return string.compare("yes") == 0;

}

int pridel(int typ, Objekt **objekt)
{
	static int i = 0;
	switch ( typ )
	{
		case 1:
			*objekt = new Trojuholnik;
			break;
		case 2:
			*objekt = new Obdlznik;
			break;
		case 3:
			*objekt = new Stvorec;
			break;
		case 4:
			*objekt = new Kruh;
			break;
		default:
			std::cout << "Koniec programu!" << std::endl;
			return 100 + (i++);
	}
	return 0;
}

int menu2(Objekt **objekt)
{
	int akcia;
	do
	{
		do
		{
			std::cout << "\nCo chcete s objektom vykonat?" << std::endl;
			std::cout << "[1]     Vypocitat obsah" << std::endl;
			std::cout << "[2]     Vypocitat obvod" << std::endl;
			std::cout << "[0]     Nechcem robit nic." << std::endl;
			std::cin >> akcia;
			if ( !std::cin.good() || (akcia < 0 || akcia > 2) )
			{
				std::cout << "Zadajte spravnu hodnotu!" << std::endl;
				std::cin.clear();
				while ( std::cin.get() != '\n' )
				{
				}
				continue;
			}
			break;
		}while(true);

		switch ( akcia )
		{
			case 1:
				std::cout << "Plocha vami zvoleneho objektu je: " << (*objekt)->vypocitajPlochu() << std::endl << std::endl;
				break;
			case 2:
				std::cout << "Obvod vami zvoleneho objektu je: " << (*objekt)->vypocitajObvod() << std::endl
				          << std::endl;
				break;
			default:
				std::cout << "Vami zadany objekt bol zmazany." << std::endl;
				std::string ret;
				std::cout << "Chcete pokracovat s inym objektom? (yes/no)" << std::endl;
				std::cin >> ret;
				if ( ret.compare("yes") != 0 )
				{
					std::cout << "Ukoncujem program..." << std::endl;
					return 0;//chcem skoncit uplne
				}
				return 100;
		}
	} while ( akcia != 0 );
	return 0;
}