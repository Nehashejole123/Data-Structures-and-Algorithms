#include<iostream>
using namespace std;

/*int main(){
    int n, sum = 0;  // Initialize sum
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "enter array" << endl;
        cin >> arr[i];
        sum = sum + arr[i];
    }
    
    cout << sum << endl;  // Add endl for newline
    return 0;
}



int linearSearch(int arr[],int n,int val){
for(int i=0;i<n;i++){
    if(arr[i]==val){
        return i;
    }
}
return -1;
}
int main(){
    int arr[]={10,20,30,40};
    int n=4;
    int val=30;
   int ans= linearSearch(arr,n,val);
    cout<< ans <<endl;
}

void populate (int arr[],int n){
    int j=0;
    for(int i=0;i<n;i=i+2){
        arr[n-j-1]=i+2;
        arr[j]=i+1;
        j++;
    }
     
}


//swapping alternate elements in an array
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;

    }
        int main(){ 
    int arr[]={1,2,3,4,5};
    int n=5;
   PairSumTox(arr,n,5);  
   //for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<arr[j];
  // }
    return 0;
}

    
} 

int PairSumTox(int arr[],int n,int target){
    int pairs=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
                pairs++;
            }
        }
    }
    return pairs;
}
int main(){ 
    int arr[]={1,2,3,4,5};
    int n=5;
   int result=PairSumTox(arr,n,5);  
   //for(int i=0;i<n;i++){
    cout<<"Number of pairs that sum to 5: "<<result<<endl;
  // }
    return 0;
}

//Triple sum to x

int TripleSumToX(int arr[],int n,int target){
    int triplet=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;j<n;j++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                    triplet++;

                }
            }
        }
    }
    return triplet;
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    int target=10;
    int result=TripleSumToX(arr,n,target);
    cout<<"Number of triplets that sum to "<<target<<": "<<result<<endl;
    }   
   */

    void sort0sAnd1s(int arr[],int n){
        int nextZero=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                int temp=arr[i];
                arr[i]=arr[nextZero];
                arr[nextZero]=temp;
    
                nextZero++; 

            }
        }
    }

    int main(){
        int arr[]={0,1,0,0,1,0,1,0,1,0};
        int n=10;
        sort0sAnd1s(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

    }

    