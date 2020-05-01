/* 
   Assignment6.cpp
   4/30/2020
   Kevin Lobo
   kal160130@utdallas.edu
   CS 3377.501 Spring 2020
   Version 1.0
   2020 All rights reserved
   Assignment 6 program for creating the cdk matrix
*/
#include <iostream>
#include "cdk.h"

using namespace std;

int main()
{
  WINDOW * myWindow;
  CDKSCREEN *myScreen;
  CDKMATRIX *bitMatrix;

  int mHeight = 5;
  int mWidth = 3;
  int bWidth[mHeight+1] = [15,15,15,15];
  int bType[mWidth+1] = {vMIXED,vMIXED,vMIXED,vMIXED};
  char *rowNames[mHeight+1] = {"RowZero""RowOne","RowTwo","RowThree","RowFour","RowFive"};
  char *columnNames[mWidth+1] = {"ColumnZero""ColumnOne","ColumnTwo","ColumnThree"};
  string mName = "Bit File Matrix";

  myWindow = initscr();
  myScreen = initCDKScreen(window);

  initCDKColor();
  
  bitMatrix = newCDKMatrix(myScreeen, CENTER, CENTER, mWidth, mHeight, mWidth, mHeight, mName, columnNames, rowNames, bWidth, bType, 1, 1, ' ', ROW, true, true, false);

  if(bitMatrix == NULL)
    {
      printf("Could not create Matrix Error!");
      exit(1);
    }
  drawCDKMatrix(bitMatrix, true);
  endCDK();

}
