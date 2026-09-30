#include<iostream>
#include<vector>
#include <climits>
using namespace std;
//find minimum in 2d array
int findmin(int arr[3][4],int rowsize,int colsize){
        int mini=INT_MAX;

    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            mini=min(mini,arr[i][j]);
        }
    }
    return mini;
}

int main(){
int arr[3][4]={ 
           {10,20,30,40},
           {23,45,34,32},
           {21,22,35,22} 
            };

    int rowsize=3;
    int colsize=4;

int ans=findmin(arr,rowsize,colsize);
cout<<"the minimum is = "<<ans;

    return 0;
}