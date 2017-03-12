#include <iostream>
#include "Objekt.h"
//TODO napisat ochranu aby kazdy objekt po prebehnuti cyklu zanikol asi to bude najlepsie cez pointery spravit

using namespace std;

int main()
{
	int         typObjektu;
	int         akcia;
	Obdlznik    o1;
	Trojuholnik t1;
	Stvorec     s1;
	Kruh        k1;

	Objekt *objekt = NULL;

	while ((typObjektu = menu1()) != 0 )
	{
		if ( hodnotyUser())//ak chce zadavat hodnoty uzivatel
		{
			switch ( typObjektu )
			{
				case 1:
					objekt = &t1;
					break;
				case 2:
					objekt = &o1;
					break;
				case 3:
					objekt = &s1;
					break;
				case 4:
					objekt = &k1;
					break;
				default:
					cout << "Koniec programu!" << endl;
					break;
			}
			objekt->nastav();
		}
		else
		{
			switch ( typObjektu )
			{
				case 1:
					objekt = &t1;
					break;
				case 2:
					o1.setA(15);
					o1.setB(10);
					objekt = &o1;
					break;
				case 3:
					objekt = &s1;
					break;
				case 4:
					objekt = &k1;
					break;
				default:
					cout << "Koniec programu!" << endl;
					return 0;
					break;
			}

		}
		cout << "Co chcete s objektom vykonat?" << endl;
		cout << "1.     Vypocitat obsah" << endl;
		cout << "2.     Vypocitat obvod" << endl;
		cout << "0.     Nechcem robit nic." << endl;
		cin >> akcia;
		switch ( akcia )
		{
			case 1:
				cout << "Plocha vymi zvoleneho objektu je: " << objekt->vypocitajPlochu() << endl;
				break;
			case 2:
				cout << "Obvod vami zvoleneho objektu je: " << objekt->vypocitajObvod() << endl;
				break;
			default:
				cout << "Koniec programu" << endl;
		}

	}
	return 0;
}