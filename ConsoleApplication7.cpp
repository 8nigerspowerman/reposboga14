#include <iostream>
#include"Airplane.h"
#include <iostream>

using namespace std;

int main()
{
	Airplane c1 = Airplane();
	Airplane c2 = Airplane();
	c1.operator++(21);
	c2.operator++(32);


	cout << (c1 == c2) << endl;
	cout << (c1 > c2) << endl;

	c1.show();
	c2.show();
}