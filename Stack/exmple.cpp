#include<bits/stdc++.h>
using namespace std;
struct Emp{
    int id;
    string name;
    int sal;
};
struct Node{
    Emp e;
    Node *next;
};
Node *top = NULL;

bool isEmpty(){
    if(top==NULL)
        return true;
    else
        return false;
}
Emp peek(){
    return top->e;
}
void push(Emp e1){
    Node *newNode = new Node;
    newNode->e = e1;
    newNode->next = NULL;

    if(top==NULL){
        top = newNode;
        return;
    }
    newNode->next = top;
    top = newNode;
}


int main(){

    push({1,"Rahad",500});
    push({2,"Rashed",350});
    push({4,"Nayem",1500});
    push({3,"Mamun",147});
    cout<<peek().name<<endl;
    cout<<peek().name<<endl;
    return 0;
}
