
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

int crore = 10000000;
int lakh = 100000;
int thou = 1000;
int hundr = 100;


void banglaNumber(lli n){
    if(n== 0) return;
    if(n>=crore){
        lli c = n/crore;
        banglaNumber(c);
        cout<< " kuti";
        n %=crore;
    }
    if(n>=lakh){
        lli l = n/lakh;
        banglaNumber(l);
        cout << " lakh";
        n %=lakh;
    }
    if(n>=thou){
        lli t = n/thou;
        banglaNumber(t);
        cout << " hajar";
        n%= thou;
    }
    if(n>=hundr){
        lli h= n/hundr;
        banglaNumber(h);
        cout << " shata";
        n %= hundr;
    }

    if(n>0){
        cout <<" "<< n;
    }

}


int main(){
  	ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli n;
    int i = 1;
    while(cin>>n){
        cout << setw(4);
        cout << i<<".";
        i++;
        if(n==0) cout << " 0";
        banglaNumber(n);
        cout << "\n";
    }
}
