// Hanoi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	int disks;
	cout << "Number of disks: " << endl;
	cin >> disks;
	Hanoi h;
	h.solve(disks, 'A', 'B', 'C');
	cout << "Took " << h.moveCount() << " to solve the problem" << endl;
}

void Hanoi::solve(int m, char a, char b, char c)
{
	if (m == 1)
	{
		cout << "Move " << m << " from  " << a << " to " << c << endl;
		moves += 1;
	}
	else
	{
		solve(m - 1, a, c, b);
		cout << "!Move " << m << " from " << a << " to " << c << endl;
		moves += 1;
		solve(m - 1, b, a, c);
	}
}


int Hanoi::moveCount()
{
	return moves;
}