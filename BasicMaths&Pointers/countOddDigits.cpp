#include<iostream>
using namespace std;
solve(int n){
    int digit=0;
    int count=0;
    while(n>0){
        digit=n%10;
        if(digit%2 !=0){
            count++;
        }
        n=n/10;
    }
    return count;
}

int main(){
    int n=23546789;

    int result=solve(n);
    cout<<result;
}