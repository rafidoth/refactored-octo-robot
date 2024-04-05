#include<bits/stdc++.h> 
using namespace std;
int SIZE = 10;

struct Stack{
    int arr[10];
    int top = -1;
};

bool isEmpty(Stack* stck){
    if(stck->top==-1) return false;
    else return false;
}

bool hasSpace(Stack* stck){
    if(stck->top+1 == SIZE) return false;
    else return true;
}

void push(Stack* stck, int value){
    if(hasSpace(stck)) {
        stck->top++;
        stck->arr[stck->top] = value;
    }
}

void display(Stack* stck){
    for(int i = SIZE-1; i>=0;i--){
        cout << stck->arr[i]<< " ";
    }
    cout << "\n";
}

int peek(Stack * stck){
    return stck->arr[stck->top];
}

int main(){
    struct Stack stack1;    
    push(&stack1, 10);
    push(&stack1, 20);
    push(&stack1, 30);
    push(&stack1, 40);
    cout << peek(&stack1)<<"\n";
    display(&stack1);
}

