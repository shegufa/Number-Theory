# Number of Divisors

Brute force technique would be just to create a for loop and check which numbers less than n, divides n. But, if the n is big enough or there are a lot of test cases, we obviously cannot follow Brute force technique.

* Firstly, there is a very basic rule for counting number of divisors in a non brute force way. We use the idea of prime factorization here.
If a number can be expressed in its prime factorized form like this:
n = p<sub>1</sub><sup>n<sub>1</sub></sup> * p<sub>2</sub><sup>n<sub>2</sub></sup> * p<sub>3</sub><sup>n<sub>3</sub></sup> * .....
its number of divisors would be (n1+1) * (n2+1) * (n3+1) * ....
So, for 12 = 2<sup>2</sup> * 3<sup>1</sup>, we can say, 12 has (2+1) * (1+1) = 6 divisors.
If we see, 12 has divisors 1,2,3,4,6,12.

The solution is implemented here: 

* The previous technique, though better than brute force, can also result in TLE. So, we follow different techniques for large numbers.
