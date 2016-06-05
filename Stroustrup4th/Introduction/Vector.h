#pragma once

class Vector
{
public:
	Vector(int s);
	Vector(std::initializer_list<double> lst);

	// copy constructor:
	Vector(const Vector& a);

	// copy assignment:
	Vector & operator=(const Vector& a);

	~Vector();
	double& operator[](int i);
	int size();

private:
	double* elem;
	int sz;
};

class VectorContainer : public Container {
	Vector v;
public:
	VectorContainer(int s);
	VectorContainer(std::initializer_list<double> lst);
	double& operator[](int i);
	int  size();
};