#pragma once

template<typename T>
class TemplateVector
{
private:
	T* elem;
	int sz;
public:
	TemplateVector(int s);
	~TemplateVector();

	// copy and move operations:
	T& operator[](int it) const;
	int size() const;

	// begin and end definitions:
	T* begin();
	T* end();
};


// weird way of separating template class header from implementation:
#include "TemplateVector.hxx"
