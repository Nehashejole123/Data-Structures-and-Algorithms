//print array through recursion

#include<iostream>
using namespace std;
void solve(int arr[],int size,int index){
    //base case
    if(index==size)
    return;
    //recursive call

    cout<<arr[index]<<" ";
    solve(arr,size,index+1);
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    int index=0;
    solve(arr,size,index);
   
}