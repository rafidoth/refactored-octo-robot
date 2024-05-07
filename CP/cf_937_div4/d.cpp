l
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


bool check(int n){
    if(n==0) return true;
    if(n%10 == 1 || n%10==0){
        return check(n/10);
    }else{
        return false;
    }
}
int arr[] = {10,11,100,101,110,111,1000, 1001,1010,1011,1100, 1101,1110,1111,10000,10001,10010,10011,10100, 10101,10110,10111, 11000,11001, 11010, 11011, 11100,11101,11110,11111,100000};
/* bool isPoss(int n){ */
/*     /1* cout << n << " "; *1/ */
/*     if(n==1) return true; */
/*     for(int i =0;i<31;i++){ */
/*         /1* cout << i<< " "; *1/ */
/*         if(check(arr[i])){ */
/*             if(n%arr[i]==0){ */
/*                 int x = n/arr[i]; */
/*                 /1* cout << x<< endl; *1/ */
/*                 return isPoss(x); */
/*             } */
/*         } */
/*     } */
/*     return false; */
/* } */



bool isPoss(int n){
    /* cout << n << " "; */
    if(n==1) return true;
    forLoop(0,n);
    return false;
}

void forLoop(int i,int n){
    if(i>=31) return;
    if(n%arr[i] == 0){
        return forLoop(i+1,n);
    }
}

void solve(){
    int n ;
    cin >> n;
    
    if(check(n)){
        cout << "YES"<<"\n";
        return;
    }

    if(isPoss(n)) cout << "YES" << "\n";
    else cout << "NO" << "\n";
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
