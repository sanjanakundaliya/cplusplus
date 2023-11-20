#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(9);
    st.push(12);
    st.push(34);
    st.push(54);
    st.pop();
    while(!st.empty()){
        cout <<st.top()<<" ";
        st.pop();
    }
}