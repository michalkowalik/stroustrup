#include "stdafx.h"
#include "Vector.h"
using namespace std;

Vector::Vector(int s)
	:elem {new double[s]}, sz{s}
{
	for (int i = 0; i != s; ++i)
		elem[i] = 0;
}

Vector::Vector(std::initializer_list<double> lst)
	:elem{ new double[lst.size()] },
	 sz{ static_cast<int>(lst.size()) }
{
	copy(lst.begin(),
		 lst.end(),
		 stdext::checked_array_iterator<double*>(elem, lst.size()));
}

Vector::~Vector()
{
	delete[] elem;
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

// VectorContainter -- still keep it in single file:

VectorContainer::VectorContainer(int s): v(s) {}
VectorContainer::VectorContainer(std::initializer_list<double> lst)
	: v(lst) {}

double & VectorContainer::operator[](int i)
{
	return v[i];
}

int  VectorContainer::size()
{
	return v.size();
}
