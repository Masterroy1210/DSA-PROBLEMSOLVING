#include<iostream>
using namespace std;



int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    int sum1=0,sum2=0;
    while(i<j){
        sum1=arr[i]+sum1;
        sum2=arr[j]+sum2;
        if(sum1>sum2){
            j--;
        }else{
            i++;
        }

    }
    cout<<i<<endl;
    return 0;
}