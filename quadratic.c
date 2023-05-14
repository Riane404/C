//For a given quadratic equation in the form of ax2 + bx +c =0, find the roots of the equation where values of a, b, c>0
#include <stdio.h>
#include <math.h>
void main() {
	double a, b, c, discriminant, root1, root2, realPart, imagPart;
	printf("Enter coefficients a, b and c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if((a>0)&&(b>0)&&(c>0)){
		discriminant = b * b - 4 * a * c;
	// condition for real and different roots
	if (discriminant > 0) {
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("root1 = %0.2f and root2 = %0.2f", root1, root2);
	}
	
//condition for real and equal roots
	else if (discriminant == 0) {
		root1 = root2 = -b / (2 * a);
		printf("root1 = root2 = %0.2f:", root1);
	}
	
//if roots are not real
	else {
		realPart = -b / (2 * a);
		imagPart = sqrt(-discriminant) / (2 * a);
		printf("root1 = %0.2f+%0.2fi and root2 = %0.2f-%0.2fi", realPart, imagPart, realPart, imagPart);
	}
	}
	else{
	printf("either a,b,c are not >0");
	
	}
	printf("\n");
	printf("\n");
	
}