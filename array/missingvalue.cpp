#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class solution{
    public:
    /*int sortingarray(vector<int>& arr){
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();++i){
            if(i !==arr[i]) continue;
                else
                    return i;
        }
            return arr.size();
    }
    int missingvalue(vector<int>& arr){
        int n=arr.size();
        return sortingarray(arr);
    }
};
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    solution obj;
    int missing=obj.missingvalue(arr);
    cout<<missing<<endl;
    return 0;
}
*/
//second approach

int xorr(vector<int>& arr, int n){
    int ans=0;
    //xor all values of array
    for(int i=0;i<arr.size();++i){
        ans= ans^arr[i];
    }

    //xor all values from 0 to n
    for(int i=0;i<=n;i++){
        ans=ans^i;
    }
    return ans;
}
}
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int missing=xorr(arr, n);
    cout<<"The missing value is: "<<missing<<endl;
    return 0;

}
