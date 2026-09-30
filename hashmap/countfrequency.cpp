//count frequency in a string
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
int arr[]={10,20,30,20,10};
    int size=6;
unordered_map<int,int>mp;
for(int i=0;i<size;i++){
    mp[arr[i]]++;
}
unordered_map<int,int>iterator::it;
for(auto it:mp){
    //cout<<"key :"<<it.first<<"value :"<<it.second<<endl;
    cout<<*it;
}


return 0;
}
