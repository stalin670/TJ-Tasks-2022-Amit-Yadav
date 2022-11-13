// Question Name : Divide Intervals Into Minimum Number of Groups

/**
    You are given a 2D integer array intervals where intervals[i] = [lefti, righti] represents the inclusive 
    interval [lefti, righti].
    You have to divide the intervals into one or more groups such that each interval is in exactly one group, 
    and no two intervals that are in the same group intersect each other.

    Return the minimum number of groups you need to make.

    Two intervals intersect if there is at least one common number between them. For example, the intervals [1, 5] and [5, 8] intersect.
    
    
    Input: intervals = [[5,10],[6,8],[1,5],[2,3],[1,10]]
    Output: 3
    Explanation: We can divide the intervals into the following groups:
    - Group 1: [1, 5], [6, 8].
    - Group 2: [2, 3], [5, 10].
    - Group 3: [1, 10].
    It can be proven that it is not possible to divide the intervals into fewer than 3 groups.
    
    Input: intervals = [[1,3],[5,6],[8,10],[11,13]]
    Output: 1
    Explanation: None of the intervals overlap, so we can put all of them in one group.
    
**/


// Solution Code 

class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> first,second;
        int n=intervals.size();
        for(int i=0;i<n;i++){
            first.push_back(intervals[i][0]);
            second.push_back(intervals[i][1]);
        }
        sort(first.begin(),first.end());
        sort(second.begin(),second.end());

        int ans=1,currLive=1;
        int i=1,j=0;

        while(i<n && j<n){
            if(first[i]<=second[j]){
                currLive++;
                i++;
            }
            else {
                currLive--;
                j++;
            }
            ans=max(ans,currLive);
        }

        return ans;
    }
};

