#include <iostream>
#include "Objekt.h"

using namespace std;

int main()
{
	int typObjektu;

	Objekt *objekt = NULL;


	while ((typObjektu = menu1()) != 0 )
	{
		if ( hodnotyUser())//ak chce zadavat hodnoty uzivatel
		{
			if ( pridel(typObjektu, &objekt) == 100 )
			{
				objekt = new Trojuholnik;//nieco naalokujem aby bolo co zmazat
				break;
			}
			objekt->nastav();
		}
		else
		{
			if ( pridel(typObjektu, &objekt) == 100 )
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