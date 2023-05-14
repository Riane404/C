#include <iostream>
using namespace std;
int main(){
	int n,i,j,r,en=0,on=0; 
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n],e[n],o[n];
	
	cout<<"\n";
	cout<<"enter the numbers: ";
	
	//values for the array
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	//soting the even and odd
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			e[en]=a[i];
			en++;
		}
		else{
			o[on]=a[i];
			on++;
		}
	}
	
	cout<<"even array: ";
	for(i=0;i<en;i++){
		cout<<e[i]<<" ";
	}
	cout<<"\n";
		
	cout<<"odd array: ";
	for(i=0;i<on;i++){
		cout<<o[i]<<" ";
	}
	cout<<"\n";
	
	//printing unrepeated for even
	cout<<"unrepeated even array: ";
	for (int i = 0; i < en; i++) {
		bool isRepeated = false;
		for (int j = 0; j < i; j++) {
			if (e[j] == e[i]) {
				isRepeated = true;
				break;
			}
		}
		if (!isRepeated) {
			cout << e[i] << " ";
		}
	}
	cout << "\n";
	cout<<"unrepeated odd array: ";
	for (int i = 0; i < on; i++) {
		bool isRepeated = false;
		for (int j = 0; j < i; j++) {
			if (o[j] == o[i]) {
				isRepeated = true;
				break;
			}
		}
		if (!isRepeated) {
			cout << o[i] << " ";
		}
	}
	cout<<"\n";
}
