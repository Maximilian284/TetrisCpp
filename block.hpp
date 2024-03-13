class Block {
    protected:
        int id;
        int shape[4][4];
        
    public:
        Block(int id);
        void rotate(int angle);
        void move(int x, int y);
        bool checkCollision();
        void draw(); // ? forse non serve
};