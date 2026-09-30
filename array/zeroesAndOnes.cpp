#include<iostream>
using namespace std;
/*void zeroesAndOnes(int arr[],int size){
int count0=0;
int count1=0;
for(int i=0;i<size;i++){
    if(arr[i]==0){
        count0++;
    }
    else{
        count1++;
    }
}
cout<<"count of 0s is: "<<count0<<endl;
cout<<"count of 1s is: "<<count1<<endl;
}

int main(){
    int arr[]={0,1,1,0,0,0,1,1,0};
    int size=9;
    zeroesAndOnes(arr,size);
    return 0;
}*/

//print zeroes and ones in sorted order

void zeroesandones(int arr[],int size){
    int count0=0;
    int count1=0;
    for(int i=0;i<size;i++){
        if (arr[i]==0){
            count0++;
        }
        else{
            count1++;
        }
    }
        cout<<"count of 0s is: "<<count0<<endl;
        cout<<"count of 1s is: "<<count1<<endl;

        for(int i=0;i<size;i++){
            if(i<count0){ 
                arr[i]=0;
                cout<<arr[i]<<" ";
            }
            else{
                arr[i]=1;
                cout<<arr[i]<<" ";
            }
        }
    }
    
int main(){
    int arr[]={0,1,1,0,0,1,1,0,1,0};
    int size=10;
    zeroesandones(arr,size);
    return 0;

    }








    