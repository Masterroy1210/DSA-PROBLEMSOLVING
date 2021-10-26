#include<bits/stdc++.h>
using namespace std;

int findelementinrotatedsortedarray(int arr[],int target,int n){
	int low =0;
	int high =n-1;
	while(low<=high){
		int mid =(low+high)/2;
		if(arr[mid]==target)return mid;
		if(arr[low]<=arr[mid]){
			if(arr[low]<=target&&arr[mid]>=target){
				high = mid-1;
			}else{
				low = mid+1;
			}
		}else{
			if(arr[mid]<=target&&arr[high]>=target){
				low = mid+1;
			}else{
				high = mid-1;
			}
		}
	}
	return -1;
}

int main(){
	int n ;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;

	cout<<findelementinrotatedsortedarray(arr,target,n)<<endl;
	return 0;
}