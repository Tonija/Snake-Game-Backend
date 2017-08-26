#include <iostream>
#include "Snake.h"

using namespace std;

Snake::Snake()
{
	this->x = 0;
	this->y = 0;
	this->next = NULL;
}

Snake::Snake(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Snake::print() {
	cout << "X: " << this->x << " Y: " << this->y << endl;
}