#include<iostream>
using namespace std;




int main(){


    int n;
    cin>>n;
    int arr[n];
    int op[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int leftpro=1;
    for(int i=1;i<n;i++){
        leftpro=leftpro*arr[i-1];
        int rightpro=1;
        for(int j=i+1;j<n;j++){
            rightpro= rightpro*arr[j];
        }

        op[i]=leftpro*rightpro;
    }
    int pro=1;
    for(int i=1;i<n;i++){

        pro = pro*arr[i];
        op[0]=pro;
    }
    for(int i=0;i<n;i++){
        cout<<op[i]<<" ";
    }






    return 0;
}