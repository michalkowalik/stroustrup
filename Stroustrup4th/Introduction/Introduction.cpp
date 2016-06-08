// Introduction.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

using namespace std;

int main()
{
	Vector v(6);
	Vector a = { 1, 2, 3, 4, 4.3 };

	// throw exception:
	f(v);

	for (int i = 0; i != a.size(); ++i)
		cout << "| " << a[i] << endl;

	cout << "a size: " << sizeof(a) << endl;

	abstractClassUsage();

	Vector v1 = { 1,2,3,4 };
	badCopy(v1);

	cout << "Move containers:" << endl;
	Vector z = moveContainers();

	cout << "3.4.2. Templates" << endl;
	useTemplates();

	cout << endl << "Destructors at work:" << endl;
	return 0;
}

// how to catch exception:
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


// 3.3.1 Copying containers:


void badCopy(Vector v1)
{
	Vector v2 = v1;
	v1[1] = 20;

	for (int i = 0; i != v2.size(); ++i)
		cout << v2[i] << endl;
}

// 3.3.2 Moving containers:
Vector moveContainers()
{
	Vector x(1000);
	Vector y(1000);
	Vector z(1000);

	z = x;
	y = std::move(x);

	return z;
}

// 3.4. - Templates:
void useTemplates() 
{
	TemplateVector<char> vc(4);
	//TemplateVector<string> vs(16);
	//TemplateVector<list<int>> vli(45);
	//
	vc[0] = 'a';
	vc[1] = 'B';
	vc[2] = 'c';
	vc[3] = 'D';

	cout << "Initialized 3 instances of TemplateVector class" << endl;
	
	for(auto& s : vc)
		cout << s << endl;
}
