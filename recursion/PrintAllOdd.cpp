//Print all odd numbers
#include<iostream>
using namespace std;
void solve (int arr[],int size,int index){
    //base case
    if(index==size)
    return;

    //recursive call
    if(arr[index] %2 !=0){
        cout<<arr[index]<<" ";
    }
    solve(arr,size,index+1);
}
int main(){
    int arr[]={2,4,5,7,6,7,8,9};
    int size=8;
    int index=0;

    solve(arr,size,index);

}