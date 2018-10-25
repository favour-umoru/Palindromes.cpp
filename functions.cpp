#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <vector>
#include<cmath>
#include<cstdlib>
#include "functions.h"

using namespace std;

void printUsageInfo(int argc, char* argv[])
{
  // Displayed if no input strings were found at the command line.
  if(argc == 1)
    cout << " << argv[0] << " << << " ";
}

bool isPalindromeR(int argc, char* argv[])
{
  bool isPalindromeR;
  // Determine using for loops if the string is a palindrome and it is case
  // sensitive and include spaces as characters
  for(int i = 1; i < argc; i++){
    // If the first and the last characters are the same then the string is a palindrome
    if(argv[i] != argv[argc-i]){
      isPalindromeR = false;
    }
    else {
      isPalindromeR = true;
    }
   }  
  return isPalindromeR;
}
  
bool isPalindrome(int argc, char* argv[], bool caseSensitive, bool spaceIgnore)
{
  
  
  return bool;
}




string toLower(int argc, char* argv[])
{
  string returnString;
  char lowerConvert;
  int i = 0;
  
  for (int i = 0; i < argc; ++i) {
    lowerConvert=argv[i];
    putchar (tolower(lowerConvert));
    returnString = lowerConvert;
  }
  
  
  return returnString;
}

string removePunctuation(int argc, char* argv[])
{
  string returnString;
  
  
  
  return returnString;
}
