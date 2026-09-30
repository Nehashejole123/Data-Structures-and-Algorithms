//Maximum in array
#include<iostream>
using namespace std;
int solve(int arr[],int size,int index,int maxi){
    //base case
    if(index==size)
    return;
   //recursive call
    maxi=max(arr[index],maxi);
    solve(arr,size,index+1,maxi);
return maxi;
}
int main(){
    int arr[]={10,20,30,40,60,30,90};
    int size=7;
    int index=0;
    int maxi=0;
    int ans=solve(arr,size,index,maxi);
    cout<<ans;
}