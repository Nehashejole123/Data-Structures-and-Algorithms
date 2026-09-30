#include<iostream>
#include<vector>
using namespace std;

int countOccurance(string s,char target,int &count,int index){
    //base case
    if(index==s.size()){
        return 0;
    }
    //recursive call
    if(s[index]==target){
        count++;
    }
    return countOccurance(s,target,count,index+1);

}
int main(){
    string s="kuntyaaBhokacha";
    int count=0;
    char target='a';

    countOccurance(s,target,count,0);
    cout<<"the count of a is = "<< count ;

    return 0;
}