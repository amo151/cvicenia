#include <iostream>
#include "Objekt.h"

using namespace std;

int main()
{
	int typObjektu;
	int akcia;

	Objekt *objekt = NULL;

	while ((typObjektu = menu1()) != 0 )
	{
		if ( hodnotyUser())//ak chce zadavat hodnoty uzivatel
		{
			switch ( typObjektu )
			{
				case 1:
					objekt = new Trojuholnik;
					break;
				case 2:
					objekt = new Obdlznik;
					break;
				case 3:
					objekt = new Stvorec;
					break;
				case 4:
					objekt = new Kruh;
					break;
				default:
					cout << "Koniec programu!" << endl;
					delete objekt;
					return 0;
			}
			objekt->nastav();
		}
		else
		{
			switch ( typObjektu )
			{
				case 1:
					objekt = new Trojuholnik;
					break;
				case 2:
					objekt = new Obdlznik;
					break;
				case 3:
					objekt = new Stvorec;
					break;
				case 4:
					objekt = new Kruh;
					break;
				default:
					cout << "Koniec programu!" << endl;
					delete objekt;
					return 0;
			}

		}


		do
		{
			cout << "\nCo chcete s objektom vykonat?" << endl;
			cout << "[1]     Vypocitat obsah" << endl;
			cout << "[2]     Vypocitat obvod" << endl;
			cout << "[0]     Nechcem robit nic." << endl;
			cin >> akcia;
			switch ( akcia )
			{
				case 1:
					cout << "Plocha vymi zvoleneho objektu je: " << objekt->vypocitajPlochu() << endl;
					break;
				case 2:
					cout << "Obvod vami zvoleneho objektu je: " << objekt->vypocitajObvod() << endl << endl;
					break;
				default:
					delete objekt;
					cout << "Vami zadany objekt bol zmazany." << endl;
					string string;
					cout << "Chcete pokracovat s inym objektom? (yes/no)" << endl;
					cin >> string;
					if ( string.compare("yes") == 0 )
					{
						break;
					}
					else
					{
						cout << "Ukoncujem program..." << endl;
						return 0;
					}
			}
		} while ( akcia != 0 );
		delete objekt;
	}
	return 0;
}