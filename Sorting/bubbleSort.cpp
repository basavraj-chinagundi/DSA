#include <bits/stdc++.h>
using namespace std;

//compare the number with all other indices upto second last
//keep udating the end element
void bubbleSort(vector<int> v){
	int s=0;
	int e=v.size()-2;
	while(s<=e){
		for(int i=s;i<=e;i++){
			if(v[i]>v[i+1]){
				swap(v[i],v[i+1]);
			}
		}
		e=e-1;
	}
	for(auto ele:v){
		cout<<ele<<" ";
	}
}

int main()
{	
	vector<int> a={1,7,2,6,4,5,8};
	bubbleSort(a);
	return 0;
}