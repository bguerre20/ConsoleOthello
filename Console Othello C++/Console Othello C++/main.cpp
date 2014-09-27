#include <iostream> 
#include <cmath> 
#include <cstdlib>
#include "OthelloGame.h"

using namespace std;
#define TOTAL_MOVES 60

int main() {
   char board[BOARD_SIZE][BOARD_SIZE] = {0};
   int row = 0, col = 0, passed = 0;

   PrintBoard(board);
   for(int i = 0; i < TOTAL_MOVES; i++) {
      if(passed == 2) 
         break;
      if (i % 2 == 1)
         cout<<"Blacks's turn: ";
      else
         cout<<"White's turn: ";
      GetMove(&row, &col);
      if (IsValidMove(board, row, col)) {
         if(row == -1 && col == -1) 
            passed++;
         else {
            ApplyMove(board,row,col,(char)pow(-1,i));
            passed = 0;
         }
         PrintBoard(board);
      }
      else {
         cout<<"Can't go there! Pick somewhere else please."<<endl;
         i--;
      }
   }
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

//2 lines
void GetMove(int *row, int *col) {
   char junk = '.';
   cin>>junk>>*row>>junk>>*col>>junk>>junk;
}

//1 lines
bool InBounds(int row, int col) {
   return (row >= 0 && col >= 0 && row <= BOARD_SIZE && col <= BOARD_SIZE);
}

//3 lines
bool IsValidMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col) {
   if(InBounds(row,col))
      return board[row][col] == 0;
   return (row == -1 && col == -1);
}

//TODO
void ApplyMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col, char currentPlayer) {

}

//5 lines
int GetValue(char board[BOARD_SIZE][BOARD_SIZE]) {
   int gameValue = 0;
   for(int i = 0; i < BOARD_SIZE; i++) {
      for(int k = 0; k < BOARD_SIZE; k++) {
         gameValue += board[i][k];
      }
   }
   return gameValue;
}