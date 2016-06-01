#include "stdafx.h"
#include "Vector.h"
using namespace std;

Vector::Vector(int s)
	:elem {new double[s]}, sz{s}
{
}

double & Vector::operator[](int i)
{
	if (i < 0 || size() <= i) throw out_of_range("blah!");
	return elem[i];
}

int Vector::size()
{
	return sz;
}
