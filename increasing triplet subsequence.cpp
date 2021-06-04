#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mid_index=0,low=-1,mid=-1;

    if(n<3){
        cout<<"No triplet can be formed"<<endl;
    }

    for(int i=1;i<n;i++){   
        if(arr[i]<arr[mid_index]){
            mid_index=i;
        }
        else if(mid==-1){
            low=mid_index;
            mid=i;
        }else if(arr[i]<arr[mid]){
            low=mid_index;
            mid=i;
        }else{
            cout<<"TRiplet is"<<endl;
            cout<<arr[low]<<arr[mid]<<arr[i]<<endl;
        }

    }
    return 0;
}