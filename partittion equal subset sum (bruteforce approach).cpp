#include<iostream>
using namespace std;






int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int leftsum=0;
    for(int i=0;i<n;i++){
        leftsum=leftsum+arr[i];
        int rightsum=0;
        for(int j=i+1;j<n;j++){
            rightsum=rightsum+arr[j];
        }

        if(leftsum==rightsum){
            cout<<"the breaking point of the array is"<<i+1<<endl;
            return 0;
        }
    }
    cout<<"there is no brteaking point possible in this array"<<endl;
     return 0;

}  
