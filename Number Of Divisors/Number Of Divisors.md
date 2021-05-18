# Number of Divisors

Brute force technique would be just to create a for loop and check which numbers less than n, divides n. But, if the n is big enough or there are a lot of test cases, we obviously cannot follow Brute force technique.

* Firstly, there is a very basic rule for counting number of divisors in a non brute force way. We use the idea of prime factorization here.[Idea for finding prime factors: https://github.com/shegufa/Number-Theory/blob/main/Prime%20Factors]
If a number can be expressed in its prime factorized form like this:
n = p<sub>1</sub><sup>a<sub>1</sub></sup> * p<sub>2</sub><sup>a<sub>2</sub></sup> * p<sub>3</sub><sup>a<sub>3</sub></sup> * .....
its number of divisors would be (a<sub>1</sub>+1) * (a<sub>2</sub>+1) * (a<sub>3</sub>+1) * ....
So, for 12 = 2<sup>2</sup> * 3<sup>1</sup>, we can say, 12 has (2+1) * (1+1) = 6 divisors.
If we see, 12 has divisors 1,2,3,4,6,12.

The solution is implemented here:  https://github.com/shegufa/Number-Theory/blob/main/Number%20Of%20Divisors/Number%20Of%20Divisors.cpp

Why is number of divisors calculated this way? and how this works? <br>
 i. Well, if a number d has to be a divisor of n, it cannot have any other primes as its own factors other than the prime factors of n. Also, the prime factors of d cannot have more powers than a<sub>i</sub>. Right? Right. <br>
 ii. So, d =  p<sub>1</sub><sup>b<sub>1</sub></sup> * p<sub>2</sub><sup>b<sub>2</sub></sup> * p<sub>3</sub><sup>b<sub>3</sub></sup> * .....  where 0 <= b<sub>i</sub> <= a<sub>i</sub> <br>
 iii. We can say, b<sub>i</sub> can be any number from 0 to a<sub>i</sub> : (a<sub>i</sub>+1) types. So, for every b<sub>i</sub>, we get a<sub>i</sub>+1 possible values, if we multiply all the possible number of values of each b<sub>i</sub>, we get total number of divisors. Let's try to understand with an example. <br>
 
 100 = 2<sup>2</sup> * 5<sup>2</sup> <br>
 So, the divisors of 100 can be like this: <br>
 
 i. 2<sup>0</sup> * 5<sup>0</sup> = 1 <br>
 ii. 2<sup>1</sup> * 5<sup>0</sup>  = 2 <br>
 iii. 2<sup>2</sup> * 5<sup>0</sup>  = 4 <br>
 
 iv. 2<sup>0</sup> * 5<sup>1</sup> = 5 <br>
 v. 2<sup>1</sup> * 5<sup>1</sup>  = 10 <br>
 vi. 2<sup>2</sup> * 5<sup>1</sup>  = 20 <br>
 
 vii. 2<sup>0</sup> * 5<sup>2</sup> = 25 <br>
 viii. 2<sup>1</sup> * 5<sup>2</sup>  = 50 <br>
 ix. 2<sup>2</sup> * 5<sup>2</sup>  = 100 <br>
 
 We can see, for each of (2+1) types of powers of 2, we get (2+1) types of powers of 5. Hence, number of divisors of 100 = (2+1)* (2+1) = 9.
 
* The previous technique, though better than brute force, can also result in TLE. So, we follow different approach for large numbers.
