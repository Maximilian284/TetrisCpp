#include <ncurses.h>
#include "menu.hpp"

Menu::Menu(int h, int w, int y, int x){
    height = h;
    width = w;
    start_y = y;
    start_x = x;
};

void Menu::show(){
    initscr();

    WINDOW *window= newwin(height, width, start_y, start_x);
    refresh();

    char border = ' ';

    wborder(window, border, border, border, border, border, border, border, border);
    mvprintw(start_y+1, (start_x + width - 6)/2, "Tetris");
    wrefresh(window);

    char name[10];

    mvprintw(start_y + 5, start_x + 1, "Enter your name: ");
    getstr(name);
    
    mvprintw(start_y + 7, start_x + 1, "Hello, %s", name);
    wrefresh(window);

    int close = getch();

    endwin();
};

void Menu::hide(){
    endwin();
};