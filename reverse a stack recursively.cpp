#include<iostream>
#include<stack>
#include<algorithm>
using namespace std ;


void  reverse (stack <int >s1  )  {
	if(s1.empty()) return ;
		int element=s1.top();
		s1.pop();
		reverse(s1);
		s1.push(element);
}



int main(){
	int n;
	cin>>n;
	stack<int>st;
	for(int i=0;i<n;i++){
		int data;
		cin>>data;
		st.push(data);
	}
	reverse(st);
	while(!st.empty()){
		cout<<st.top()<<endl;
		st.pop();
	}
}