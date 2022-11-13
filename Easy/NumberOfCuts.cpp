// Question Name : Total Number of Cuts

/** 
    You are given an array arr[] of n integers and an integer k, your task is find the total number of cuts 
    that you can make such that for each cut these two conditions are satisfied:
    
    -> A cut divides an array in two parts equal or unequal.
    -> Sum of the largest element in the left part and smallest element in the right part is greater than or equal to K.
    
    
    Input:
    n=3 , k=3
    arr[]={1,2,3}
    Output: 2
    Explanation:
    Two ways in which array is divided to satisfy above conditions are:
    {1} and {2,3} -> 1+2>=3(satisfies the condition)
    {1,2} and {3} -> 2+3>=3(satisfies the condition)
    
    Input:
    n=5 , k=5
    arr[]={1,2,3,4,5}
    Output: 3
    Explanation:
    {1,2} and {3,4,5} -> 2+3>=5 \ {1,2,3} and {4,5} -> 3+4>=5
    {1,2,3,4} and {5} -> 4+5>=5
    
**/

// Solution 1 : Brute force -> O(N*N)

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;


template<class T> using ordered_set = tree<T, null_type,  greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


#define int long long
#define INF INFINITY

void solve(){   
    int n,k; cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int mx,mn;
    int TotalCuts=0;
    for(int i=1;i<n;i++){
        mx = *max_element(arr.begin(),arr.begin()+i);
        mn = *min_element(arr.begin()+i,arr.end());

        if(mx+mn>=k) TotalCuts++;
    }

    cout<<TotalCuts<<endl;

    return;
}

signed main(){
    int tc; tc=1; 
    // cin>>tc;
    for(int i=1;i<=tc;i++){
        solve();
    }

    return 0;
}




// Solution 2 

