#include<iostream>
using namespace std;
int solve(int n){
    int fact=1;
    int digit=0;
    while(n>0){
   fact=fact*n;
   n=n-1;
    }
    return fact;
}
int main(){
    int n=3;
    int result=solve(n);
    cout<<result;

    return 0;
}