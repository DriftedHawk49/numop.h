# numop.h
A Header File Containing Some Handy Functions to Help you out in Computing Results in operations using Integral Numbers .

1. It Can perform Several Functions on Integers you give in input.
2. All the functions are "All-Integer-Compatible" , ie, You can use int data type, long data type or long long data type for      operations.
3. The Functions it includes are - 

    a) For Counting Total Number of Digits in an Integer , function "number_of_digits(*your number*)" can be used , which              returns Number of digits present in that number returns.

b) For checking whether a number is a pallindrome or not , use function "ifpallin(*your number*)" which returns 1 , if it          is a pallindrome , else it returns 0 if it is not a pallindrome.

c) For using individual digits of a number you enter in any of your operations, we have a function "dig(*your number*)"            which returns a vector having all the digits in particular order. You can Easily Access & use them in your program.
       For Example , if your number is 5896 , then it'll return a int vector , containing 5 at index 0, 8 at index 1, 9 at            index 2, 6 at index 3.

d) For using digits of a number in reverse order, we have a function "digrev(*your number*)" , which returns a vector              containg digits of your number in reverse order.
       For Example , if your number is 5896 , then it'll return a int vector , containing 5 at index 3, 8 at index 2, 9 at            index 1, 6 at index 0.

e) For Returning maximum digit present in your number, We have a function "maxdig(*your number*)" which returns maximum            digit present in the number.

f) For Returning minimum digit present in your number, We have a function "mindig(*your number*)" which returns minimum            digit present in the number.

g) Function "bincal(*your number*)" will return a vector having the binary equivalent of that number , in that order.
    

h) To check whether a number is odd or even , we have a function "oddeven(*your number*)" which returns 1 if that number is        odd , and 0 if that number is 0.

i) To check whether a number is prime or not , we have a function "prime_check(*your number*)" which will return 1 if it is         a prime number , else it'll return 0. 

# Functions To be further Added or can be contributed For Addition -  

1. Function to calculate BCD Equivalent of that Number
2. Function to calculate Hexadecimal Equivalent of that number
3. Function to return excess 3 Code of that number
4. Function to print all the prime numbers in a range.
5. Function to return Gray Code of that number.
6. Check Whether a Number is Armstrong Number
7. Return a vector containing Armstrong Numbers b/w a range.
8. Function Returning all the factors of a number in a vector.
