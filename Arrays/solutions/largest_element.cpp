#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr){
	int ce=arr[0];
	for(int i=0;i<arr.size();i++){
		if(arr[i]>ce){
			ce=arr[i];
		}
	}
	return ce;
}

int main(){
	vector<int> v={-3,4,1,2,3};
	cout<<largestElement(v);
}