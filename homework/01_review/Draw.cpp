/*************************************************************************
 *
 * Project: Draw
 *
 * Course:    CPTR 242
 * Date:      March 29, 2021
 */

#include "Draw.h"
#include <iostream>

Draw::Draw() {
  for (int i = 0; i < ROW; i++) {
    for (int j = 0; j < COL; j++) {
      board[i][j] = ' ';
    }
  }
}

void Draw::drawPoint(int row, int col, char character) {
  board[row][col] = character;
}

void Draw::drawLine(int row, int col, int row2, int col2, char character) {
  if (col == col2) {
    for (int i = row; i <= row2; i++) {
      board[i][col] = character;
    }
  } else if (row == row2) {
    for (int i = col; i <= col2; i++) {
      board[row][i] = character;
    }
  } else if (row > row2 && col < col2) {
    for (int i = 0; i < row; i++) {
      board[row2 + i][col2 - i] = character;
    }
  } else if (row < row2) {
    for (int i = 0; i < row2; i++) {
      board[row + i][col + i] = character;
    }
  }
}

void Draw::drawRectangle(int row, int col, int row2, int col2, char character) {
  for (int i = row; i <= row2; i++) {
    for (int j = col; j <= col2; j++) {
      board[i][j] = character;
    }
  }
}

void Draw::drawFun() {
  std::string funboard[11][30];
  for (int i = 0; i < 11; i++) {
    for (int j = 0; j < 30; j++) {
      funboard[i][j] = "⣿";
    }
  }
  funboard[0][5] = "⡏";
  funboard[0][6] = "⠉";
  funboard[0][7] = "⠛";
  funboard[0][8] = "⢿";
  funboard[0][28] = "⡿";
  funboard[1][6] = " ";
  funboard[1][7] = " ";
  funboard[1][8] = " ";
  funboard[1][9] = "⠈";
  funboard[1][10] = "⠛";
  funboard[1][24] = "⠿";
  funboard[1][25] = "⠛";
  funboard[1][26] = "⠉";
  funboard[1][27] = "⠁";
  funboard[1][28] = " ";
  funboard[2][6] = "⣧";
  funboard[2][7] = "⡀";
  funboard[2][8] = " ";
  funboard[2][9] = " ";
  funboard[2][10] = " ";
  funboard[2][11] = " ";
  funboard[2][12] = "⠙";
  funboard[2][16] = "⠻";
  funboard[2][18] = "⠟";
  funboard[2][20] = "⠛";
  funboard[2][21] = "⠉";
  funboard[2][22] = " ";
  funboard[2][23] = " ";
  funboard[2][24] = " ";
  funboard[2][25] = " ";
  funboard[2][26] = " ";
  funboard[2][27] = " ";
  funboard[2][28] = "⣸";
  funboard[3][7] = "⣷";
  funboard[3][8] = "⣄";
  funboard[3][9] = " ";
  funboard[3][10] = "⡀";
  for (int i = 11; i < 27; i++) {
    funboard[3][i] = " ";
  }
  funboard[3][27] = "⢀";
  funboard[3][28] = "⣴";
  funboard[4][9] = "⠏";
  for (int i = 10; i < 24; i++) {
    funboard[4][i] = " ";
  }
  funboard[4][24] = "⠠";
  funboard[4][25] = "⣴";
  funboard[5][8] = "⡟";
  funboard[5][9] = " ";
  funboard[5][10] = " ";
  funboard[5][11] = "⢰";
  funboard[5][12] = "⣹";
  funboard[5][13] = "⡆";
  for (int i = 14; i < 20; i++) {
    funboard[5][i] = " ";
  }
  funboard[5][20] = "⣭";
  funboard[5][21] = "⣷";
  funboard[5][22] = " ";
  funboard[5][23] = " ";
  funboard[5][24] = " ";
  funboard[5][25] = "⠸";
  funboard[8][8] = "⠃";
  funboard[6][9] = " ";
  funboard[6][10] = " ";
  funboard[6][11] = "⠈";
  funboard[6][12] = "⠉";
  funboard[6][13] = " ";
  funboard[6][14] = " ";
  funboard[6][15] = "⠤";
  funboard[6][16] = "⠄";
  funboard[6][17] = " ";
  funboard[6][18] = " ";
  funboard[6][19] = " ";
  funboard[6][20] = "⠉";
  funboard[6][20] = "⠁";
  funboard[6][21] = "⠉";
  funboard[6][22] = " ";
  funboard[6][23] = " ";
  funboard[6][24] = " ";
  funboard[6][25] = " ";
  funboard[6][26] = "⢿";
  funboard[7][8] = "⢾";
  funboard[7][10] = "⣷";
  funboard[7][11] = " ";
  funboard[7][12] = " ";
  funboard[7][13] = " ";
  funboard[7][14] = " ";
  funboard[7][15] = "⡠";
  funboard[7][16] = "⠤";
  funboard[7][17] = "⢄";
  funboard[7][18] = " ";
  funboard[7][19] = " ";
  funboard[7][20] = " ";
  funboard[7][21] = "⠠";
  funboard[7][24] = "⣷";
  funboard[7][25] = " ";
  funboard[7][26] = "⢸";
  funboard[8][8] = "⡀";
  funboard[8][9] = "⠉";
  funboard[8][10] = " ";
  funboard[8][11] = " ";
  funboard[8][12] = " ";
  funboard[8][13] = " ";
  funboard[8][14] = " ";
  funboard[8][15] = "⢄";
  funboard[8][16] = " ";
  funboard[8][17] = "⢀";
  funboard[8][18] = " ";
  funboard[8][19] = " ";
  funboard[8][20] = " ";
  funboard[8][21] = " ";
  funboard[8][22] = "⠉";
  funboard[8][23] = "⠉";
  funboard[8][24] = "⠁";
  funboard[8][25] = " ";
  funboard[8][26] = " ";
  funboard[9][8] = "⣧";
  for (int i = 9; i < 28; i++) {
    funboard[9][i] = " ";
  }
  funboard[9][16] = "⠈";
  funboard[9][27] = "⢹";
  funboard[10][9] = "⠃";
  for (int i = 10; i < 27; i++) {
    funboard[10][i] = " ";
  }
  funboard[10][27] = "⢸";
  // uncomment if you wanna see the picture :D
  // for(int i =0; i<11;i++){
  // for(int j=0; j<30;j++){
  //  std::cout<<funboard [i][j];
  //}
  //  std::cout<<std::endl;
  //}
}
void Draw::resetVisualization() {
  for (int i = 0; i < ROW; i++) {
    for (int j = 0; j < COL; j++) {
      board[i][j] = ' ';
    }
  }
}
