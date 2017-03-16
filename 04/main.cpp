#include <iostream>

using namespace std;
/*
class A {
	//virtualni bazova trieda

	int aa;
public:
	A(int h)
	{
		aa = h;
		cout << "konstruktor A" << endl;
	}

	void fa() const
	{
		cout << "fa() .. " << aa << endl;
	}

	~A()
	{
		cout << "destruktor A" << endl;
	}

};

class B : virtual public A {
	//je treba dedit virtualne, inak sa bude opakovane volat konstruktor A v triede D

	int bb;
public:
	B(int h) : A(h)
	{
		bb = h;
		cout << "konstruktor B" << endl;
	}

	void fb() const
	{
		cout << "fb() .. " << bb << endl;
	}

	~B()
	{
		cout << "destruktor B" << endl;
	}
};

class C : virtual public A {

	int cc;
public:
	C(int h) : A(h)
	{
		cc = h;
		cout << "konstruktor C" << endl;
	}

	void fc() const
	{
		cout << "fc() .. " << cc << endl;
	}

	~C()
	{
		cout << "destruktor C" << endl;
	}
};


/*
class ABC : public A, public B, public C {
public:
	ABC(int a, int b, int c) : C(c), B(b), A(a) {	}

};*/
/*
class D : public B, public C {
	//vysledna trieda bude obsahovat tolko podobejktov dane triedy a, kolkokrat je tato trieda nevirtualnym predkom a jeden spolocny podobejkt A za vsetkych virtualnych predkov triedy A
	int dd;
public:
	D(int h) :A(h), B(h + 1), C(h + 2)//explicitne musim zavolat konstruktor A
	{
		dd = h;
		cout << "kosntruktor D" << endl;
	}

	void fd() const
	{
		cout << "fd() .. " << dd << endl;
	}

	~D()
	{
		cout << "destruktor D" << endl;
	}
};


int main()
{
	D d1(20);

	d1.fd();
	d1.fc();
	d1.fb();
	d1.fa();

	return 0;
}*/

class A {
public:
	A operator++();//prefixovy operator
	A operator&(A);//binarny operator
	A operator&();//unarni operator
};

struct complex {
	double re, im;
};

complex operator+(complex a, complex b)
{
	complex tmp;
	tmp.re = a.re + b.re;
	tmp.im = a.im + b.im;
	return tmp;
}


int main(void)
{
	complex X = {1.0, 2.0};
	complex Y = {2.0, 1.0};
	complex Z;

	Z = X + Y;

	cout << "re: " << Z.re << endl << "im: " << Z.im << endl;
	return 0;
}