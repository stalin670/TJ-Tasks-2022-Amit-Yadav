
## Problem Name : 'Minimum divison of groups':
![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/QDivideGroups.png)

### Approach :

This Problem is just similar to Minimum plateforms required problem.

So basically We've given Intervals and we've to find max number of intersection in 
intervals and that will be our answer.

So what I did, I store the arrival time of all train in one array
and departure time in another array and sort in non-decending order.
And then i took two pointer that point out on two arrays and iterating both
array together and cheaking arrival time each time ,
and if arrival time of that time is less than departure time of first index
than we increase number of plateforms by 1 and increase the counter of arrival array
and each time we maximize our ans to number of plateforms.

So we can call it two pointer Approach with greedy part.

The worst time complexity is O(N*N).

#### * Another Approach to solve to this Problem is Line Sweep Algorithm.
Line Sweep Algorithm is used to find the number of intersection in particular
range in O(N) time complexity.

### Screanshot of Submitted Solution on LeatCode :

![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/SDivideGroups.png)





