#include <ncurses.h>

template <typename T>
T randomNumber (T min, T max);

class Grid;
class Block;
class Menu;

class Grid {
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

class Block {        
    public:
        int id;
        int x;
        int y;
        int shape[4][4];

        Block(int id, int y, int x);
        void rotate(int angle);
        void move(Grid grid, int y, int x);
        bool checkCollision(Grid grid);
        void draw(int matrix[20][10]); 
};

class Menu {
    protected:
        int height;
        int width;
        int start_y;
        int start_x;
        
    public:
        bool running;

        Menu(int h, int w, int y, int x);
        void show();
        void hide();
};
