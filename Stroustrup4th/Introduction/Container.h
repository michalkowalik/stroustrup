#pragma once

class Container {
public:
	virtual double& operator[](int) = 0;
	virtual int size()  = 0;
	virtual ~Container() {}
};