#include <iostream>
using namespace std;

int main(){
    string s;
    cin >>s;
    string revs;
    for(int i=s.length()-1;i>=0;i--){
        revs.push_back(s[i]);
    }
    cout <<revs;
}