#include <iostream>
//#include <fstream>

using namespace std;

/*class Predok
{
public:
	int premenna;
	virtual void metoda()//tu nieje ; ebo je o definice||| ak je virtual tak sa zabudne pri potomkovi
	{
		cout << "premenna: " << premenna << endl;
	}//je to ekvivalentne k pozdejsi definici
};

class Potomok : public Predok
{
public:
	void metoda()
	{
		cout << "Volanie metody z potomka" << endl ;
	}
};
*/

class A {
protected:
	virtual void metoda()
	{
		cout << "Metoda A" << endl;
	}

public:
	void run()
	{
		metoda();
	}
};

class B : public A {
protected:
	void metoda()
	{
		cout << "metoda B" << endl;
	}
};

int main()
{
	/*std::cout << "Progrm pre nacitanie a zapis do suboru!" << std::endl;

	ifstream in("main.cpp");
	ofstream out("main-kopia.cpp");

	string s;

	if ( in.good())
	{
		while ( getline(in, s))
		{
			out << s << endl;
		}
	}*/

	/*Potomok p;

	p.metoda();*/

	B b;
	b.run();

	return 0;
}