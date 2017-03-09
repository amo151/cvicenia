#include <iostream>

using namespace std;

/*class A {
	int a, b;
public:
	A(int h) : a(h), b(h){}

	virtual int vratA() const{return a;}
	int vratB() const{return b;}


};

class B:public A {
	mutable int b;//ak v const funkcii chcem menit tak musi byt mutable

public:
	B(int h) : A(h), b(h){}
	int vratA()const {return b++;}

	static double pi() {return 3.14;}


};*/
/**/

void f1(int *a)
{
	*a = 31;
}

void f2(int &a)
{
	a = 32;
}

//virtual double obsahObj() = 0;//plne vritualna funkcia

int main()
{
	/*A a(10);
	cout << "a = " << a.vratA() << endl << "b = " << a.vratB() << endl;

	B b(33);
	cout << "b = " << b.vratA() << endl;

	cout << "pi = " << B::pi() << endl;*/

	/*int a = 1, b = 2;

	int *const p = &a;

	//p=&b;//zel lebo p je konstatna premenna

	int const c = 1;
	//c=2;//nejde

	const int d = 1; //rovnaky zapis ze je to konstanta typu int

	//nemozeme meint adresu kam ukazatel ukazuje ale mozeme menit obsah premennej kam ukazatel ukazuje

	*p = 20;
	cout << "a = " << a << endl;

	const int *q = &a;
	q = p;
	//*q = 3;//nejde

	const int *const r = &a;
	//r=&b;//nejde
	//*r = 3//nejde

	//refernce c++ je implicitne konstantni ukazatel, pretoze po vytvoreni reference neni mozne ju zmenit

	int e  = 1, f = 2;
	int &u = e; //referencia kde u odkazuje na e
	u = e;    //skopiruje obsah e do u ale nedojde ku zmene toho na co premenna ukazuje
	cout << "e= " << e << endl;

	e = 3;
	cout << "u = " << u << endl;*/

	int x  = 10;
	int *b = &x;//ukazatel na x
	int &y = x;//refernce na x

	f1(b);
	cout << "x = " << x << endl;

	f2(y);
	cout << "x = " << x << endl;

	return 0;
}