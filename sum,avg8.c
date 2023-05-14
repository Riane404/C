/*Write a program to read the numbers entered by the user and compute the sum. 
Display the result (i.e. sum and average) only when user enters the number which would be a multiple of 8.*/
#include <stdio.h>
void main(){
	int f=0, sum=0, n=0, x;
	float avg;
	
	printf("enter numbers: ");
	
	//the while loop to compute sum until f==1 
	while(f==0){
	scanf("%d",&x);
	sum=sum+x;
	n++;
	
	//the if makes f==1 breaking the while loop
	if(x%8==0){
		f=1;
		}
	}
	
	printf("\n");
	printf("\n");
	
	printf("sum is: %d",sum);
	
	printf("\n");
	
	avg=(float)(sum/n);
	printf("the average is: %0.2f",avg);
	
	printf("\n");
	printf("\n");
}