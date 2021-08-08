#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A){
	int cs=0;
	int ms=0;
	for(int i=0;i<A.size();i++){
		cs+=A[i];
		if(cs<0){
			cs=0;
		}
		ms=max(ms,cs);
	}
	return ms;
}

int main(){
	vector<int> v={1,-2,3,4,4,-2};
	cout<<maxSumSubarray(v);

}