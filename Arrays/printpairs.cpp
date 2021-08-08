#include <bits/stdc++.h>
using namespace std;

void printallPairs(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			cout<<arr[i]<<" "<<arr[j]<<endl;;
		}
		cout<<endl;
	}
}

int main(){
	int a[]={1,3,4,2,8};
	int n=sizeof(a)/sizeof(int);
	printallPairs(a,n);
}
