// Lyrchel numbers:

#include "stdafx.h"
using namespace std;

long long Problem55::reverse(long long s)
{
	int l;
	long long tmp = s % 10;

	while ((s = s / 10) > 0)
	{
		l = s % 10;
		tmp = tmp * 10 + l;
	}
	return tmp;
}

bool Problem55::isLychrel(long long s)
{
	s += reverse(s);

	for (int i = 0; i < 49; i++)
	{
		if (isPalindrome(s))
			return false;
		s += reverse(s);
	}
	return true;
}

bool Problem55::isPalindrome(long long s)
{
	return s == reverse(s);
}

void Problem55::solve()
{
	cout << "Solving problem 55: Lychrel numbers" << endl;
	int counter = 0;
	for (int i = 10; i < 10000; i++)
	{
		if (isLychrel(i))
			++counter;
	}
	cout << counter << " Lychrel numbers below 10 000 found" << endl;
}
