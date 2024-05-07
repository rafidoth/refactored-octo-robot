
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


void solve(){
    int h24;
    char ch;
    int m;
    cin >> h24 >> ch >> m;
    /* scanf("%d:%d",&h24,&m); */
    int h = h24 % 12;
    if(h<=9 && h!=0){
        cout << "0"<<h;
    }else if(h==0){
        cout << "12";
    }else{
        cout << h;
    }
    cout << ":";
    if(m<=9){
        cout << "0"<<m;
    }else{
        cout << m;
    }
    if(h24>=12){
        cout << " PM";
    }else{
        cout << " AM";
    }
    cout << "\n";
}


int main(){
  	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}
