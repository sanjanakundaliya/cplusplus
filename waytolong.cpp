#include <iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    cin.ignore();
    while(t){
        string s;
        getline(cin,s);
        int len=s.length();
        if(len>=10){
            cout<< s[0]<<len-2<< s[len-1]<<endl;
        }else{
            cout<<s<<endl;
        }
        t--;
    }
}