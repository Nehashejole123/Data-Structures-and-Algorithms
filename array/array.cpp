#include <iostream>
using namespace std;

//void solve(int num[], int size){
  //  for(int i=0; i<size; i++){
    //    cout<<num[i]+1<<" ";
    //}

//}
//
/*bool FindTarget(int arr[], int size,int Target){
    for(int i=0;i<size;i++){
        if(Target == arr[i]){
            return true;
        }
    }
    return false;
}
	
int main(){
    int arr[] ={0,10,20,30};
    int size =4;
    //solve(arr,size);
    int Target=20;

    bool result=FindTarget(arr,size,Target);
    if(result){
        cout<<"Target found";
    }
    else{
        cout<<"Target not found";
    }


    return 0;
}
*/
/*void finduniquenumber(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];

    }
    cout<<"Unique number is"<<ans;

}

int main(){
    int arr[]={1,2,3,4,3,2,1};
    int size=7;
    finduniquenumber(arr,size);
    return 0;
}
*/

/*void sortarray(int arr[],int size){
    int count0=0;
    int count1=0;
    for(int i=0;i<size;i++){
        if(count0<arr[i]){
            count0++;
        }
        else{
            count1++;
        }
    }
    cout<<"Sorted array is:";
    for(int i=0;i<size;i++){
        if(i<count0){
            cout<<0<<" ";
        }
        else{
            cout<<1<<" ";               
        }
    }
}
for(int i=0;i<=count0;i++){
    count0=count0+1;
}
int main(){
    int arr[]={0,1,0,1,1,0,0,1,0};
    int size=9;
    sortarray(arr,size);
    return 0;
}

void PrintAllPairs(int arr[],int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i]<<", "<<arr[j]<<endl;
        }
    }
}

int main(){
    int arr[]={10,20,30,40};
    int n=4;
    PrintAllPairs(arr,n);
    return 0;
}*/

//PRINT LOWER TRIANGLE PAIRS
/*void PrintAllPairs(int arr[],int n){

for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<arr[i]<<", "<<arr[j]<<endl;
    }
}
}
int main(){
    int arr[]={10,20,30,40};
    int n=4;
    PrintAllPairs(arr,n);
    return 0;
}
*/

//PRINT UPPER TRIANGLE PAIRS
/*void PrintAllPairs(int arr[],int n){

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        cout<<arr[i]<<", "<<arr[j]<<endl;  
    }
}
}
int main(){
    int arr[]={10,20,30,40}; 
    int n=4;
    PrintAllPairs(arr,n);
    