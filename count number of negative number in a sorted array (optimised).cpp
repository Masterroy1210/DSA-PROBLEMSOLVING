#include<iostream>
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
    int count=0;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<m;j++){
            if(arr[i][j]<0){
                count = count+(m-j);
                break;
            }
        }
    }

cout<<count<<endl;

    return 0;
}
