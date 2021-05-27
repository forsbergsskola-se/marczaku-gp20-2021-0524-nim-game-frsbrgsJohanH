#include <iostream>
#include <stdio.h> 
using namespace std;



char board[3][3] {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int roofChar = 238;

void DisplayBoard()
{
    cout << board[0][0] << " " << char(179) <<" " << board[0][1] << " " << char(179) <<" "<< board[0][2] << endl;
    cout << "----------" << endl; 
    cout << board[1][0] << " " << char(179) <<" "<< board[1][1] << " " << char(179) <<" "<< board[1][2] << endl;
    cout << "----------" << endl;
    cout << board[2][0] << " " << char(179) <<" "<< board[2][1] << " " << char(179) <<" "<< board[2][2] << endl;

    
}


int main(int argc, char* argv[])
{
     
    DisplayBoard();
    
  

    return 0;
    

    
    
}

//  for(int i = 0; i <= 255; i++) {
//fprintf(stdout, "[%d]: %c\n", i, i);
  //  }
