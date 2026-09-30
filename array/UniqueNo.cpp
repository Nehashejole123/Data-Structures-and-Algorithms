#include<iostream>
using namespace std; 
void uniqueNo(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    cout<<"Unique number is: "<<ans;
}

int main(){
    int arr[]={1,2,3,4,3,2,1};
    int size=7;
    uniqueNo(arr,size);
    return 0;
}

//print 