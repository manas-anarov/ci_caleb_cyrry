#include <stdio.h>

int main(){
	int radius;
	printf("Please enter a radius: ");
	scanf("%i", &radius);
	printf("The given radius is %i\n",radius);
	

	double area = 3.14159 * (radius * radius);
	printf("The area of a circle with %i radius is %f\n", area);

	return 0;
}
