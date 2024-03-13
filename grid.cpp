#include <ncurses.h>
#include "grid.hpp"

Grid::Grid(int h, int w, int y, int x){
    height = h;
    width = w;
    start_y = y;
    start_x = x;
    running = true;
}

void Grid::show(){
    initscr();

    WINDOW *window = newwin(height, width, start_y, start_x);
    refresh();

    char borderT = ' ';
    char borderB = '=';
    char borderLR = '!';
    char corner = '+';

    wborder(window, borderLR, borderLR, borderT, borderB, corner, corner, corner, corner);
    mvprintw(1, (start_x + width - 6)/2, "Tetris");
    wrefresh(window);

    int close = getch();
    endwin();
}