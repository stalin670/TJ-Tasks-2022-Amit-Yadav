## Problem Name : 'Number Of Cuts':
![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/QNumberOfCuts.png)

### Approach :

Here in this problem we've given an array and an integer K and we've to Cut
the array in two parts and then, the sum of maximum element from the left 
part and minimum form the right part is greater than K,
So we've to find such number cuts.

So I iterate through the array and for each index I search for the
maximum element from the left part by using inbuilt function in C++
that is *max_element and minimum element from right part using 
*min_element it again takes O(N) and finally if sum >= K then 
we increase the ans.

As we go through the outer loop for N values and 
inside we again doing such operation to find minimum element and
maximum element so it again acts as a loop.

The time complexity is O(N*N).

### Screanshot of Submitted Solution on LeatCode :

![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/SNumberOfCuts.png)





