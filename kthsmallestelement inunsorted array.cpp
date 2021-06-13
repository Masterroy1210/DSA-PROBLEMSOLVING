#include<iostream>
#include<algorithm>

using namespace std;

int partition(int arr[],int p,int n){
  int x = arr[p];
  int i=p;
  for(int j=p+1;j<n;j++){
      if(arr[j]<=x){
        i=i+1;
        swap(arr[i],arr[j]);
      }
    
    swap(arr[p],arr[i]);
  }
  return i;
}

void quicksort(int arr[],int p,int n){
  if(p<n){
    int q = partition(arr,p,n);
    quicksort(arr,p,q-1);
   
  }
}
 




int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  quicksort(arr,0,n);
  cout<<"Array After the sorting is"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
    int k;
    cin>>k;
    cout<<endl;
    cout<<"Kth smallest element is "<<arr[k-1]<<endl;

  return 0;
}
