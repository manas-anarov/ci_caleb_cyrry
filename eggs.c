#include <stdio.h>
//I like eggs
/*
I like eggs
I like eggs
I like eggs
*/
int main(){
	
	printf("The number of eggs for the day: ");//This
	int eggs;
	scanf("%i" , &eggs);

	double dozen = (double) eggs / 12;

	printf("You have %f dozen eggs.\n" , dozen);
	return 0;
}
