#include<iostream>
#include<algorithm>

using namespace std;



int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]%2==0){
            i++;
        }else{
            swap(arr[i],arr[j]);
            j--;
        }
    }
    cout<<"Array after the parity Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}