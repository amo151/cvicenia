#include <iostream>
using namespace std;
class A
{
	int a,b;
public:
	A(int h):a(h),b(h){}
	int vratA()const {return a;}
	int vratB()const {return b;}
};

int main()
{
	A a(10);
	cout << "a = " << a.vratA() <<endl<< "b = " << a.vratB()<<endl;
	return 0;
}