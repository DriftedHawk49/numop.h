#ifndef _numop_h
#define _numop_h

#include<vector>
//include Your Functions Here - 

template<typename t>
int number_of_digits(t);//--------For Counting Digits in a integer type (done)

template<typename t>
int ifpallin(t);// For Checking an integer for a Pallindrome (done)

template<typename t>
std::vector<int> dig(t);//Returns a Vector Containg all the individual digits of that integer in that order(done)

template<typename t>
std::vector<int> digrev(t);//Returns a Vector Containg all the individual digits of that integer in reverse order(done)

template<typename t>
int maxdig(t);// Returns the maximum digit present in that number

template<typename t>
int mindig(t); // returns the minimum digit in given number.

template<typename t>
std::vector<int> bincal(t);// returns a vector binary number equivalent of input number

template<typename t>
int oddeven(t);// returns whether a odd number or even.

template<typename t>
int prime_check(t);// Returns whether a prime number or not.

#endif
