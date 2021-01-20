/*aaaamain und so !
 */


#include <string> 
#include <unistd.h>
#include <ncurses.h>
#include <memory>

#include "gameboard.hpp"


using namespace std;

#define WAIT_TICK 10000

WINDOW *wnd;
shared_ptr<Gameboard> gb;





int init() {
	gb = make_shared<Gameboard>(10, 10, "");
	wnd = gb->getWindowHandle();
	return 0;
}

void run() {

	int in_char;
	bool exit_requested = false;

	while(!exit_requested) {
		in_char = wgetch(wnd);
		switch(in_char) {
			case 'q':
				exit_requested = true;
				break;
			case KEY_UP:
			case 'w':
				break;
			case KEY_DOWN:
			case 's':
				break;
			case KEY_LEFT:
			case 'a':
				break;
			case KEY_RIGHT:
			case 'd':
				break;
			default:
				break;
		}
		usleep(WAIT_TICK); // 10ms

		wrefresh(wnd);
	}
}

void close(){
	endwin();
}


int main(){
	init();
	run();
	close();
}


