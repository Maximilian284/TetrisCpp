class Grid;

class Block{
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
