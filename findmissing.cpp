#include <iostream>
using namespace std;
int findMissing(int arr[],int n){
  int xorn=0;
  for(int i=1;i<=n;i++){
    cout<<i;
    xorn^=i;
  }
  int xorarr=0;
  for(int i=1;i<n;i++){
    xorarr^=arr[i];
  }
  return xorarr^xorn;
}
int main(){
 int arr[]={1,2,4};
//  int n=sizeof(arr)/sizeof(arr[0]);
int n=4;
 cout<<n<<endl;
 int ans=findMissing(arr,n);
 cout<<"This is answer "<<ans;
}