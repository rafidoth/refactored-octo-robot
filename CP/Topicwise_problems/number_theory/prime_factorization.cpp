#include<bits/stdc++.h>
using namespace std;




int main(){
    int n;
    cin >> n;
    vector<int> prime_facts;
    if(n==0){
        cout << 0 << endl;
        return 0;
    }

    for(int i=2;i*i <= n;i++){
        while(n%i==0){
            n/=i;
            prime_facts.push_back(i);
        }
    }

    if(n!=1){
        prime_facts.push_back(n);
    }
    for(int x: prime_facts){
        cout << x << " " ;
    }
    cout << endl;
}

