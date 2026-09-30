#include<iostream>
#include<climits>
using namespace std;
int solve(int n){
int digit=0;
int maxi =INT_MIN;
while(n>0){
digit=n%10;
 maxi=max(maxi,digit);
n=n/10;
}
return maxi;
}
int main(){
    int n=4569876;

    int target=solve(n);
    cout<<target;

    return 0;
}