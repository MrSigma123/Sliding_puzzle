/* functions definitions for Sliding_puzzle project */
#include "sliding_func.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PUZZLE8_SCRAMBLE_LIMIT 50
#define PUZZLE8_SIZE 3
#define PUZZLE15_SCRAMBLE_LIMIT 150
#define PUZZLE15_SIZE 4
#define PUZZLE24_SCRAMBLE_LIMIT 300
#define PUZZLE24_SIZE 5
void logo(void) {
  system("clear");
  printf("software version 0.1.0\n");
  printf("\n\n\n\n\n\n\n\n\n");
  printf("        .--. .-.   _    .-. _                   .---.                   .-.        \n");
  printf("       : .--': :  :_;   : ::_;                  : .; :                  : :        \n");
  printf("       `. `. : :  .-. .-' :.-.,-.,-. .--.       :  _.'.-..-..---. .---. : :   .--. \n");
  printf("        _`, :: :_ : :' .; :: :: ,. :' .; :      : :   : :; :`-'_.'`-'_.': :_ ' '_.'\n");
  printf("       `.__.'`.__;:_;`.__.':_;:_;:_;`._. ; _____:_;   `.__.'`.___;`.___;`.__;`.__.'\n");
  printf("                                     .-. ::_____:                                  \n");
  printf("                                     `._.'                                         \n");
  printf("\n\n\n\n\n\n\n");
  printf("                              PRESS ENTER TO CONTINUE: ");
  getchar();
}
void modes(void) {
  int choice;
  system("clear");
  printf("\n\n\n\n\n\n\n");
  printf("                              Welcome to Sliding_Puzzle !!!\n");
  printf("\n\n\n");
  printf("                                 Choose the program mode:\n");
  printf("\n");
  printf("                                   1.  8 slide puzzle\n");
  printf("                                   2. 15 slide puzzle\n");
  printf("                                   3. 24 slide puzzle\n");
  printf("\n");
  printf("                                   0. Exit the program\n");
  printf("\n\n\n");
  printf("                          Type the digit and confirm with ENTER: ");
  scanf("%d", &choice);
  switch (choice) {
    case 1 :
      puzzle8();
      break;
    case 2 :
      puzzle15();
      break;
    case 3 :
      puzzle24();
      break;
    case 0 :
      break;
  }
}
void puzzle8(void) {
  int move; // 1, 2, 3, 4 which stands for l, r, u, d moves
  int puzzle_state_array[PUZZLE8_SIZE][PUZZLE8_SIZE] = {
    {1 ,2, 3},
    {4, 5, 6},
    {7, 8, 0}
  };
  while (1) {
    int scramble_count = 0;
    while (scramble_count < PUZZLE8_SCRAMBLE_LIMIT) {
      srand(time(NULL));
      move = rand() % 4 + 1;
      switch (move) {
        case 1: l_turn(puzzle_state_array, PUZZLE8_SIZE);
      }
    }
    printf("Do you want to play puzzle8 again? If yes type Y letter: ");
    char repeat;
    scanf("%c", &repeat);
    if (repeat != 'Y')
      break;
  }
}
void puzzle15(void) {
  int puzzle_state_array[4][4] = {
    {1 , 2 , 3 , 4 },
    {5 , 6 , 7 , 8 },
    {9 , 10, 11, 12},
    {13, 14, 15, 0 }
  };
  while (1) {
    printf("Do you want to play puzzle15 again? If yes type Y letter: ");
    char repeat;
    scanf("%c", &repeat);
    if (repeat != 'Y')
      break;
  }
}
void puzzle24(void) {
  int puzzle_state_array[5][5] = {
    {1 , 2 , 3 , 4 , 5 },
    {6 , 7 , 8 , 9 , 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20},
    {21, 22, 23, 24, 0 }
  };
  while (1) {
    printf("Do you want to play puzzle24 again? If yes type Y letter: ");
    char repeat;
    scanf("%c", &repeat);
    if (repeat != 'Y')
      break;
  }
}
void l_turn(int * array, int size) {
  return; 
}
void r_turn(int * array, int size) {
  return;
}
void u_turn(int * array, int size) {
  return;
}
void d_turn(int * array, int size) {
  return;
}
