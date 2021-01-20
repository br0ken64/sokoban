#include <iostream> 
#include <string> 
#include <ncurses.h> 

#include "gameboard.hpp"

using namespace std;

Gameboard::Gameboard(int xMax, int yMax, string fileName) {
	initscr();
	wnd = newwin(yMax, xMax, 1, 1);
	cbreak();
	noecho();
	clear();

	keypad(wnd, true);
	curs_set(0);
	start_color();

	init_pair(1, COLOR_WHITE, COLOR_BLUE);
	wbkgd(wnd, COLOR_PAIR(1));

	attron(A_BOLD);
	box(wnd, 0, 0);
	attroff(A_BOLD);
}

Gameboard::~Gameboard() {
}

WINDOW *Gameboard::getWindowHandle() {
	return wnd;
}


