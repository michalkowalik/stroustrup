// Introduction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Introduction.h"
using namespace std;

int main()
{
	Vector v(6);
	Vector a = { 1, 2, 3, 4, 4.3 };

	f(v);

	for (int i = 0; i != a.size(); ++i)
		cout << "| " << a[i] << endl;

	cout << "a size: " << sizeof(a) << endl;

	abstractClassUsage();

	return 0;
}

void f(Vector & v)
{
	// cause exception:
	try
	{
		v[v.size()] = 7;
	}
	catch (std::out_of_range) {
		cout << "bum! out of range exception!" << endl;
	}
}

void abstractClassUsage()
{
	cout << "Using abstract class" << endl;
	VectorContainer vc = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

	use(vc);

}

void use(Container& c)
{
	const int sz = c.size();
	cout << "Reported c.size(): " << sz << endl;

	for (int i = 0; i != sz; ++i)
		cout << c[i] << endl;
}