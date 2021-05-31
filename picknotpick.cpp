/* 
FIND  ALL COMBINATIONSFROM ARRAY OF N DISTINCT ELEMENT WHICH FORM SUM 

*/



#include<iostream>
#include<vector>
using namespace std;

void picknotpick(int arr[],int index,int n,int sum,vector<int>&ds){
    if(index==n){
    if(sum==0){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
    }
        return;
    }
    if(arr[index]<=sum){
        ds.push_back(arr[index]);
        picknotpick(arr,index+1,n,sum-arr[index],ds);
        ds.pop_back();
    }
    picknotpick(arr,index+1,n,sum,ds);

}




int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    vector<int>ds;
    picknotpick(arr,0,n,sum,ds);
    return 0;    
}
