#include <stdio.h>
#include <math.h>
#include <stdlib.h>


float area_of_circle(float diameter) {
	float result = pow(diameter/2, 2.0) * 3.1416;
	return result;
}

float volume_of_cylinder(float diameter, float height) {
	float result = area_of_circle(diameter) * height;
	return result;
}


int main() {
	float diameter, height;

	printf("Enter the diameter: ");
	scanf("%f", &diameter);

	printf("Enter the height: ");
	scanf("%f", &height);
	
	printf("%f \n", volume_of_cylinder(diameter, height));

	return 0;
}//end of main
