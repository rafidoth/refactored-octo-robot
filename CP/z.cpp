
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


lli mod(lli a, lli m){
    a %= m;
    if(a<0) a+= m;
    return a;
}

lli add(lli a, lli b, lli m) {
    a %= m;
    a += (b%m);
    return a >=m ? a - m : a;
}


lli sub(lli a, lli b, lli m) {
    a %= m;
    a -= (b%m);
    return a < 0  ? a + m : a;
}

int main(){
  	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cout << mod(5,12) << "\n";
    cout << mod(-5,12) << "\n";
    cout << mod(27,12) << "\n";


}
