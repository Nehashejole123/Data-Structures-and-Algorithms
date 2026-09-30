#include<iostream>
using namespace std;


void PrintThreeSum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==target)
                cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<endl;    
            }
        }
    }
    }

int main(){
    int arr[]={10,20,30,40};
    int p;
    cout<<"enter p"<<endl;
    cin>>p;
    int n = 4;
    int target=40;
    PrintThreeSum(arr,n,target);
    return 0;
}