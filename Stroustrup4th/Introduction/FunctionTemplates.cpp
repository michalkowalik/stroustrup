// 3.4.2: Function templates

#include "stdafx.h"

template<typename Container, typename Value>
Value sum(const Container& c, Value v)
{
	for (auto x : c)
		v += x;
	return v;
}