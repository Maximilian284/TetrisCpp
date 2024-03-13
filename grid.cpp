#include <ncurses.h>
#include "grid.hpp"

using namespace std;

Grid::Grid(){
    height = 20;
    width = 20;
    start_y = 5;
    start_x = 5;

    initscr();

    WINDOW *window= newwin(height, width, start_y, start_x);
    refresh();

    char borderTB = '-';
    char borderLR = '|';
    char corner = '+';

    wborder(window, borderLR, borderLR, borderTB, borderTB, corner, corner, corner, corner);

    wrefresh(window);

    int close = getch();
    endwin();
}