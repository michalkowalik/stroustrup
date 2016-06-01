#pragma once

class Vector
{
public:
	Vector(int s);
	double& operator[](int i);
	int size();

public:
	double* elem;
	int sz;
};