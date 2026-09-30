//two sum 

#include<iostream>
using namespace std;

/*bool CheckTwoSum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[]={2,3,4,6,8,9};
    int n=6;
    int target=10;

    bool ans=CheckTwoSum(arr,n,target);
    cout<<ans<<endl;
    return 0;
}*/

bool PointerApproach(int arr[],int n,int target){
    int left=0;
    int right=n-1;
    while(left<right){
        int Csum=arr[left]+arr[right];
        if(Csum==target){
            cout<<"("<<arr[left]<<","<<arr[right]<<")"<<endl;
            return true;
        }
        else if (Csum<target){
            left++;
        }
        else if(Csum>target){
            right--;
        }
    }
    return false;
}

int main(){
    int arr[]={1,2,4,7,5,9};
    int n=6;
    int target=12;
    bool ans=PointerApproach(arr,n,target);
    cout<<"Found: "<<ans<<endl;
    return 0;
}

