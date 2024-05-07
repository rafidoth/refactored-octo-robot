
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


bool isValid(string s){
   vector<char> stck;
   int n = s.size();

   
   for(int i =0;i<n;i++){
	   if((s[i] == ']'|| s[i] =='}' || s[i] == ')') && stck.empty()) return false;
       if(s[i]=='['|| s[i] =='(' || s[i]=='{'){
            stck.push_back(s[i]);
       }else{
			if(s[i] == ']' && stck.back() != '[') return false;
			if(s[i] == '}' && stck.back() != '{') return false;
			if(s[i] == ')' && stck.back() != '(') return false;
			stck.pop_back();
		}
    }
   return stck.empty();
}

void solve(){
    string str;
    cin >> str;
    if(isValid(str)) cout << "valid"<<endl;
    else cout << "not valid" << endl;
}

int main(){
  	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>> t;
    while(t--) solve();
}

