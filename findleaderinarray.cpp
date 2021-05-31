#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max =0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>max){
            cout<<arr[i]<<" ";
            max = arr[i];
        }
    }
    return 0;
}