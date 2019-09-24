#include <stdio.h>
#include <stdlib.h>

char arr[5] [5] = {  

	{'y', 'a', 'e', 'v'},	
	{'f', 'g', 'z', '5'},	
	{'f', 'p', 'v', 'y'},	
	{'y', 'y', 'm', 'p'},	
	{'a', 'e', 'h', 'g'}, //define array to model map	
};

int score = 0; //define score variable 

void printMap() {
	printf("    1  2  3  4\n");       //print columb numbers
	int i, j;
	i = 0;
	for (i = 0; i < 4; i++){

	
		printf("%d |", i+1);                 //print row numbers
		for(j = 0; j < 4; j++) {
			printf(" "); //loop through map array and print space for every location
			if(i >= 0 && i <= 3){
				printf("|");
			}
		}
		printf("\n");
		printf("   --------------");
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
