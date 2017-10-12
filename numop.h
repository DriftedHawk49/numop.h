#ifndef _numop_h
#define _numop_h

#include<vector>
//include Your Functions Here - 

int number_of_digits(int);//--------For Counting Digits in a integer type (done)
int number_of_digits(long);//------For Counting Digits in a Long Integer (done)
int number_of_digits(long long);//-----For COunting Number of digits in a Long Long integer (done)

int ifpallin(int);// For Checking an integer for a Pallindrome (done)
int ifpallin(long);// For Checking a long integer for a Pallindrome (done)
int ifpallin(long long);// For Checking a long long integer for a Pallindrome (done)

std::vector<int> dig(int);//Returns a Vector Containg all the individual digits of that integer in that order(done)
std::vector<int> dig(long);//Returns a Vector Containg all the individual digits of that long integer in that order (done)
std::vector<int> dig(long long);//Returns a Vector Containg all the individual digits of that long long integer in that order(done)

std::vector<int> digrev(int);//Returns a Vector Containg all the individual digits of that integer in reverse order(done)
std::vector<int> digrev(long);//Returns a Vector Containg all the individual digits of that long integer in reverse order(done)
std::vector<int> digrev(long long);//Returns a Vector Containg all the individual digits of that long long integer in reverse order(done)

int maxdig(int);// Returns the maximum digit present in that number
int maxdig(long);
int maxdig(long long);

int mindig(int);
int mindig(long);
int mindig(long long);

std::vector<int> bincal(int);//done
std::vector<int> bincal(long);//done
std::vector<int> bincal(long long);//done

int oddeven(int);//done
int oddeven(long);//done
int oddeven(long long);//done

int prime_check(int);//done
int prime_check(long);//done
int prime_check(long long);//done

#endif