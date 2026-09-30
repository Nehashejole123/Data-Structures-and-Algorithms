#include<iostream>
using namespace std;
void minvalue(int arr[],int size){
int minans=__INT_MAX__;
for(int i=0;i<size;i++){
    minans=min(minans,arr[i]);

}
cout<<"minimum value in array is:"<<minans;
        
    }
int main(){
    int arr[]={10,2,34,35,56};
    int size=5;
    minvalue(arr,size);
    return 0;
}
//same for maximum value in array 
/*void maxvalue(int arr[],int size){
    int maxans=__INT_MIN__;
    for(int i=0;i<size;i++){
        maxans=max(maxans,arr[i]);
    }
    cout<<"maximum value in array is:"<<maxans;
}
int main(){
    int arr[]={10,2,34,35,56};
    int size=5;
    maxvalue(arr,size);
    return 0;
}
*/
