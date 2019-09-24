#include <stdio.h>
#include <stdlib.h>

char arr[10] [10] = {  

	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}, //define array to model map	
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},	
	{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}	
};

void printMap() {
	printf("    1  2  3  4  5  6  7  8  9  10\n");       //print columb numbers
	int i, j;
	i = 0;
	for (i = 0; i < 10; i++){

		if(i != 9){                        
			printf(" ");               //insert extra space for map alignment of single digit rows

		}
		printf("%d |", i+1);                 //print row numbers
		for(j = 0; j < 10; j++) {
			printf(" %c", arr[i] [j]); //loop through map array and print every location's contents
			if(i >= 0 && i <= 9){
				printf("|");
			}
		}
		printf("\n");
		printf("   -------------------------------");
		printf("\n");	
	}
	printf("\n");
}//end of printMap()


void movePlayer(int x, int y) {
	int i, j;
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if(arr[i] [j] == 'p'){
				arr[i] [j] = ' ';      //loop thorugh map array and erase player at old position
			}
		}
	}
	arr[y-1] [x-1] = 'p';                          //place player in new position
}//end of movePlayer()


void playerInput(char op[2], int x, int y) {
	if(x > 10 || x < 1 || y < 1 || y > 10) {       //test if input is in bounds
		printf("Invalid coordinates");
		return;
	}else if(op != "mv" ){                         //test op code validity
		printf("Invalid command");
		return;
	}else{
		if(op == "mv"){                        //mv op code moves player
			movePlayer(x, y);
		}
	}
}//end of playerInput()


int main() {

	printMap();
	movePlayer(1,1);
	printMap();
	playerInput("mv",3,3);
	printMap();
	movePlayer(10, 9);
	printMap();
}
