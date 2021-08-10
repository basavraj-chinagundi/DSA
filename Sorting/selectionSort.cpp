#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> arr){

	for(int i=0;i<=arr.size()-2;i++){
		//set min  position loop over all elemnts and compare
		int min_pos=i;
		for(int j=i;j<arr.size();j++){
			if(arr[j]<arr[min_pos]){
				min_pos=j;
			}
					
	}
	//swap min element with current
	swap(arr[min_pos],arr[i]);
	
}
for(auto ele: arr){
		cout<<ele<<" ";
	}
}

int main(){
	vector<int> v={1,88,21,4,8,9};
	selectionSort(v);
}