# TJ-Tasks-2022-Amit-Yadav
This is an task that I've done in order to join TechnoJam club.

<hr/>
<br/>
<hr/>

## I already made README.md file separately for particular question that i solved, But I also merge all of them here for better lookup. 

<hr/>
<br/>

## Easy Problems :

<br/>

## Problem Name 1 -> [Power of 2](https://leetcode.com/problems/power-of-two/) :

![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/QpowerOf2.png)

I've done this problem by two ways :

### Approach 1: (Recursive way)

In the Recursive way, everytime I call the same funtion for 
N/2 and check if it is divisible by 2 or not until it falls on 
condition to N==1, If in between it is not divisible by 2 then we return false.

The time complexity is ~ O(Log(N/2))


### Approach 2: (Brute Force)
In this Approach, I use mathematical logic of bits, As we know
every number that is a power of 2 have all its bits 0 except for the
MSB bit that is 1, and the number before N that is N-1 have
all bits equal to 1 so if we take AND(&) of N and N-1 that will
give us 0 if N is a power of 2.

The time complexity is O(1);

### Screanshot of Submitted Solution on LeatCode :

![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/SpowerOf2.png)

<hr/>
<br/>
<br/>
<hr/>

## Problem Name 2 -> [Negative-Positive Existential Crisis](https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/) :
![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/QPosNeg.png)

### Approach :

Here we have to check if some number is exist in both form Negative
as well as Positive form in the array , the maximum number we
have to output.

I've taken two boolean array Pos and Neg and Iterating through all the 
the elements in the array and making true in pos and neg of that element
which exist in given array,
Finally I iterate from 0 to size-1 to check in pos and neg array
if for the same index both value in pos and neg should be true.

That's how I output the maximum elements in the array.

Becoz the constraints are low ,


The time complexity is O(N).

### Screanshot of Submitted Solution on LeatCode :

![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/SPosNeg.png)

<hr/>
<br/>
<br/>
<hr/>


## Problem Name 3 -> [Are there common factors?](https://leetcode.com/problems/number-of-common-factors/) :
![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/QCommonFactors.png)

### Approach (Brute Force):

In this problem we've given 2 numbers a and b and we've to 
output the total number of common factors of a and b.

So basically the approach that i used here is, the maximum number
that can be a common factor is min(a,b), So I iterate through 0 to
min(a,b) and checking for each number that divides both a and b
and I cnt each of them.

The constraints are low so,

The time complexity is O(N).

### Screanshot of Submitted Solution on LeatCode :

![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/SCommonFactor.png)

<hr/>
<br/>
<br/>
<hr/>

## Problem Name 4 -> [69-Problems](https://leetcode.com/problems/maximum-69-number/) :
![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/Q69.png)

### Approach (Brute Force):

We have given one number of digit consisting only 6 and 9 and
we have to return the maximum num by changing its only one digit from
6 to 9 or 9 to 6.

So basically we already know that we only need to change 
first comming 6 into 9 when we iterating through the number 
from its first digit to last,

First I convert the number into string and then iterating through
all the digits and checking if there is any 6 then i change it to 9 and 
break(comes out of the loop).


The time complexity is O(N).

### Screanshot of Submitted Solution on LeatCode :

![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/S69.png)


<hr/>
<br/>
<br/>
<hr/>

## Problem Name 5 : 'Number Of Cuts':
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

<hr/>
<br/>
<br/>
<br/>
<hr/>

## Medium Problems :
<br/>

## Problem Name 1 -> [Subarray with max bitwise](https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/) :
![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/QSubArrayMaxBitwise.png)

### Approach :

Here we've given an array and we've to return the length
of the Subarray with max bitwise AND.

As I go through the problem I realise that bitwise AND of 
any two number is always less than maximum of that two numbers.

So now I know that maximum bitwise is the maximum element present in
the array , so I iterate through the array and find the max element.
Now I find the max Subarray of repeating that maximum element in the array
by iterating in the array.

The time complexity is O(N).

### Screanshot of Submitted Solution on LeatCode :

![](https://github.com/Tyrant670/TJ-Tasks-2022-Amit-Yadav/blob/main/Images/SSubArrayMaxBitwise.png)


<hr/>
<br/>
<br/>
<hr/>

## Problem Name 2 -> [Minimum divison of groups](https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/) :
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

