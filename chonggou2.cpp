#include <iostream>
using namespace std;

class A
{
	float a,b;
public:
	A(float,float);
	void info();
	
};

A :: A(float x,float y)
{
	a = x;
	b = y;
}

void A :: info()
{
	cout << "a=" << a << "\tb=" << b <<endl;
}

int main(void)
{
	A w(3.2f,6.3f);
	
	w.info();
	
	return 0;
}







