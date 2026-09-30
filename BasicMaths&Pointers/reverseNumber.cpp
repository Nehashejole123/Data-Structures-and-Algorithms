#include<iostream>
using namespace std;
//reverse a digit
int solve(int n){
int digit=0;
int rev=0;
while(n>0){
    digit=n%10;
    rev=(rev*10)+digit;
    n=n/10;
}
return rev;
}
int main(){
    int n=1234;

    int result=solve(n);
    cout<<result;
    return 0;
}