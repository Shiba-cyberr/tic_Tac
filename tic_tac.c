#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 3
typedef struct {
    int player;
    int computerWin;
    int draw;
}Score;

int difficulty;
Score score = {.player =0,.computerWin = 0,.draw = 0};

void difficaulty();
void clearScreen();
void printBoard(char board[BOARD_SIZE][BOARD_SIZE]);
int win(char board[BOARD_SIZE][BOARD_SIZE], char player);
int draw(char board[BOARD_SIZE][BOARD_SIZE], char player);


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
    printf("\nScore Board::\n  Your score: %d .\n  Compurte Score: %d .\n  Draws: %d .",score.player, score.computerWin, score.draw);
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

//chaking wining score
int win(char board[BOARD_SIZE][BOARD_SIZE], char player) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        // Check rows
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1;
        }
        // Check columns
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return 1;
        }
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1]== player && board[2][2] == player) {
        return 1;
    }
    if (board[0][2]== player && board[1][1] == player && board[2][0] == player) {
        return 1;
    }

    return 0; 
}



//chaking draw
int draw(char board[BOARD_SIZE][BOARD_SIZE], char player){
    for(int i =0; i < BOARD_SIZE; i++){
        for(int j =0; j < BOARD_SIZE; j++){
            if(board[i][j]== ' '){
                return 0;
            }
        }
    }
    return 1;

}