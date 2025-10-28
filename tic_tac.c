#include <stdio.h>

void difficaulty();

int main(){
    printf("Wellcome to Tic_Tac game\n");
    difficaulty();

   
    return 0;
}


void difficaulty(){
    while(1){
        int difficulty;

        printf("\nSelect difficulty level: ");
        printf("\n1. Human(standard)");
        printf("\n1. God(impossible to win)");
        printf("\nEnter your choise: ");
        scanf("%d",&difficulty);
        if(difficulty != 1 && difficulty != 2){
            printf("\n Incorrect choice enter (1/2)!!");
        }else{
            break;
        }
    }

    
};