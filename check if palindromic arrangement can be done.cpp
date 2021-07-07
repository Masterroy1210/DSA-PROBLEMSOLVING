#include<bits/stdc++.h>
using namespace std;




int main(){
  string s;
  cin>>s;
  int arr[256]={0};

  int count=0;
  for(int i=0;i<s.length();i++){
    arr[s[i]-'a'+1]++;
    if(arr[s[i]-'a'+1]%2==1){
      count++;
    }else{
      count--;
    }
  }
  cout<<count<<" count"<<endl;
  if(count>1){
    cout<<"\n The palindromic arrangement of theentered strin g canot be done\n";

  }else{
    cout<<"\n The palindromic arrangement of the string can be done\n";
  }


  return 0;
}