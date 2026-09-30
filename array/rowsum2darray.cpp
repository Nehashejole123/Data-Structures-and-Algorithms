#include<iostream>
using namespace std;
void rowsum(int arr[][4],int rowsize,int colsize){
    //row wise sum
       int sum=0;

    for(int i=0;i<rowsize;i++){
      sum=sum+arr[i][3-i];

    }
    cout<<sum;
}
int main(){
    int arr[4][4]={
        {10,20,30,50},
        {50,60,20,20},
        {80,80,90,30},
        {20,10,10,20}
    };
    int rowsize=4;
    int colsize=4;
     rowsum(arr,rowsize,colsize);
    
}