## Here I've uploaded all Easy problems that I solved.

### Easy:
* [Power of 2](https://leetcode.com/problems/power-of-two/)
* [Negative-Positive Existential Crisis](https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/)
* [Are there common factors?](https://leetcode.com/problems/number-of-common-factors/)
* [69-Problems](https://leetcode.com/problems/maximum-69-number/)
* You are given an array **arr[]** of **n** integers and an integer **k**, your task is find the total number of cuts that you can make such that for each cut these two conditions are satisfied:
    * *A cut divides an array in two parts equal or unequal.*
    * *Sum of the largest element in the left part and smallest element in the right part is greater than or equal to K.*
    > EXAMPLE 1: \
    ***Input:*** \
    n=3 \
    k=3 \
    arr[]={1,2,3} \
    ***Output:*** \
    2 \
    ***Explanation:*** \
    Two ways in which array is divided to satisfy above conditions are: \
    {1} and {2,3} -> 1+2>=3(satisfies the condition) \
    {1,2} and {3} -> 2+3>=3(satisfies the condition) 

    > **EXAMPLE 2:** \
    ***Input:*** \
    n=5 \
    k=5 \
    arr[]={1,2,3,4,5} \
    ***Output:*** \
    3 \
    ***Explanation:*** \
    {1,2} and {3,4,5} -> 2+3>=5 \ 
    {1,2,3} and {4,5} -> 3+4>=5 \
    {1,2,3,4} and {5} -> 4+5>=5
