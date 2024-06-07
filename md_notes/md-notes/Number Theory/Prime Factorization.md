# why its enough to iterate from 2 to sqrt(n)
To get the prime factors what do we do?
Let's take a number 120. what's the first prime number which is its divisor, its 2 obviously. So, 2 will be counted as a prime factor of 120. Then we divide it with 2 and get 60. then again whats the first prime and again its 2. thus 2,2,2,3,5 are the prime factors  of 120.

now every time we are dividing the number with the first prime. Therefore a question arises that if we really need to iterate from 2 to N to get the first prime factor of a number? No, never. Because if a number is not a prime number then there must exist a prime factor less or equal to the square root of that number.
https://stackoverflow.com/questions/62544216/prime-factors-help-understand-the-use-of-square-root#:~:text=Every%20composite%20number%20has%20at,that%20a*b%20%3D%20n.


# Improvement of Sqrt(n) algorithm 
Suppose we have an even number n and in our algorithm we start from 2 and keep dividing the number with 2 until it gets divided by 2 perfectly. then when its not getting divided by 2 anymore, we start trying 3,4,5 ....  up to sqrt(n)

if we see here after dividing it by 2 will this number get divided by any even number in future?
let's see an example

trying with 2 : n= 120 -> n/2 = 60 -> n/2 = 30 -> n/2 = 15 (look at this position)
trying with 3 : 15/3 = 5
trying with 5 : 5/5 = 1 

after dividing by 2 and ended at 15 there is no chance it will be get divided by any even number in future so trying with 4,6,8..... is just waste of time. Therefore we can exclude them and try only odd numbers after getting the result of continuous division of 2. You can try taking other numbers for more clarity.