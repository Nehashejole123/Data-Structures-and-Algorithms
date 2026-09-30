#include<iostream>
#include<vector>
using namespace std;
void solve(string &s,int start ,int end){
    //base case
    if(start>=end){
        return;
    }
    //recursive call
    swap(s[start],s[end]);
    solve(s,start+1,end-1);
}

int main(){
    string s ="kuntimataa";
    int start=0;
    int end= s.size()-1;
    solve(s,start,end);
    cout<<"the reverse string is = "<<s;
}