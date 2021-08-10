#include <bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
	return a>b;
}


int main(){
	vector<int> v={1,2,5,3,9,3};
	//sort(arr,arr+n)
	//reverse(arr,arr+n)
	//greates<int>() inbuilt compartor
	sort(v.begin(),v.end(),compare);
	for(auto ele:v){
		cout<<ele<<" ";
	}
}