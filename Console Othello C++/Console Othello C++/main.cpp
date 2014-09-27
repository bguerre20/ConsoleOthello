#include <iostream> 
#include <cmath> 
#include <cstdlib>
#include "OthelloGame.h"

using namespace std;

int main() {
   char board[BOARD_SIZE][BOARD_SIZE] = {0};
   char row = 0, col = 0;
   PrintBoard(board);
}

//12 lines
void PrintBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
   cout<<"- 0 1 2 3 4 5 6 7"<<endl; 
   for(int i = 0; i < BOARD_SIZE; i++) { 
      cout<<i;
      for(int k = 0; k < BOARD_SIZE;k++) {
         if (board[i][k] == -1)
            cout<<" W";
         else if (board[i][k] == 0)
            cout<<" .";
         else if (board[i][k] == 1)
            cout<<" B"; 
      }
      cout<<endl;
   }
   cout<<endl;
}

void GetMove(int *row, int *col) {
   char junk = '.';
   cin>>junk>>*row>>junk>>*col>>junk;
   cout<<endl;
}