#include<raylib.h>
#include<iostream>
#include "grid.h"
using namespace std;

int main(){
    Color darkblue={44,44,127,255};
     InitWindow(300,600,"Tetris");
     SetTargetFPS(60);

     Grid grid =Grid();
     grid.print();

     
     while(WindowShouldClose()==false)
     {
        BeginDrawing();
        
        
        EndDrawing();

     }



     CloseWindow();
}