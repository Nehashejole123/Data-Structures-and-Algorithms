#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,int>mp;
    char start='a';
    char end='z';
    int count=1;
    for(char i=start;i<=end;i++){
        mp[i]=count;
        count++;
    }
    for(auto it:mp){
        cout<<"Letter: "<<it.first<<" "<< "value: "<<it.second<< endl;
    }
    return 0;

}