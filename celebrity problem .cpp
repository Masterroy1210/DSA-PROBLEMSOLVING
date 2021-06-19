#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int matrix[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>matrix[i][j];
		}

	}
	int celeb =0;
	for(int i=0;i<n;i++){
		if(matrix[celeb][i]==1){
			celeb =i;
		}
	}
	for(int i=0;i<n;i++){
		if(i!=celeb && (matrix[celeb][i]==1 || matrix[i][celeb]!=1)){

			cout<<"No celebrity present in the party "<<endl;
			return 0;
		}
		
	}
	cout<<"celebrity present in the  party is "<<celeb+1<<" person"<<endl;
	return 0;
}