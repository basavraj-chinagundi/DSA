#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
	int s=0;
	int e=n-1;
	while(s<e){
		swap(arr[s],arr[e]);
		s+=1;
		e-=1;
	}
}

int main(){
	int a[]={1,3,2,6,7};
	int n=sizeof(a)/sizeof(int);
	reverseArray(a,n);
	for(auto ele: a){
		cout<<ele<<" ";
	}
}