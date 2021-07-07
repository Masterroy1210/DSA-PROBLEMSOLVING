#include<bits/stdc++.h>
using namespace std;

long long int computehash(string s){
  long long int pr =31;
  long long int mod = 1e9+7;
  long long int hash =0;
  for(int i=0;i<s.length();i++){
    hash = (hash+((s[i]-'a'+1)*pr)%mod)%mod;
    pr = (pr*31)%mod;
  }
  return hash;
}


int main(){
  vector<string>v;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);

  }
  vector<string>v2;
  for(int i =0;i<n;i++){
    v2.push_back(v[i]);
  }
  for(int i=0;i<n;i++){
    sort(v2[i].begin(),v2[i].end());
  }
  unordered_map<long long int,int>mpp;
  for(int i=0;i<n;i++){
    long long int hash = computehash(v2[i]);
    if(mpp.find(hash)!=mpp.end()){
      cout<<v[i]<<"  "<<v[mpp[hash]]<<endl;

    }else{
      mpp[hash]=i;
    }
  }


return 0;
}