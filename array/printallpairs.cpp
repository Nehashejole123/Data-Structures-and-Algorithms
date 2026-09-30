#include<iostream>
using namespace std;
void printAllPairs(int arr[],int size){
for(int i=0;i<size;i++){
    for(int j=size-1;j>=i;j--){
        cout<<arr[i]<<" "<<arr[j]<<endl;


    }

}
}

int main(){
    int arr[]={10,20,30,40,50};
    int size = 5;
    printAllPairs(arr,size);
    return 0;
}