#include<iostream>
using namespace std;
bool solve(int n){
    int reverse=0;
    int original=n;
    int digit=0;
    while(n>0){
    digit=n%10;
    reverse= (reverse*10)+digit;
    n=n/10;
    }
    if(reverse==original){
        return true;
    }
    return false;
}
int main(){
    int n=188;
    
   bool result=solve(n);
   cout<<result;
    return 0;
}