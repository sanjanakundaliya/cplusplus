#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >>n;
    ll a[n];
    ll sa[n];
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        a[i]=x;
        sa[i]=x;
        }
        sort(sa,sa+n);
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
        sa[i]+=sa[i-1];
    }
    ll m;
    cin >>m;
    for(int i=1;i<=m;i++){
        int opt,l,r;
        cin >>opt>>l>>r;
        l--;
        r--;
        if(opt==1){
            if(l==0){
                cout<< a[r]<<"\n";
            }else{
                cout<< a[r]-a[l-1]<<"\n";
            }
        }else{
             if(l==0){
                cout<< sa[r]<<"\n";
            }else{
                cout <<sa[r]-sa[l-1]<<"\n";
            }
        }
        
    }
}
