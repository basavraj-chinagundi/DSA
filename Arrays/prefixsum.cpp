#include <bits/stdc++.h>
using namespace std;
//pf[i]=pf[i-1]+a[i]
//sum till index j - sum till index(i-1)

void prefix_sum(int arr[],int n){

	//prefix sum
	int prefix[n];
	prefix[0]=arr[0];
	for(int i=1;i<n;i++){
		prefix[i]=prefix[i-1]+arr[i];
	}
	int largest_sum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int subarray_sum=i>0?prefix[j]-prefix[i-1]:prefix[j];
			cout<<subarray_sum<<endl;
			largest_sum=max(largest_sum,subarray_sum);
			}
		
	}
	cout<<"largest sum is "<<largest_sum;
}

int main(){
	int a[]={1,3,4,7,9,11};
 	int n=sizeof(a)/sizeof(int);
 	prefix_sum(a,n);
}