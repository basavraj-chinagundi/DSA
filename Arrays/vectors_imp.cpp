#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr={1,2,5,3,2};
	vector<int> arr2(10,7);//Fill constructor;
	cout<<arr.size()<<endl;
	cout<<arr.capacity()<<endl;
	cout<<"Changes after pushback O(1) insertion at end"<<endl;
	arr.push_back(16);
	cout<<arr.size()<<endl;
	cout<<arr.capacity()<<endl;
	//print all elements of a vector
	for(auto ele:arr){
		cout<<ele<<" ";
	}
	//pop back to remove last element
	cout<<endl;
	arr.pop_back();
	for(auto ele:arr){
		cout<<ele<<" ";
	}
	cout<<endl<<"fill constructor output =>"<<endl;
	for(auto ele:arr2){
		cout<<ele<<" ";
	}
}