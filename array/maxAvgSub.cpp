#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
    double maxAvgSub(vector<int>& nums, int k){
        int maxsum=INT_MIN;
        int i=0,k=4;
        int j=k-1;

        while(j<nums.size()){
            int sum=0;
            for(int y=i;y<=j;y++){
                sum+= nums[y];
            }
            maxsum=max(maxsum,sum);
            i++;
            j++;

        }
        return (double)maxsum/k;


    }
};
int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    solution obj;
    double result=obj.maxAvgSub(nums,4);
    cout<<"The maximum average subarray of size k is:"<<result<<endl;
    return 0;
}