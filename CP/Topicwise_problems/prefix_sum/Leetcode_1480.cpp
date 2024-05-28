class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> rSum(n);
        rSum[0] = nums[0];
        for(int i =1;i<n;i++){
            rSum[i] = rSum[i-1]+ nums[i];
        }
        return rSum;
    }
};
