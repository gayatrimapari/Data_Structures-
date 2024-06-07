#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter count";
  cin>>n;
  int arr[n] ={ };

  for(int i=0; i<n; i++){
    cout<<"enter value : ";
    cin>>arr[i];
  }
  
  cout<<"array is : ";
  
   for(int i=0; i<n; i++){
    cout<<" "<<arr[i];
   }
  cout<<" }";

  return 0;
}
