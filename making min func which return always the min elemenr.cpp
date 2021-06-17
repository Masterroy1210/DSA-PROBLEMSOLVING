#include<iostream>
#include<stack>
using namespace std;




int main(){
	int n ;
	cin>>n;
	int data;
	int min=1e9;
	stack<int>st;
	cin>>data;
	if(data<min){
		min =data;
	}
	for(int i=1;i<n;i++){
		cin>>data;
		if(data>min){
			st.push(data);
		}else{
			int res = (2*data)-min;
			min=data;
			st.push(res);
		}
	}
	int ch;

	do{
		cout<<endl;
		cout<<"1.pop element"<<endl;
		cout<<"2.show current element"<<endl;
		cout<<"3.exit"<<endl;
		cin>>ch;
	switch(ch){
		case 1: if(st.top()<min){
			min = (2*min)-st.top();
			int element = st.top()+2*min;
			cout<<"The element poped out is"<<element<<endl;
			st.pop();
			
		}else{
			int element = st.top();
			st.pop();
			cout<<" The element popped out of the stack is"<<element;
		}
		break;
		case 2: cout<<" the Current min element is "<<min<<endl;
				break;
	}
	}while(ch!=3);



return 0;


}