#include "stdafx.h"
#include "TemplateVector.h"
using namespace std;

template<typename T>
TemplateVector<T>::TemplateVector(int s)
{
	if(s < 0) throw length_error();
	elem = new T[s];
	sz = s;
}

template<typename T>
TemplateVector<T>::~TemplateVector()
{
	delete[] elem;
}
