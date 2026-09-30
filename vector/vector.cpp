#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> marks= {20,30,50,60,70,50,55};

    cout<< *(marks.begin())<<endl;

    auto it =marks.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    marks.push_back(100);

    if(marks.empty()==true){
        cout<<"vector is empty"<<endl;
    }
    else{
        cout<<"vector is not empty"<<endl;
    }
    cout<< *(marks.end()-1)<<endl;
    return 0;
}