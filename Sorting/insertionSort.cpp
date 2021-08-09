#include <bits/stdc++.h>
using namespace std;
//sorted and unsorted part
//curr is temporary variable
void insertionSort(vector<int> arr){
	
	for(int i=1;i<=arr.size()-1;i++){
		int curr=arr[i];
		int prev=i-1; 
		while(prev>=0 and arr[prev]>curr){
			arr[prev+1]=arr[prev];
			prev=prev-1;
		}
		//as soon as prev=-1;
		arr[prev+1]=curr;
	}

	for(auto ele:arr){
		cout<<ele<<" ";
	}
}

int main()
{	
	vector<int> a={1,7,2,6,4,5,8};
	insertionSort(a);
	return 0;
}