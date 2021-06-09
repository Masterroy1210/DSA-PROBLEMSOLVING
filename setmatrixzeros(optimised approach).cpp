#include<iostream>
using namespace std;



int main(){
    int n ,m;
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];

        }
    }


    int rowflag=0;
    int colflag=0;


    for(int i=0;i<n;i++){
        if(matrix[i][0]==0){
            rowflag=1;
        }
    }
    for(int i=0;i<m;i++){
        if(matrix[0][i]==0){
            colflag=1;
        }
    }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }

            if(rowflag==1){
                for(int i=0;i<n;i++){
                    matrix[i][0]=0;
                }
            }
            if(colflag==1){
                for(int j=0;j<m;j++){
                    matrix[0][j]=0;
                }
            }

//displaying output

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}





return 0;

}
