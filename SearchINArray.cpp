//search a target=50 in array

#include<iostream>
using namespace std;
bool solve(int arr[],int size,int target ,int index){
    //base case
    if(index==size)
        return false;
    //recursive call
    if(arr[index]==target){
        return true;
    }
   return solve(arr,size,target,index+1);
   
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int index=0;
    int target=50;

    cout<< solve(arr,size,target,index);
}