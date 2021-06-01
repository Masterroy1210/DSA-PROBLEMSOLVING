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
  int low=0,mid=0;
  int high =n-1;
  while(mid!=high){
    if(arr[mid]==0){
      swap(arr[low],arr[mid]);
      low++;
      mid++;
    }else if(arr[mid]==1){
      mid++;
    }else if(arr[mid]==2){
      swap(arr[mid],arr[high]);
      high--;
    }
  }

  cout<<"After Processing"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" " ;
  }

  return 0;
}