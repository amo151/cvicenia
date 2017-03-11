#include <iostream>
#include "Objekt.h"
/**
 * Vytvor abstraktnu triedu
 * @return
 */


int main()
{
	Objekt *T = new Trojuholnik;

	std::cout << "Obvod " << T->vypocitajObvod()<<std::endl;

	return 0;
}