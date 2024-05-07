#include<bits/stdc++.h>
using namespace std;


int Mex(vector<int>& freq, int pi){
    freq[pi]=1;
    for(int x: freq) cout << x <<" ";
    cout << endl;
    for(int i = 0;i<(int)freq.size();i++) if(freq[i]==0) return i;
    return -1;
}

int main(){
    vector<int> v = {5,4,0,2,6,1};
    vector<int> freq(7);
    for(int x:freq) cout << x << " ";
    cout << endl;
    cout << Mex(freq,1) << endl;
}
