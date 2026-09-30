#include<iostream>
#include<vector>
using namespace std;

/*int main(){
    vector<vector<int>>arr(4,vector<int>(3,0));

    int rowsize=arr.size();
    int colsize=arr[0].size();

    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
void TwoSum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j];
            }
        cout<<endl;

        }

    }
int main(){
    int arr[]={10,20,30,40};
    int n=4;
    int target=30;
    TwoSum(arr[],n,target);
    
return 0;
}