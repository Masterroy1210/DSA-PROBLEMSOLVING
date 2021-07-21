#include<bits/stdc++.h>
using namespace std;

void reversewords(int i,int j,string &s){
	while(i<j){
		swap(s[i],s[j]);
		i++;
		j--;
	}
	
}



int main(){
	string s;
	getline(cin,s);
	int start=0;
	s.insert(s.end(),' ');
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			reversewords(start,i-1,s);
			start=i+1;;
		}
	}
	reversewords(0,s.length()-1,s);
	cout<<s<<endl;
	return 0;
}