#include <iostream>
using namespace std;
const int N=1e7+10;
int dp[N];
int main(){
    int n;
    cin >>n;
    int a[n];
    // int mini=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        dp[i]=dp[i-1]+a[i];
    }
    for(int i=1;i<=n;i++){
        cout<<"dp array"<<dp[i];
    }
    int t;
    cin>>t;
    while(t--){
        int l;
        int r;
        cin >>l;
        cin >>r;   
        cout << dp[l-1]-dp[r]<<endl;
    }
}