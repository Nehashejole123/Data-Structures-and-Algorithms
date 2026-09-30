//SuM OF 1 TO 5 WITH RECURSION

#include<iostream>
using namespace std;
int solve(int n){
    //base case
    if(n==1)
    return 1;
    
    //recursive call
    
   int ans= solve(n-1) + n;
   return ans;
}
int main(){
    int n=5;
    int ans=solve(n);
    cout<<ans;
}