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

int peek(Stack * stck){
    if(!isEmpty(stck)){
        return stck->arr[stck->top];
    }else{
        return NULL;
    }
}

int main(){
    struct Stack stack1;    
    push(&stack1, 10);
    push(&stack1, 20);
    push(&stack1, 30);
    push(&stack1, 40);
    cout << peek(&stack1)<<"\n";

}

