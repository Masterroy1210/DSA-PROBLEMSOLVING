#include<bits/stdc++.h>
using namespace std;


int merge(int arr[],int low,int mid,int high){

	vector<int>temp;
	int left = low;
	int right = mid+1;
	int count =0;
	while(left<=mid &&right<=high){
		if(arr[left]<arr[right]){
			temp.push_back(arr[left]);
			left++;
		}else{
			temp.push_back(arr[right]);
			right++;
			count+= mid-left+1;
		}

	}
	while(left<=mid){
		temp.push_back(arr[left++]);
	}
	while(right<=high){
		temp.push_back(arr[right++]);

	}
	for(int i=low;i<=high;i++){
		arr[i] = temp[i-low];
	}

	return count;
}

int countinversion(int arr[],int low,int high){
	if(low>=high)return 0;

	int mid=(low+high)/2;
	int left = countinversion(arr,low,mid);
	int right = countinversion(arr,mid+1,high);
	int cnt = merge(arr,low,mid,high);

	return cnt+left+right;
}






int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	 cout<<countinversion(arr,0,n-1);
	 cout<<"\nSorted array is"<<endl;
	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";
	 }
}