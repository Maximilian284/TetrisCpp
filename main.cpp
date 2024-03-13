#include <iostream>
#include <cstring>
#include <ncurses.h>
#include "classes.hpp"

using namespace std;

int main(int arcg, char* argv[]){
    Menu menu = Menu(22, 24, 0, 0);
    menu.show();
    menu.hide();
    
    Grid grid = Grid(22, 24, 3, 1);
    Block blocks[3] = {Block(2, 3, 9), Block(2, 3, 9), Block(1, 3, 9)};
    

    while (grid.running){
        grid.show();
        grid.draw(blocks[0]);
        blocks[0].move(grid, 1, 0);

        timeout(1000);
        getch();
        clear();
    }
    grid.hide();
    
    return 0;
}