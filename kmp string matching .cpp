#include<iostream>
#include<string>
using namespace std;





int main(){
	string s;
	cin>>s;
	string p;
	cin>>p;
	int n = s.length();
	int m=p.length();

	int lps[m];
	int i=1,len=0;
	while(i<m){
		if(p[i]==p[len]){
			len++;
			lps[i]=len;
			i++;
		}else{
			if(len!=0)len=lps[len-1];
			else{
				lps[i]=0;
				i++;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<lps[i]<<" "; 
	}
	cout<<endl;
	int pi=0;
	int si=0;
	while(si<n){
		if(s[si]==p[pi]){
			si++;
			pi++;
		}
		if(pi==m){
			cout<<"Pattern Found at the index "<<si-pi<<endl;
			pi=lps[pi-1];
		}else if(si<n &&p[pi]!=s[si]){
			if(pi!=0){
				pi=lps[pi-1];
			}else{
				si++;
			}
		}


	}
	return 0;
}