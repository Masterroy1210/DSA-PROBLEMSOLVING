#include<iostream>
#include<algorithm>
using namespace std;



int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int left=0,right=0,max1=0;
	for(int i=0;i<n;i++){
		left=i-1;
		right=i+1;
		while(arr[left]>=arr[i]&&left>=0)left--;
		while(arr[right]>=arr[i]&&right<n)right++;
		int area = (right-left+1)*arr[i];
		max1=max(max1,area);
	}
	cout<<" The maximum rectangel area in the histogram is "<<max1<<endl;
	return 0;
}