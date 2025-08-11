#include<raylib.h>
#include<iostream>
#include "grid.h"
using namespace std;

int main(){
    Color darkblue={44,44,127,255};
     InitWindow(300,600,"Tetris");
     SetTargetFPS(60);

     Grid grid =Grid();
     grid.grid[0][0]=1;
     grid.grid[3][5]=1;
     grid.grid[17][8]=1;
     grid.print();

     
     while(WindowShouldClose()==false)
     {
        BeginDrawing();
        ClearBackground(darkblue);
        grid.draw();
        
        
        EndDrawing();

     }



     CloseWindow();
}