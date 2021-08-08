 #include <bits/stdc++.h>
 using namespace std;

void subarray(int arr[],int n){
	int maxm=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=arr[k];
			}
			cout<<sum<<endl;
			maxm=max(sum,maxm);
		}	
	}
	cout<<endl;
	cout<<"max sum is  "<<maxm;
}


 int main(){
 	int a[]={1,3,4,7,9,11};
 	int n=sizeof(a)/sizeof(int);
 	subarray(a,n);
 }