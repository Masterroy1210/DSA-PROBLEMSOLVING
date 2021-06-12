#include<iostream>
#include<string>
using namespace std;



int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int count =0;
  for(int i=0;i<n;i++){
    string s=to_string(arr[i]);

   
    if(s.length()%2==0){
      count++;
    }
  }
  cout<<count<<endl;



  return 0;
}
