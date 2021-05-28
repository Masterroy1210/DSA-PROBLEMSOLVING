#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int dummy[100]={0};
    for(int i=0;i<n;i++){
        dummy[arr[i]]++;
    }
    for(int i=1;i<=100;i++){
        dummy[i]=dummy[i]+dummy[i-1];
    }
    cout<<"Element smaller than the current element is"<<endl;
    for(int i=0;i<n;i++){
        cout<<dummy[arr[i]-1];
    }
    return 0;

}