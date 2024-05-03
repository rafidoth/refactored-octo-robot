#include<bits/stdc++.h>
using namespace std;



void reverseStack(stack<int> &st){
    if(st.empty()) return;
    int popped_ele = st.top();
    if(!st.empty()){
        st.pop();
        reverse(st);
        vector<int> v;
        while(!st.empty()){
            v.push(st.top());
            v.pop();
        }
        st.push(popped_ele);
    }
    

}

int main(){
    stack<int> stck;
    stck.push(10);
    stck.push(4);
    stck.push(5);
    stck.push(8);
    reverseStack(stck);
}