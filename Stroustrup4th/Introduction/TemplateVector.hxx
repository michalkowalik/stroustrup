// #include "stdafx.h"
using namespace std;

template<typename T>
TemplateVector<T>::TemplateVector(int s)
{
	if(s < 0) throw std::length_error("length should be positive");
	elem = new T[s];
	sz = s;
}

template<typename T>
TemplateVector<T>::~TemplateVector()
{
	delete[] elem;
}

template<typename T>
T& TemplateVector<T>::operator[](int i) const
{
	if( i < 0 || size() <= i)
		throw std::out_of_range("Vector::operator[]");
	return elem[i];
}

template<typename T>
int TemplateVector<T>::size() const
{
	return sz;
}

template<typename T>
T* TemplateVector<T>::begin()
{
	return &elem[0];
}

template<typename T>
T* TemplateVector<T>::end()
{
	return &elem[0] + sz;
}



