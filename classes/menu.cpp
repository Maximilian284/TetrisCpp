#include <ncurses.h>
#include "menu.hpp"

// Constructor
// initializes the height, width, start_y, and start_x
//
// @param int h = height
// @param int w = width
// @param int y = start_y
// @param int x = start_x
Menu::Menu(int h, int w, int y, int x){
    height = h;
    width = w;
    start_y = y;
    start_x = x;
};

// Menu Method: show
// shows the menu
//
// @return void
void Menu::show(){
    // initializes the ncurses library
    initscr();

    // creates a window with the given height, width, start_y, and start_x
    WINDOW *window = newwin(height, width, start_y, start_x);
    refresh();

    char border = ' ';

    // prints the word "Tetris" in the middle of the window
    mvprintw(start_y + 1, (start_x + width - 6) / 2, "Tetris");

    char name[12];

    mvprintw(start_y + 4, start_x + 1, "Enter your name: ");
    // gets a string from the user
    getstr(name);

    // refreshes the window to show the changes
    wrefresh(window);

    // clears the window
    clear();

    mvprintw(start_y + 1, (start_x + width - 6) / 2, "Tetris");

    mvprintw(start_y + 4, start_x + 1, "Hello, %s", name);

    mvprintw(start_y + 6, start_x + 1, "Press any key to play", name);

    wrefresh(window);

    // waits for a key to be pressed (input from the user)
    getch();
};

// Menu Method: hide
// hides the menu
//
// @return void
void Menu::hide(){
    endwin();
};