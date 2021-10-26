#include<bits/stdc++.h>
using namespace std;

int findmedian(int arr1[],int arr2[],int n,int m){
	if(n>m)return findmedian(arr2,arr1,m,n);

	int low =0;
	int high = n;
	while(low<=high){
		int cut1  = (low+high)/2;
		int cut2 = ((n+m)/2)-cut1;
		int l1 = cut1==0?INT_MIN:arr1[cut1-1];
		int l2  = cut2==0?INT_MIN:arr2[cut2-1];
		int r1 = cut1==n?INT_MAX:arr1[cut1];
		int r2 = cut2==m?INT_MAX:arr2[cut2];

		if(l1<=r2&&l2<=r1){
			if((n+m)%2==0){
				return ((max(l1,l2)+min(r1,r2))/2.0);
			}else{
				return max(l1,l2);
			}
		}else if(l1>r2)high = cut1-1;
		else low = cut1+1;
	}
	return 1.0;
}



int main(){
	int n ,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++)cin>>arr1[i];
	for(int i=0;i<m;i++)cin>>arr2[i];

	cout<<findmedian(arr1,arr2,n,m)<<endl;
	return 0;
}