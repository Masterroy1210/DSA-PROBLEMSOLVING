#include<iostream>
#include<algorithm>
using namespace std;



int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }


  for(int i=1;i<n;i=i+2){
      if(i+1<n){

        if(arr[i]<=arr[i-1]){
          swap(arr[i],arr[i-1]);
        }
        if(arr[i]<=arr[i+1]){
          swap(arr[i],arr[i+1]);
        }
}



  }

    cout<<"After the wiggle sort"<<endl;
    for(auto it:arr){
      cout<<it<<" ";

    }
    return 0;
}