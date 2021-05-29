/*
The approach followed to find sequence is using the truth table and bits it has time complexity of O(n2^n)hence
it will only work till n =18;
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<vector<int>>vec;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<(1<<n);i++){
        vector<int>sub;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                sub.push_back(nums[j]);
            }

        }
        vec.push_back(sub);

    }
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j];
        }
        cout<<endl;
    }
    return 0;
}
