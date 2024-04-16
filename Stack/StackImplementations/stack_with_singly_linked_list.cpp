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


int main(){
    struct Stack s1;
    cout << pop(&s1) << "\n";
    push(10, &s1);
    push(20, &s1);
    push(30, &s1);
    display(&s1);
    cout << pop(&s1) << "\n";
    cout << peek(&s1) << "\n";
    display(&s1);
}