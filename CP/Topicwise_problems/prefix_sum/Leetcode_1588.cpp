#include<bits/stdc++.h>
using namespace std;




// O(n^2)
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n= arr.size();
        vector<long long int> pf(n);
        pf[0] = arr[0];
        for(int i =1;i<n;i++){
            pf[i] = pf[i-1] + arr[i];
        }
        long long int oddSum = pf[n-1];
        for(int i =3;i<=n;i+=2){
			int p = -1;
	        int q = i-1;
	        while(q<n){
	            if(p<=-1){
	                oddSum+=pf[q];
	            }else{
	                oddSum+= (pf[q]-pf[p]);
	            }
	            // cout << oddSum <<endl;
	            p++;
	            q++;
	        }
        }
	    cout << oddSum <<endl;
		return oddSum;
    }
};


int main(){
	Solution* s1 = new Solution();
	vector<int> arr = {1,4,2,5,3};
	s1->sumOddLengthSubarrays(arr);
}
