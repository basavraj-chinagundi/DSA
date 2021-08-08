#include <bits/stdc++.h>
using namespace std;

int lsearch(int arr[],int n,int k){
	//time complexity O(n)
	for(int i=0;i<n;i++){
		if(arr[i]==k){
			return i;
		}
	}
	//out of loop
	return -1;
}

int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int index=lsearch(a,n,k);
	if(index!=-1){
		cout<<k<<" key found at "<<index<<endl;
	}
	else{
		cout<<"key not found";
	}
	return 0;
}
