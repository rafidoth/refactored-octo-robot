#include<bits/stdc++.h>
using namespace std;



int main (){
	int n;
	cin >> n;
	vector<int>all(n);
	vector<int> s(n),d(n);
	for(int i =0;i<n;i++){
		cin >> all[i];
	}
	int left,right;
	left = 0;
	right = n-1;
	bool f=true;
	while(left<=right){
		if(all[left]>all[right]){
			if(f){
				s.push_back(all[left]);
				f = false;
			}else{
				d.push_back(all[left]);
				f = true;
			}
			left+=1;
		}else{
			if(f){
				s.push_back(all[right]);
				f = false;
			}else{
				d.push_back(all[right]);
				f = true;
			}		
			right-=1;
		}
		
	}	

	int sum = 0;
	for(int x:s){
		sum+=x;
	}
	cout << sum << " ";
	sum = 0;
	for(int x:d){
		sum+=x;
	}
	cout << sum <<endl;
}
