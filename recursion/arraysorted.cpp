#include<iostream>
#include<vector>
using namespace std;

bool solve(vector<int>arr,int index){
    //base case
    if(index==arr.size()-1) return true;

    if(arr[index]>arr[index+1]){
        return false;
    }
    return solve(arr,index+1);
}
int main(){
    vector<int> arr={20,30,90,50,60,70,80};
    int index=0;
    solve(arr,index);
    if(solve(arr,index)){
    cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }

    return 0;
}