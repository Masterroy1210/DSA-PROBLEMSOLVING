#include<bits/stdc++.h>
using namespace std;


bool isvalid(int i,int j,int n,vector<vector<int>>&matrix){
  if(i>=n || j>=n||i<0||j<0|| matrix[i][j]==0) return false;

  return true;
}


int main(){
  int n;
  cin>>n;
  vector<vector<int>>matrix(n,vector<int>(n,0));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>matrix[i][j];
    }
  }
  vector<vector<int>>visited(n,vector<int>(n,0));
  queue<pair<int,pair<int,int>>>q;
  if(matrix[0][0]==0) {
    cout<<"\n Not possible"<<endl;
    return 0;
  }
  int di[] = {-1,0,1,0};
  int dj[] = {0,1,0,-1};
  q.push({0,{0,0}});
  visited[0][0]=1;
  while(!q.empty()){
    auto it =q.front();
    q.pop();

    int steps = it.first;
    int i = it.second.first;
    int j = it.second.second;

    for(int ind=0;ind<4;ind++){
      int newi = i+di[ind];
      int newj = j+dj[ind];

      if(isvalid(newi,newj,n,matrix)&& !visited[newi][newj]){
        visited[newi][newj]=1;
        if(matrix[newi][newj]==2){
          cout<<"NUmber of steps required to reach is "<<steps+1;
          break;

        }
        q.push({steps+1,{newi,newj}});
      }
    }
  }


  return 0;
}