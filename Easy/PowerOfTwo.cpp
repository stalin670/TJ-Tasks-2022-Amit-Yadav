// Question Name : Power of Two
/**
  Given an integer n, return true if it is a power of two. Otherwise, return false.
  An integer n is a power of two, if there exists an integer x such that n == 2x.

  Input: n = 1
  Output: true
  Explanation: 20 = 1
  
  Input: n = 16
  Output: true
  Explanation: 24 = 16
  
  Input: n = 3
  Output: false
**/

// Solution 1:

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;

        return (n==1 || n%2==0 && isPowerOfTwo(n/2));
    }
};

// Solution 2:

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0 && (n&(n-1))==0) return true;
        return false;
    }
};


