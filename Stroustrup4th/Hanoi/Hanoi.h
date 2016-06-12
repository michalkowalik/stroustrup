#pragma once

class Hanoi {
private:
	int moves = 0;

public:
	void solve(int m, char a, char b, char c);
	int moveCount();
};

