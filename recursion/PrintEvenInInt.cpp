#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int counteven(int digit,int one,int count){
    //base case
    if(digit==0){
        return count;
    }

     one=digit%10;
    if(one%2==0){
        count++;
    }
    digit=digit/10;
return counteven(digit,one,count);

}
int main(){
   int digit=234567;
   int one=0;
   int count=0;
    cout<<counteven(digit,one,count);

    return 0;
}