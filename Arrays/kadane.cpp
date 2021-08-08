//if current sum<0 make it 0,or else add the positive num
#include <bits/stdc++.h>
using namespace std;

void kadane_maxSum(int arr[],int n){
	int cs=0;
	int ms=0;
	for(int i=0;i<n;i++){
		cs+=arr[i];
		if(cs<0){
			cs=0;
		}
		ms=max(ms,cs);
	}
	return ms;
	cout<<"max sum is"<<ms;
}

int main(){
	int a[]={1,3,-14,7,9,11};
 	int n=sizeof(a)/sizeof(int);
 	kadane_maxSum(a,n);
}