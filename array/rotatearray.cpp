#include<iostream>
using namespace std;

void solve(int arr[],int n,int k){
    for(int i=0;i<k;i++){
        int last=arr[n-1];
    
    for(int j=n-1;j>0;j--){
        arr[j]=arr[j-1];
    }
    arr[0]=last;
}
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int k=3;
    solve(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}