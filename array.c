#include <stdio.h>

int main() {
	int my_array[5];

	my_array[0] = 5;
	my_array[1] = 0;
	my_array[2] = 10;
	my_array[3] = 100;
	my_array[4] = 2;
	int size = *(&my_array + 1) - my_array;

	for (int i = 0; i < size; i += 1){
		printf("%i\n", my_array[0] * my_array[i]);	
	}

	
}//end of main
