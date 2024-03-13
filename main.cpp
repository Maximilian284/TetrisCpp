#include <iostream>
#include <cstring>
#include "grid.hpp"
#include "functions.hpp"
#include "menu.hpp"

using namespace std;

int main(int arcg, char* argv[]){
    Menu menu = Menu(24, 22, 0, 0);
    menu.show();


    Grid grid = Grid(24, 22, 3, 0);
    grid.show();

    return 0;
}