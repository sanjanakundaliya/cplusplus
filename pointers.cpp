#include <iostream>
using namespace std;
int main(){
    int x=4;
    int *p=&x;
    cout <<*p<<endl;
    int **pp=&p;
    cout << **pp;
}