# problem solving study

### Table of Contents
---
- Data Structures
- Mathematics
	+ [XOR Related](#xor-related)
- [Bitwise Manipulation](#bitwise-manipulation)
- [Subarray Handling](#subarray-handling)
	+ [Kadane's Algorithms](#kadanes-algorithm)
---


# Bitwise Manipulation
## XOR Related
*Properties of XOR*

- `0^0 = 1^1 = 0 and 1^0 = 0^1 = 1`
- similarly, anything XORed with 0 results that number it self :   `x^0 = x`
- anything XORed with itself results 0 : `x^x = 0`


### XOR in a range
Suppose, you're asked to find the xor of numbers starting from 0 to N. 
The bruteforce approach we can come up is to traverse the numbers from 0 to N and keep doin XOR.

```
int xorInRange(int n){
    int x = 0;
    for(int i =1;i<=n;i++){
        x ^= i;
    }
    return x;
}

```
But this can be improved. [Read About Improvement](https://www.geeksforgeeks.org/calculate-xor-1-n/)
```
Number Binary-Repr  XOR-from-1-to-n
1         1           [0001] 	 <----- getting 1
2        10           [0011]	 <----- getting n+1
3        11           [0000]  <----- We get a 0
4       100           [0100]  <----- Equals to n
5       101           [0001]	 <----- getting 1
6       110           [0111]	 <----- getting n+1
7       111           [0000]  <----- We get 0
8      1000           [1000]  <----- Equals to n
9      1001           [0001]  <----- getting 1
10     1010           [1011]	 <----- getting n+1
11     1011           [0000]  <------ We get 0
12     1100           [1100]  <------ Equals to n
```

So, if we do (n%4) then depending on the remainder we can say whats the XOR from 1 to n in O(1) time

```
int xorInRange(int n){
    if(n%4==0) return n ;
    else if(n%4 == 1) return 1;
    else if(n%4== 2) return n+1;
    else if(n%4== 3 ) return 0;
    else return -1;
}

```
Similiarly,[ xor in any range of l...r can  be calculated ](https://www.geeksforgeeks.org/find-xor-of-numbers-from-the-range-l-r/)

Related Problems
 
- [1734. Decode XORed Permutation](https://leetcode.com/problems/decode-xored-permutation/)


# Subarray Handling

## Kadane's Algorithm


**Usecase :**
You are given an array of elements that might contains some negative values and you have to find out the maximum sum which can be produced by any of the sub array built from the given array of elements.


```
Input : -2,-3,4,-1,-2,1,5,-3
Output : 7  (which can be produced from [4,-1,-2,1,5])
```  

1. *Bruteforce Approach*
	 - ![](README_২০২৪০৩২৮০০০০০৫৬৫৬.png)
```  

#include <algorithm>
#include<bits/stdc++.h> 
#include <climits>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

/* O(n^3) solution this can give TLE easily */
int maxSubarray(vector<int> nums){
    int n = nums.size();
    int sum = INT_MIN;
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum_now= 0;
            for(int k = i;k<=j;k++){
                sum_now += nums[k];
            }
            cout << sum_now << "\n";
            sum = max(sum, sum_now);
        }
    }

    return sum;
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i =0;i<n;i++){
        cin >> v[i];
    }

    cout << maxSubarray(v)<<"\n";
}

```

2. *Calculating cumulative sum / prefix sum approach*

In bruteforce approach we're calculating the sum of each possible sub array. This sum calculation can be reduced as when we are calculating sum for another subarray under one element we're just adding the next number to the previous sum. below figure showing for only an element 4.
+ ![](README_২০২৪০৩২৮০০০৬০২১৭৬.png)

```
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

/* solution of O(n^2) this also gives TLE in Leetcode */
int maxSubarray(vector<int> v){
    int n = v.size();
    int max_sum = INT_MIN;
    for(int i =0;i<n;i++){
        vector<int> pref_sum;
        int sum_now = 0;
        for(int j = i;j<n;j++){
            sum_now+= v[j];
            pref_sum.push_back(sum_now);
        }
        int m = pref_sum.size();

        /* for(int x: pref_sum) cout << x << " "; */
        cout << "\n";
        for(int k = 0;k<m;k++){
            max_sum = max(max_sum, pref_sum[k]);
        }
    }

    return max_sum;
}

int main(){
  	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i =0;i<n;i++){
        cin >> v[i];
    }

    cout << maxSubarray(v)<<"\n";
}

```

3. *The Kadane's Algorithm*

- Traversing from left to right
- add one element to the sum
- store the sum in maxSum if sum is greater
- Not taking any negative sum further it has no use so if sum is negative make it zero

```
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


/* TC of this solution is )(n) -> optimal one */
/* kadane algorithm */
int maxSubarray(vector<int> v){
    int msum = INT_MIN;
    int sum = 0;
    for(int i:v){
        sum+= i;
        msum = max(msum,sum);
        sum = max(sum,0);  
    }
    return msum;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i =0;i<n;i++){
        cin >> v[i];
    }

    cout << maxSubarray(v)<<"\n";
}

```