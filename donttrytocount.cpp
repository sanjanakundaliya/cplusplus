#include <iostream>
using namespace std;
// public int solve(n){

// }
int main(){
    long long n,m,count=6,f=0,res=0;
    string s,x;
    cin>>n>>m;
    cin>>x>>s;
    while(count--){
        if(x.find(s)!= string::npos){
            f=1;
            break;
        }
        res++;
        x+=x;
    }
    if(f==1){
        cout<<res;
    }else{
        cout<<-1;
    }
}