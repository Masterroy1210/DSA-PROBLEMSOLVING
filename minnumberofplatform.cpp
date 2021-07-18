#include<bits./stdc++.h>
using namespace std;

int getminplatform(int arr[],int dept[],int n){
	int plat=1,result=1;
	int i=1,j=0;
	while(i<n&&j<n){
		if(arr[i]<dept[j]){
			i++;
			plat++;
		}else if(arr[i]>dept[j]){
			j++;	
			plat--;
		}


		result = max(plat,result);
	}
	return result;
}


int main(){
	int n;
	cin>>n;
	int arr[n],dept[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cin>>dept[i];
	}
	sort(arr,arr+n);
	int minplat = getminplatform(arr,dept,n);
	cout<<minplat<<endl;
	return 0;
}