// Question Name : Number of Common Factors
/**
  Given two positive integers a and b, return the number of common factors of a and b.
  An integer x is a common factor of a and b if x divides both a and b.
  
  Input: a = 12, b = 6
  Output: 4
  Explanation: The common factors of 12 and 6 are 1, 2, 3, 6.
  
  Input: a = 12, b = 6
  Output: 4
  Explanation: The common factors of 12 and 6 are 1, 2, 3, 6.
**/

// Solution Code 

class Solution {
public:
    int commonFactors(int a, int b) {
        int ans=1;
        for(int i=2;i<=min(a,b);i++){
            if(a%i==0 && b%i==0) ans++;
        }
        return ans;
    }
};
