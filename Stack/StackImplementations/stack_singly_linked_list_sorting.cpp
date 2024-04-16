#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next = NULL;
};

struct Stack {
    Node* top = NULL;
};

bool isEmpty(Stack* s){
    return s->top  == NULL;
}

void push(int value, Stack* s){
    Node* temp = new Node;
    temp->data = value;
    temp->next = NULL;
    if(s->top!=NULL){
        temp->next = s->top;
        s->top = temp;
    }else{
        s->top = temp;
    }
}

int pop(Stack* s){
    if(isEmpty(s)){
        cout << "Stack is Empty ";
        return -1;
    }
    Node* temp = s->top;
    s->top = s->top->next;
    int value = temp->data;
    delete(temp);
    return value;
    
}

int peek(Stack* s){
    return s->top->data;
}

void display(Stack* s){
    vector<int> v;
    Node* temp = s->top;
    while(temp!=NULL){
        v.push_back(temp->data);
        temp = temp->next;
    }
    reverse(v.begin(),v.end());
    for(int x:v) cout << x<< " ";
    cout << "\n";
}

void pushSortedly(int value, Stack* sortedStack){
    if(sortedStack->top == NULL){
        push(value, sortedStack);
        return;
    }
    Stack * tempStack = new Stack;
    while(!isEmpty(sortedStack) && peek(sortedStack)>value){
        push(pop(sortedStack),tempStack);
        
    }
    push(value,sortedStack);
    while(!isEmpty(tempStack)){
        push(pop(tempStack),sortedStack);
    }
}

void sort_stack_looping(Stack * s){
    Stack* tmpstck = new Stack;
    while(!isEmpty(s)){
        push(pop(s),tmpstck);
    }
    while(!isEmpty(tmpstck)){
        pushSortedly(pop(tmpstck),s);
    }
}


void sort_stack_recursive(Stack * s){
    if(!isEmpty(s)){
        int top_val = pop(s);
        sort_stack_recursive(s);
        pushSortedly(top_val,s);
    }
}

int main(){
    Stack* s1 = new Stack;
    push(4,s1);
    push(3,s1);
    push(5,s1);
    push(9,s1);
    push(0,s1);
    cout << "Before Sorting :" << "\n";
    display(s1);
    cout << "After Sorting :" << "\n";
    sort_stack_recursive(s1);
    display(s1);
}