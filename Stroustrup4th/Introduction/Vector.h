#pragma once

class Vector
{
public:
	Vector(int s);
	Vector(std::initializer_list<double> lst);
	~Vector();
	double& operator[](int i);
	int size();

public:
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