// Question Name : 69-Problems

/**
  You are given a positive integer num consisting only of digits 6 and 9.
  Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).
  
  Input: num = 9669
  Output: 9969
  Explanation: 
  Changing the first digit results in 6669.
  Changing the second digit results in 9969.
  Changing the third digit results in 9699.
  Changing the fourth digit results in 9666.
  The maximum number is 9969.
  
  Input: num = 9996
  Output: 9999
  Explanation: Changing the last digit 6 to 9 results in the maximum number.
  
  Input: num = 9999
  Output: 9999
  Explanation: It is better not to apply any change.
**/

// Solution Code

class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='6') {
                s[i]='9';
                break;
            }
        }

        return stoi(s);
    }
};

