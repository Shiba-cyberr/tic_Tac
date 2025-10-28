#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 3
typedef struct {
    int playerWin;
    int computerWin;
    int draw;
}Score;

int difficulty;
Score score = {.playerWin =0,.computerWin = 0,.draw = 0};

void difficaulty();
void clearScreen();
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]);


int main(){
    printf("Wellcome to Tic_Tac game\n");
    char board[BOARD_SIZE][BOARD_SIZE] ={
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    }
;    difficaulty();
    printBoard(board);

   
    return 0;
}

// takeing difficulty lavel
void difficaulty(){
    while(1){

        printf("\nSelect difficulty level: ");
        printf("\n1. Human(standard)");
        printf("\n2. God(impossible to win)");
        printf("\nEnter your choise: ");
        scanf("%d",&difficulty);
        if(difficulty != 1 && difficulty != 2){
            printf("\n Incorrect choice enter (1/2)!!");
        }else{
            break;
        }
    }
};

//clear screen
void clearScreen(){
    #ifdef _win32
        system("cls");
    #else
       system("clear");
    #endif
}

//printing the board
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]){
    clearScreen();
    printf("\nScore Board::\n  Your score: %d .\n  Compurte Score: %d .\n  Draws: %d .",score.playerWin, score.computerWin, score.draw);
    printf("\nTic-Tac-Toc");

    for(int i=0; i<BOARD_SIZE; i++){
        printf("\n");
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf(" %c ",board[i][j]);
            if(j<BOARD_SIZE-1)
            printf("|");
        }
        if(i<BOARD_SIZE-1)
        printf("\n---+---+---");
    }
    printf("\n\n");
}