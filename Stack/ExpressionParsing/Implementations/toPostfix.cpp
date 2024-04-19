#inlclude<bits/stdc++.h>
using namespace std;

int prec(char ch){
    if(ch=='^'){
        return 3;
    }else if (ch=='/' | ch=='*'){
        return 2;
    }else if (ch=='+'| ch=='-'){
        return 1;
    }else{
        return -1;
    }
}

string toPostfix(string s){
    stack<char>st;
    string result;
    for(char x : s){
        if(x=='('){
            st.push(x);
        }else if(x==')'){
            while(st.top()!='('){
                result+= st.top();
                st.pop();
            }
            st.pop();
        }else if(x>='0' && x<='9'){
            result+=x;
        }else{
            // operator -> check precedence -> if prec equals check associativity
            if(st.empty() || st.top=='('){
                st.push(x);
            }
        }
    }
    return result;
}

int main(){
    string s;
    cin >> s;
    cout << toPostfix(s)<<endl;
}