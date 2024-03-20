#include "../classes.hpp"

Block::Block(int id, int y, int x)
{
    this->id = id;
    this->x = x;
    this->y = y;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            this->shape[i][j] = 0;
        }
    }

    switch (this->id)
    {
    case 1:
        this->shape[0][0] = 1;
        this->shape[0][1] = 1;
        this->shape[0][2] = 1;
        this->shape[0][3] = 1;

        // [1, 1, 1, 1]
        break;
    case 2:
        this->shape[0][0] = 1;
        this->shape[0][1] = 1;
        this->shape[1][0] = 1;
        this->shape[1][1] = 1;

        // [1, 1]
        // [1, 1]
        break;
    default:
        break;
    }
};

bool Block::checkCollision(Grid grid)
{
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            if (this->shape[y][x] == 1)
            {
            }
        }
    }

    return false;
};

void Block::move(Grid grid, int y, int x)
{
    this->y += y;
    this->x += x;
};

void Block::rotate(int angle){

};
