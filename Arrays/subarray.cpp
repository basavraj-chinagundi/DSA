//consecutive array
 #include <bits/stdc++.h>
 using namespace std;

void subarray(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<arr[k]<<" ";
			}
			cout<<endl;
		}
	}
}


 int main(){
 	int a[]={1,3,4,7,9,11};
 	int n=sizeof(a)/sizeof(int);
 	subarray(a,n);
 }