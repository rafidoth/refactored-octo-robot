#include<bits/stdc++.h>
using namespace std;



int postfixEvaluation(string s){
    stack<int> stck;
    int sz = s.size();
    for(int i=0; i <sz; i++){
        if(s[i]>='0' && s[i] <='9'){
            stck.push(s[i]-'0');
        }else{
            int B = stck.top();
            stck.pop();
            int A = stck.top();
            stck.pop();
            if(s[i]=='+'){
                stck.push(A+B);
            }else if (s[i]=='-'){
                stck.push(A-B);
            }else if (s[i]=='*'){
                stck.push(A*B);
            }else if (s[i]=='/'){
                stck.push(A/B);
            }else if (s[i]=='^'){
                stck.push(pow(A,B));
            }
        }
    }
    return stck.top();
}

int main(){
    string s;
    cin >> s;
    cout << postfixEvaluation(s)<<endl;
}

//   342^+5*2/