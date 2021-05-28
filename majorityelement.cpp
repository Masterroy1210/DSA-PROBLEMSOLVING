/*
u8sing the booyer moore algorithm 
*/
#include<iostream>
using namespace std;


int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0, m=0;
    for(int i=0;i<n;i++){
        if(count==0){
            m=arr[i];
            count++;
        }else if(m==arr[i]){
            count++;
        }else{
            count--;
        }
    }
    cout<<"Majority Element is"<<m;
    return 0;
}