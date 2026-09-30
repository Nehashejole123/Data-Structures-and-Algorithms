#include<iostream>
#include<vector>
using namespace std;

void solve(int digit){
    //base case
    if(digit==0){
        return;
    }
solve(digit/10);
 cout<<digit%10<<endl;

}
int main(){
   int digit=234567;
    solve(digit);

    return 0;
}