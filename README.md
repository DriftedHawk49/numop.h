# numop.h
A C++ Header File Containing Some Handy Functions to Help you out in Computing Results in operations using Integral Numbers.

## Use
1. It Can perform Several Functions on Integers.
2. All the functions are "All-Integer-Compatible" , ie, You can use int data type, long data type or long long data type for operations.Replace data type with int,long or long long , whatever you are using.
3. These functions come in handy when you're in middle of programming and you need them to compute something more important, so rather than making a function for that, use this. 

## Functions 
1. **number_of_digits** : For Counting Total Number of Digits in an Integer , function *"number_of_digits<data type> (*your number*)"* can be used , which returns Number of digits present in that number.

2. **ifpallin** : For checking whether a number is a pallindrome or not , use function *"ifpallin<data type> (*your number*)"* which returns 1 , if it is a pallindrome , else it returns 0 if it is not a pallindrome.

3. **dig** : For using individual digits of a number you enter in any of your operations, we have a function *"dig<data type> (*your number*)"* which returns a vector having all the digits in particular order. You can Easily Access & use them in your program.
       For Example , if your number is 5896 , then it'll return a int vector , containing 5 at index 0, 8 at index 1, 9 at            index 2, 6 at index 3.

4. **digrev** : For using digits of a number in reverse order, we have a function *"digrev<data type> (*your number*)"* , which returns a vector containg digits of your number in reverse order.
       For Example , if your number is 5896 , then it'll return a int vector , containing 5 at index 3, 8 at index 2, 9 at            index 1, 6 at index 0.

5. **maxdig** : For Returning maximum digit present in your number, We have a function *"maxdig<data type> (*your number*)"* which returns maximum digit present in the number.

6. **mindig** : For Returning minimum digit present in your number, We have a function *"mindig<data type> (*your number*)"* which returns minimum digit present in the number.

7. **bincal** : Function *"bincal<data type> (*your number*)"* will return a vector having the binary equivalent of that number , in that order. 
    

8. **oddeven** : To check whether a number is odd or even , we have a function *"oddeven<data type> (*your number*)"* which returns 1 if that number is odd , and 0 if that number is even.

9. **prime_check** : To check whether a number is prime or not , we have a function *"prime_check<data type> (*your number*)"* which will return 1 if it is a prime number , else it'll return 0. 


## Functions To be further Added or can be contributed For -  

1. Function to calculate BCD Equivalent of that Number
2. Function to calculate Hexadecimal Equivalent of that number
3. Function to return excess 3 Code of that number
4. Function to print all the prime numbers in a range.
5. Function to return Gray Code of that number.
6. Check Whether a Number is Armstrong Number
7. Return a vector containing Armstrong Numbers b/w a range.
8. Function Returning all the factors of a number in a vector.


## How To use these Files In your program ?

### FOR LINUX USERS

Paste this header file in your current working directory.
Open terminal in your current directory, let your filename be "myfile.cpp"

Execute this code - 
g++ myfile.cpp numop.cpp numop.h
./a.out


### For Windows Users

Whatever IDE you use (Except For TURBO C++ , These files won't work in Turbo C++)
Just include these files in your project whichever you are using ,
And make sure linking of files is turned on for these files. 
Then build project & it should Work :)




# Please Contribute By adding further Functions SO that We can grown this Library , YOu can add your own Features too If You feel they'll be convinient for our fellow programmers.
