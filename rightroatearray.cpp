#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int arr[],int l,int h){
    int i=l,j=h;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;

    }
}
void rotate(int arr[],int k,int n){
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-k-1);
    reverse(arr,0,n-1);
}






int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    rotate(arr,k,n);
    cout<<"Array After rotation is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}