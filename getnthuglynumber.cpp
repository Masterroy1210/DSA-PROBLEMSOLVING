#include<bits/stdc++.h>
using namespace std;

int  getuglynumber(int n){
	int ugly[n];
	ugly[0]=1;
	int p2 = 0,p3=0,p5=0;
	for(int i = 1;i<n;i++){
		int next = min(ugly[p2]*2,min(ugly[p3]*3,ugly[p5]*5));
		ugly[i]=next;
		if(ugly[p2]*2==next)p2++;
		if(ugly[p3]*3==next)p3++;
		if(ugly[p5]*5==next)p5++;

	}
	return ugly[n-1];
}

int main(){
	int n;
	cin>>n;
	int res = getuglynumber(n);
	cout<<res<<endl;
	return 0;
}