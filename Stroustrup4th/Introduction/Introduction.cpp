// Introduction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Introduction.h"
using namespace std;

int main()
{
	Vector v(6);

	f(v);
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
