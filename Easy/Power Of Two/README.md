## Problem Name : 'Power Of Two':

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
