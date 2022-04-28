#include <curses.h>
#include <iostream>
#define lenOfFrame 8

using namespace std;

void ncurseInput(int array[]) {
    initscr();
    int ch;
    for (int i=0;i<lenOfFrame;i++) {
         if (((ch) = getch()) == ERR) {
         }
         else {
             cout << "Input is " << ch << endl;
             array[i]=ch;
         }
    }

    //endwin();
}
