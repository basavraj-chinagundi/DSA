#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
     int s=0;
     int e=A.size()-1;
     while(s<=e){
        int mid=(s+e)/2;
        if(A[mid]>=Val){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        cout<<A[s]<<" "<<A[e]<<endl;
     }
     return A[(s+e)/2];
}

int main(){
    vector<int> v={1,2,4,5,6,11};
    cout<<lowerBound(v,10);

}