#include<iostream>
#include<algorithm>

using namespace std;




int main(){
  int n,m;
  cin>>n>>m;
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }

  for(int i=0;i<n;i++){
    for(int j=i;j<m;j++){
      swap(arr[i][j],arr[j][i]);
    }
  }
  cout<<"Array After the transpose is"<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  //for reversing each column to get desired ouput;
  for(int j=0;j<m;j++){
    for(int i=0;i<n/2;i++){
      swap(arr[i][j],arr[n+i-1][j]);
    }
  }
  cout<<endl;
  cout<<"Array After the 90 degree rotation is"<<endl;

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }






  return 0;
}