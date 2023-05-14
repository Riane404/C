//Write a program to compute the sum of factorials of three numbers entered by the user at runtime
#include <stdio.h>
void main(){
	int a,b,c,i,aa=1,bb=1,cc=1,sum;
	
	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	printf("\n");
	
	if((a>0)&&(b>0)&&(c>0)){
		for(i=1;i<=a;i++){    
			aa=aa*i;  
		}
		for(i=1;i<=b;i++){    
			bb=bb*i;  
		}
		for(i=1;i<=c;i++){    
			cc=cc*i;  
		}
		
		sum=aa+bb+cc;
		printf("the sum of the factorial of the 3 numbers entered is: %d",sum);
	}
	else{
		printf("You may have entered invalid values try again");
		}
	
	printf("\n");
	printf("\n");
}