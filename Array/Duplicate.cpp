#include <iostream>
using namespace std;

int duplicate(int arr[],int n){
  if(n==0) return 0;

  int i=0;

  for(int j=1;j<n;j++){
    if(arr[j]!=arr[i]){    //working function
     i++;
     arr[i]=arr[j];
    }
     
  }
  return i+1;
}

int main(){
  int arr[]={1,2,3,3,4,5,5};
  int n=7;

  int newLength=duplicate(arr,n);

  for(int i=0;i<newLength;i++){
    cout<<arr[i];
  }

  return 0;
}