class Grid {
    protected:
        int height;
        int width;
        int start_y;
        int start_x;
        bool running;

    public:
        Grid(int h, int w, int y, int x);
        void show();
        void hide();
};
