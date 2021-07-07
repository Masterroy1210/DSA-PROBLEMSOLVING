#include<bits/stdc++.h>
using namespace std;

bool isvalid(int i,int j ,int n,vector<vector<int>>&matrix){
  if(i<0||j<0||i>=n||j>=n||matrix[i][j]!=1)return false;

  return true;
}
void bfs(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&visited,int n){
  int di[]={-1,0,1,0};
  int dj[]={0,1,0,-1};
  queue<pair<int,int>>q;
  q.push({i,j});
  visited[i][j]=1;
  while(!q.empty()){
    auto it = q.front();
    q.pop();
    int a = it.first;
    int b = it.second;
    for(int ind = 0;ind<4;ind++){
      int newi = a+di[ind];
      int newj= b+dj[ind];
      if(isvalid(newi,newj,n,matrix)&&!visited[newi][newj]){
        visited[newi][newj]=1;
        q.push({newi,newj});
      }
    }
  }
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
  int island=0;
  vector<vector<int>>visited(n,vector<int>(n,0));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(matrix[i][j]==1&&visited[i][j]==0){
        bfs(i,j,matrix,visited,n);
        island++;
      }
    }
  }
  cout<<"\n THe island group in the entered matrix is"<<island;

  return 0;
}