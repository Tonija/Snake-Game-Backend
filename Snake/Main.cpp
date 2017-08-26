#include <iostream>
#include <conio.h>
#include "Snake.h"

using namespace std;

void display(Snake *snake);
void feed(Snake *snake, int x, int y);

int main() {
	Snake head;
	char action;

	do {
		action = _getch();
		switch (action)
		{
		case 'd':
			feed(&head, head.x + 1, head.y);
			display(&head);
			break;
		case 'a':
			feed(&head, head.x - 1, head.y);
			display(&head);
			break;
		case 'w':
			feed(&head, head.x, head.y + 1);
			display(&head);
			break;
		case 's':
			feed(&head, head.x, head.y - 1);
			display(&head);
			break;

		default:
			display(&head);
			break;
		}
		cout << "\n";
	} while (action != 'x');

	system("PAUSE");
	return 0;
}

void display(Snake *snake) {
	snake->print();
	if (snake->next != NULL)
		display(snake->next);
}

void feed(Snake *head, int x, int y) {

	Snake *tail = new Snake();

	tail->x = head->x;
	tail->y = head->y;

	head->x = x;
	head->y = y;

	tail->next = head->next;
	head->next = tail;
	return;
}
