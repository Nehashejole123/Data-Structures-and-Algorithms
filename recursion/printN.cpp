#include<iostream>
using namespace std;
/*getfactorial(int n){
    //Base case
    if(n==0 || n==1)
    return 1;

    //recursive call 
    
    int finalans=getfactorial(n-1);
    int ans= n*finalans;
}
int main(){
    int n=5;

    int ans=getfactorial(n);
    cout<<ans;
}*/

void printn(int n){
    //BASE CASE
    if(n==0)
    return ;

    //Recursive call
    cout<<n;
    printn(n-1);
}

//Print N
int main(){
    int n=7;

printn(n);
}