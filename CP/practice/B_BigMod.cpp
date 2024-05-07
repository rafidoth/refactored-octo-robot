#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){

}

int binexp(int a, int b ,int m){
    if (b == 0){
        return 1;
    }
    long long res = binexp(a, b / 2,m);
    if (b % 2==1)
        return ((res%m)*(res%m)*(a%m))%m;
    else
        return ((res%m)*(res%m))%m; 
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int b,p,m;
    while(cin >> b >> p >> m){
        char blank;
        cin.get(blank);
        int B = b%m;
        cout << binexp(B,p,m)<< endl;
    }
}

