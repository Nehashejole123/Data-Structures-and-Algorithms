#include<iostream>
using namespace std;
int solve(int n){
    int digit=0;
    int count=0;
    if(n==0){
        return -1;
    }
    while(n>0){
        digit=n%10;
        count++;
        n=n/10;

    }
    return count;
}

int main(){
    int n=12345;

    int result=solve(n);
    cout<<result;
    return 0;
}