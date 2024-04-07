#include <ncurses.h>

class Block;

class Grid{
    protected:
        int height;
        int width;
        int start_y;
        int start_x;

    public:
        bool running;
        int matrix[22][12];
        WINDOW *window;

        Grid(int h, int w, int y, int x);
        void show();
        void draw(Block block);
        void hide();
};