#include<iostream>
#include<vector>
using namespace std;
vector<int> solve(int arr[], int size) {
    vector<int> ans;

    for(int i = 0; i < size; i++) {
        int n = arr[i];
        while(n > 0) {
            int digit = n % 10;
            if(digit == 1) {
               ans.push_back(arr[i]);            
                break;
            }
            n = n / 10;
        }
    }
    return ans;
}
int main(){
    int arr[]={1023,3467,3432,2341,1123,1242};
    int size=6;

    vector<int>result=solve(arr,size);
    for(auto x:result){
        cout<<x<<" ";
    }
    return 0;
}