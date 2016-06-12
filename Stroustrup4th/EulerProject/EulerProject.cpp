// EulerProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int sumOfSquaredDigits(int d)
{
	int cur = (d % 10) * (d % 10);
	while ((d = d / 10) > 0)
	{
		cur += (d % 10) * (d % 10);
	}
	return cur;
}

void problem92()
{
	int eighyNines = 0;
	int t;

	for (int i = 1; i < 10000000; ++i)
	{
		t = sumOfSquaredDigits(i);
		while (t != 1 && t != 89)
			t = sumOfSquaredDigits(t);

		if (t == 89)
			++eighyNines;

		if (i % 500000 == 0)
			cout << "|" << i << "|" << endl;
	}
	cout << eighyNines << " numbers below 1e7  ends up as 89" << endl;
}

int main()
{
	// Problem55 p55;
	// p55.solve();

	Problem53 p53;
	auto start = std::chrono::high_resolution_clock::now();
	p53.solve();
	auto end = std::chrono::high_resolution_clock::now();
	auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

	cout << "Ececution time: " << elapsed.count() << " ms" << endl;
    return 0;
}
