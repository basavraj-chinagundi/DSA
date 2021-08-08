//s=0,e=n-1
//find middle element in the array
//keep updating start mid and end
//start=mid+1
//start>end element not present
#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n,int k){
	int s=0;
	int e=n-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==k){
			return mid;
		}
		else if(arr[mid]<k){
			s=mid+1;
		}
		else if(arr[mid]>k){
			e=mid-1;
		}
	}
	return -1;

}

int main(){
	int a[]={1,4,5,6,18,53,64};
	int n=sizeof(a)/sizeof(int);
	int index=binary_search(a,n,53);
	if(index!=-1){
		cout<<"found at "<<index;
	}
	else{
		cout<<"not found";
	}
	return 0;

}