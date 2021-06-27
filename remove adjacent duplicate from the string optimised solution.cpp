#include<iostream>
#include<string>
using namespace std;



int main(){
	string s;
	cin>>s;


	int slow=0;
	for(int i=0;i<s.length();i++){
		cout<<slow<<endl;
		cout<<s<<endl;
		if(slow==0||(s[slow-1]!=s[i])){
			s[slow++]=s[i];
		}else{
			slow--;
		}
	}
	cout<<" final"<<s<<endl;
	for(int i=0;i<slow;i++){

		cout<<s[i]<<" ";

	}
	return 0;
}