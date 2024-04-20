#include<bits/stdc++.h>
using namespace std;

int getPrec(char ch){
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
    string result = "";
    for(char x : s){
        cout << x <<" ";
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
            if(st.empty() || st.top()=='('){
                st.push(x);
            }else{
            // operator -> check precedence -> if prec equals check associativity
                int curr_prec = getPrec(x);
                if(curr_prec > getPrec(st.top())){
                    st.push(x);
                }else if(!st.empty() && curr_prec == getPrec(st.top()) && x=='^'){
                    st.push(x);
                }else{
                    while(!st.empty() && curr_prec <= getPrec(st.top())){
                        result+=st.top();
                        st.pop();

                    }
                    st.push(x);   
                }
            }
        }
    }
    
    while(!st.empty()){
        result+= st.top();
        st.pop();
    }
    return result;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    cout <<"postfix form : " << toPostfix(s)<<endl;
}