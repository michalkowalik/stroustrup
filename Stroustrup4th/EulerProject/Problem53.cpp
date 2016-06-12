// Combinatoric selections

#include "stdafx.h"
#include "Problem53.h"
using namespace std;


void Problem53::solve()
{
	int counter = 0;
	cout << "Euler project, problem 53: " << endl;
	for (int i = 23; i <= 100; ++i)
	{
		counter += millionCombinations(i);
	}

	cout << "Result: " << counter << endl;
}


// do not calculate the factorial - 
// go from the back of the n value (23 for example)
// and check number of possibilites one after another
// that way ony single multiplication and single division is needed
// and no risk of exceeding int capabilities
long Problem53::millionCombinations(int i)
{
	int res = 1;
	int threshold = i;
	int c = i - 1;

	while (threshold < 1000000)
	{
		threshold = (threshold * c) / (res + 1);
		c -= 1;
		res += 1;
	}
	return i - (2 * res)  + 1;
}
