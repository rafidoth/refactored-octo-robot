
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void answer() {
    string s;
    int a=0;
    int b= 0;
    for(char x:s){
        cout << x <<endl;

        if(x=='A') a++;
        else b++;
    }
    if(a>b){
        cout << "A"<<endl;
    }else{
        cout << "B" <<endl;
    }

}




int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    answer();
  }
}
