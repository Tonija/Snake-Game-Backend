#pragma once
class Snake
{
public:
	Snake();
	Snake(int x, int y);
	void print();
	int x, y;
	Snake *next;
};