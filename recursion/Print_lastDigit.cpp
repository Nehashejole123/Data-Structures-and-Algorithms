//reverse the digit

#include<iostream>
using namespace std;
int solve(int n,int rev){
    //base case
    if(n==0)
    return rev;

    //Recursive call
    int lastdigit=n%10;
    rev=rev*10+lastdigit;
    n=n/10;
   return solve(n,rev);
}

int main(){
    int n=12345;
    int rev=0;
    int ans=solve(n,rev);
    cout<<ans;
}