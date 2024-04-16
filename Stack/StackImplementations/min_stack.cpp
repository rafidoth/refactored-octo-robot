#include<bits/stdc++.h>
using namespace std;


class MinStack{
    public :
        stack<int> working_stack;
        stack<int> min_stack;

        void push(int value){
            if(working_stack.empty() && min_stack.empty()){
                working_stack.push(value);
                min_stack.push(value);
                return;
            }

            working_stack.push(value);
            if( value < min_stack.top()) min_stack.push(value);
            else min_stack.push(min_stack.top());
        }

        void pop(){
            if(!working_stack.empty() && !min_stack.empty()){
                min_stack.pop();
                working_stack.pop();
            }
        }

        int getMin(){
            return min_stack.top();
        }

        int top(){
            return working_stack.top();
        }

};
int main(){
    MinStack ms;
    ms.push(3);
    ms.push(-2);
    ms.push(-1);
    ms.push(4);
    cout << ms.getMin()<<"\n";
    ms.pop();
    cout << ms.top() << "\n";
    ms.pop();
    cout << ms.getMin() << "\n";
    
}