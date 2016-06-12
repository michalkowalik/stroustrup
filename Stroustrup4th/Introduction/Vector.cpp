#include "stdafx.h"
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
		 //elem);
}

Vector::Vector(const Vector & a)
	:elem{new double[a.sz]},
	sz{a.sz}
{
	for (int i = 0; i != sz; ++i)
		elem[i] = a.elem[i];
}

Vector & Vector::operator=(const Vector & a)
{
	double* p = new double[a.sz];
	for (int i = 0; i != a.sz; ++i)
		p[i] = a.elem[i];
	delete[] elem;
	elem = p;
	sz = a.sz;
	return *this;
}

// move constructor:
Vector::Vector(Vector&& a)
	:elem{a.elem},
	 sz{a.sz}
{
	a.elem = nullptr;
	a.sz = 0;
}

Vector::~Vector()
{
	cout << "Destroying vector, reported sz: "  << sz << endl;
	delete[] elem;
}

double & Vector::operator[](int i)
{
	if (i < 0 || size() <= i) throw out_of_range("blah!");
	return elem[i];
}

// Copy constructor:
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
