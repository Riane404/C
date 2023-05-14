#include <iostream>
using namespace std;
int a[3][4], b[3][4],c[3][4];
void disp();
void add();
void sub();
int main() {
	int i, j;
	for(i=0;i<3;i++)
		for (j=0;j<4;j++)
			cin>>a[i][j];
	// create two 2-dimensional arrays with 3 rows and 4 columns
	
	for(i=0;i<3;i++)
		for (j=0;j<4;j++)
			cin>>b[i][j];
	
	cout<<"array a: \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	cout<<"array b: \n";
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 4; j++) {
				cout<<b[i][j]<<" ";
			}
			cout<<"\n";
		}
	cout<<"\n\n\n";
	add();
	sub();
}
void disp(){
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}
void add(){
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			c[i][j] = a[i][j] + b[i][j]; 
		}
	}
	cout<<"addition is:\n";
    disp();
}
void sub(){
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			c[i][j] = a[i][j] - b[i][j]; 
		}
	}
	cout<<"subtraction is:\n";
    disp();
}