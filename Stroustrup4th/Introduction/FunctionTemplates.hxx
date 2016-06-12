#pragma once

template<typename Container, typename Value>
Value mySum(const Container& c, Value v)
{
	for (auto x : c)
		v += x;
	return v;
}