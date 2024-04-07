#include <ncurses.h>
#include "grid.hpp"
#include "block.hpp"

// Constructor
// initializes the height, width, start_y, and start_x
//
// @param int h = height
// @param int w = width
// @param int y = start_y
// @param int x = start_x
Grid::Grid(int h, int w, int y, int x){
    height = h;
    width = w;
    start_y = y;
    start_x = x;
    running = true;

    for (int i = 0; i < 22; i++){
        for (int j = 0; j < 12; j++){
            if (j == 0 || j == 11 || i == 21){
                matrix[i][j] = -1;
            }else{
                matrix[i][j] = 0;
            }
        }
    }
}

// Grid Method: show
// shows the grid
//
// @return void
void Grid::show()
{
    initscr();
    noecho();
    cbreak();
    curs_set(0);

    window = newwin(height, width, start_y, start_x);
    refresh();

    char borderT = ' ';
    char borderB = '=';
    char borderLR = '!';
    char corner = '+';

    wborder(window, borderLR, borderLR, borderT, borderB, corner, corner, corner, corner);
    mvprintw(1, (start_x + width - 6) / 2, "Tetris");
    wrefresh(window);
}

// Grid Method: hide
// hides the grid
//
// @return void
void Grid::hide()
{
    endwin();
}

// Grid Method: draw
// draws the block on the grid
//
// @param Block block = block to draw
// @return void
void Grid::draw(Block block)
{
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 8; x += 2)
        {
            if (block.shape[y][x / 2] == 1)
            {
                mvprintw(block.y + y, block.x + x, "[");
                mvprintw(block.y + y, block.x + x + 1, "]");
            }
        }
    }
    wrefresh(window);
}