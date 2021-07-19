#include <stdio.h>
int main(){

	// int dogs=2.5e4;
	printf("How many dogs do you have?: ");
	double dogs;
	scanf("%lf", &dogs);



	printf("%f\n%e\n%g\n" , dogs);

	return 0;
}
