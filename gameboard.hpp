#ifndef GAMEBOARD_HPP
#define GAMEBOARD_HPP

#include <string> 
#include <ncurses.h>

using namespace std;

class Gameboard {
	private:
	  WINDOW *wnd;

	public:
	  Gameboard(int, int, string);
	  virtual ~Gameboard();
	  virtual WINDOW *getWindowHandle();
	  
};

class Point{
	public:
	int x; 
	int y;
};




#endif

