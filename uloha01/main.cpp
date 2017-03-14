#include <iostream>

using namespace std;

class Stack {
private:
	int ukazatel;//ukazuje kde v poli je ulozena posledna hodnota
	int *pole;
public:
	Stack(int pocet);
	~Stack();
	int pop();
	void push(int hodnota);

};

int main()
{
	Stack zasobnik(20);

	zasobnik.push(12);
	zasobnik.push(134);
	zasobnik.push(98);

	cout << "neehehehe" <<endl;

	cout << zasobnik.pop() << endl;
	cout << zasobnik.pop() << endl;
	cout << zasobnik.pop() << endl;


	return 0;
}

Stack::Stack(int pocet)
{
	pole = new int[pocet];
	ukazatel = -1;
}

int Stack::pop()
{
	int prvok = pole[ukazatel];
	pole[ukazatel] = 0;
	--ukazatel;
	return prvok;
}

void Stack::push(int hodnota)
{
	pole[++ukazatel] = hodnota;
}
Stack::~Stack()
{
	delete pole;
}