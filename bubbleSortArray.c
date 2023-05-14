#include <stdio.h>
void disp(int a[],int n);
void main(){
	
	int i,j,n,c,k;
	printf("Enter the total numbers: ");
	scanf("%d",&n);
	
	if(n<=0){
		printf("Invalid number");
	}
		
		else{
			
			int a[n];
			printf("Enter %d numbers: ",n);
			printf("\n");
			for(i=0;i<n;i++){
				scanf("%d",&k);
				a[i]=k;
			}
			printf("\n Entered numbers: ");
			disp(a,n);
			
			//bubble sort
			for(i=0;i<n;i++){
				for(j=i+1;j<n;j++){
					if(a[i]>a[j]){
					c=a[i];
					a[i]=a[j];
					a[j]=c;
					}
					
				}
			}
		printf("sorted: ");
		disp(a,n);
		}
}
void disp(int a[],int n){
	int i;
	for(int i=0;i<n;i++){
	printf("%d  ",a[i]);
	}
}