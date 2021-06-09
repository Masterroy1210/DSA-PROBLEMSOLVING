#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int matrix[n][m];
    int row[n];
    int col[m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];      
        }
    }


    for(int i=0;i<n;i++){
        row[i]=1;
    }
    for(int i=0;i<m;i++){
        col[i]=1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=0;
                col[j]=0;
            }
        }
    }

   
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i]==0||col[j]==0){
                    matrix[i][j]=0;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<matrix[i][j]<<" ";

            }
            cout<<endl;
        }

return 0;
}