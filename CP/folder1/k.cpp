#include<bits/stdc++.h>
#include <string>
using namespace std;


char arr[200];


bool pallindrome(string str, int s, int e){
    if(s>=e) return true;
    if(str[s]==str[e]) return pallindrome(str,s+1, e-1);
    else return false;
}

bool mirrored(string &s,int lo, int hi){
    if(lo==s.length()|| hi==-1) return true;
    if(s[lo]==arr[s[hi]]){
        return mirrored(s, lo+1, hi-1);
    }else{
        return false;
    } 
}

int main(){
    arr['A'] = 'A';
    arr['E'] = '3';
    arr['H'] = 'H';
    arr['I'] = 'I';
    arr['J'] = 'L';
    arr['L'] = 'J';
    arr['M'] = 'M';
    arr['O'] = 'O';
    arr['S'] = '2';
    arr['T'] = 'T';
    arr['U'] = 'U';
    arr['V'] = 'V';
    arr['W'] = 'W';
    arr['X'] = 'X';
    arr['Y'] = 'Y';
    arr['Z'] = '5';
    arr['1'] = '1';
    arr['2'] = 'S';
    arr['3'] = 'E';
    arr['5'] = 'Z';
    arr['8'] = '8';
    string s;
    while(cin >> s){
        bool p = pallindrome(s, 0,s.length()-1);
        bool m = mirrored(s,0,s.length()-1);
        cout << s<<" -- ";
        if(!p&&!m) cout << "is not a palindrome.";
        else if(p&&!m) cout << "is a regular palindrome.";
        else if(!p&&m) cout << "is a mirrored string.";
        else if(p&&m) cout << "is a mirrored palindrome."; 
        cout << "\n"<<"\n";
    }    
}

