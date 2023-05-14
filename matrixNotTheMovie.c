#include <stdio.h>
void read(int m,int n,int p[][n]);
void disp(int m,int n,int p[][n]);
void main(){
	
	int r,c;
	printf("enter order of materix A:");
	scanf("%d%d",&r,&c);
	if(r<1||c<1){
		printf("\n Invalid order of matrix");
	}
	else{
		int a[r][c];
		read(r,c,a);
		disp(r,c,a);
	}
}
void read(int m,int n,int p[][n]){
	for(int i=0;i<m;i++){
		printf("\n Enter elements of row %d: ",i+1);
		for(int j=0;j<n;j++){
			scanf("%d",&p[i][j]);
		}
	}
	printf("\n");
}
void disp(int m,int n,int p[][n]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d",p[i][j]);
		}
		printf("\n");
	}
}