#include <ncurses.h>
#include "menu.hpp"

// Constructor
// initializes the height, width, start_y, and start_x
// 
// @param h = height 
// @param w = width
// @param y = start_y
// @param x = start_x
Menu::Menu(int h, int w, int y, int x){
    height = h;
    width = w;
    start_y = y;
    start_x = x;
};

// Menu method: show
// shows the menu
//
// @return void
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

    clear();
    mvprintw(start_y+1, (start_x + width - 6)/2, "Tetris");
    
    mvprintw(start_y + 5, start_x + 1, "Hello, %s", name);

    mvprintw(start_y + 5, start_x + 1, "Press any key to play", name);

    wrefresh(window);

    getch();

    endwin();
};

void Menu::hide(){
    endwin();
};