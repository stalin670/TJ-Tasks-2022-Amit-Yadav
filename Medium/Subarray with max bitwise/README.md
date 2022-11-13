
## Problem Name : 'Subarray with max bitwise':
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




