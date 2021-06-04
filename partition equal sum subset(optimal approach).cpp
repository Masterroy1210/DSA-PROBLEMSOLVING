#include<iostream>
using namespace std;




int main(){
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }
    int leftsum=sum;
    int rightsum=0;
    
    for(int i=n-1;i>=0;i--){
        leftsum-=arr[i];
        rightsum+=arr[i];



        if(leftsum==rightsum){
            cout<<"THe breaking point in the array is"<<i;
            return 0;
        }

    }
     cout<<"Their is no breaking point in the array"<<endl;
        return 0;

}


