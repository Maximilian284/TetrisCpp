class Menu {
    protected:
        int height;
        int width;
        int start_y;
        int start_x;
        
    public:
        Menu(int h, int w, int y, int x);
        void show();
        void hide();
};
