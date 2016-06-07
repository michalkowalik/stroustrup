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
	T& operator[](int it);
	int size();
};
