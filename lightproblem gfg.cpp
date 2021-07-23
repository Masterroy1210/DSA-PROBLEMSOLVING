#include<bits/stdc++.h>
using namespace std;


int lightbulb(int arr[],int n,int a){
	int i=0,count=0;
    bool bulbfound=false;
    int bulbfoundatindex = 0;
	while(i<n){
		bulbfound=false;
		int j =i+a-1;
		while(j>=i-a+1&&j>=0&&j<n){
			
			if(arr[j]==1){
				bulbfound=true;
				bulbfoundatindex=j;
				cout<<"bulbfoundatindex"<<bulbfoundatindex<<endl;
				count++;
				i=bulbfoundatindex+a;
				break;
			}
			j--;
		}if(!bulbfound)return -1;

	}
	return count;

}



int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int a;
	cin>>a;
	int count =lightbulb(arr,n,a);
	cout<<count<<endl;
	return 0;
}