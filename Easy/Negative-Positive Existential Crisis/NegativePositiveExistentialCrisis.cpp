// Question Name : Negative-Positive Existential Crisis

/**
  Given an integer array nums that does not contain any zeros, find the largest positive integer k such 
  that -k also exists in the array.
  Return the positive integer k. If there is no such integer, return -1.
  
  Input: nums = [-1,2,-3,3]
  Output: 3
  Explanation: 3 is the only valid k we can find in the array.
  
  Input: nums = [-1,10,6,7,-7,1]
  Output: 7
  Explanation: Both 1 and 7 have their corresponding negative values in the array. 7 has a larger value.
  
  Input: nums = [-10,8,6,7,-2,-3]
  Output: -1
  Explanation: There is no a single valid k, we return -1.
**/


class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<bool> pos(1002,0),neg(1002,0);
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0) neg[abs(nums[i])]=1;
            else pos[abs(nums[i])]=1;
        }
        int ans=-1;
        for(int i=0;i<1001;i++){
            if(pos[i] && neg[i]){
                ans=i;
            }
        }
        return ans;
    }
};
