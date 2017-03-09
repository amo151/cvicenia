#include <iostream>

using namespace std;

class A {
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


};

int main()
{
	A a(10);
	cout << "a = " << a.vratA() << endl << "b = " << a.vratB() << endl;

	B b(33);
	cout << "b = " << b.vratA() << endl;

	cout << "pi = " << B::pi() << endl;

	return 0;
}