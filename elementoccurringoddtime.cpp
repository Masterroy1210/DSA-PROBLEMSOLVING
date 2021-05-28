
/*
    THE CONSTRIANTS FOR THIS XOR METHOD TO WORK IS THAT THEIR IS ONLY ELEMENT IN THE ARRAY OCCURING ODD TIMES
    IF NOT SUCH CASE THEN USE HASH TABLE WHICH WILL REQURE EXTRA o(N) SPACE COMPLEXITY 
*/

#include<iostream>
using namespace std;


int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans =0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    }
    cout<<"The element occuring odd time in the array"<<ans<<endl;
    return 0;
}