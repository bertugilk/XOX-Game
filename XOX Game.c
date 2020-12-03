#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
void playground(){
	system("cls");
	printf("\n\t\tXOX GAME --> GOOD LUCK :)\n\n");
    printf("\t Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("\t\t      |     |     \n");
    printf("\t\t   %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("\t\t _____|_____|_____\n");
    printf("\t\t      |     |     \n");

    printf("\t\t   %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("\t\t _____|_____|_____\n");
    printf("\t\t      |     |     \n");

    printf("\t\t   %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("\t\t      |     |     \n\n");
}
int main(void) {
	system("color E");
	playground();
	int choice=0;
	int player = 1;
	char p1[10]="Player";
	char letter;
	int i;
	
	do{
		playground();
		player = (player % 2) ? 1 : 2;
		printf("\n %s %d bir kutu sec(1-9): ",p1,player); scanf("%d",&choice);
		letter = (player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')
            square[1] = letter;
            
        else if (choice == 2 && square[2] == '2')
            square[2] = letter;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = letter;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = letter;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = letter;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = letter;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = letter;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = letter;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = letter;      
        else
        {
            printf("Invalid expression!");
            player--;
            getch();
        }
        i = checkwin();
        player++;
	}while(i==-1);
	
    playground();
    
    if (i == 1)
        printf("\tPlayer %d win congratulations :)", --player);
    else
        printf("\tGame draw !!!");

	getch();
	return 0;
}
int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}
