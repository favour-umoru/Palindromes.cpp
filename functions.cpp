#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include<cmath>
#include<cstdlib>
#include "functions.h"

using namespace std;

void printUsageInfo(string Executable)
{
  // Displayed if no input strings were found at the command line.
    cout << " <<  Executable << " << << " ";
}

bool isPalindromeR(string Executable)
{
  bool isPalindromeR;
  // Determine using for loops if the string is a palindrome and it is case
  // sensitive and include spaces as characters
  // If the first and the last characters are the same then the string is a palindrome
  if(Executable[i] != Executable[argc-i]){
    isPalindromeR = false;
  }
  else {
    isPalindromeR = true;
  } 
  return isPalindromeR;
}
  
bool isPalindrome(string Executable, bool caseSensitive, bool removeSpaces)
{
  // Calls the flag functions to create the string that will be evaluated as a palindrome
  processString(Executable,caseSensitive,removeSpaces);
  
  // Call this function to determmine if the string is sa palindrome
  isPalindromeR(Executable);
  
  return bool;
}

string processString(string Executable, bool caseSensitive, bool removeSpaces)
{
  string returnString;
  char lowerConvert;
 
  //Use the isalnum function defied in 
  for (int i = 0; i < Executable.length() - 1; ++i) {
    if(caseSensitive == true)
    {
      lowerConvert=argv[i];
      // ????????????? Is this the right assignment for a function????
      returnString = putchar (tolower(lowerConvert));
    }
    // If the user wants their string evaluated with the space removed or not   
    if(removeSpaces == true){
      int j = 1;
      //Use the isalnum function defied in 
      if(isalnum(Executable[i]){
        returnString += Executable[i];
      }
      if(returnString[i] != ' '){
        returnString[j] = returnString[i];
        returnString = returnString[j];
        j++;
      }
    }
    elseif(removeSpaces != true){
        if(isalnum(Executable[i])
          returnString += Executable[i];
    }
  }
  // Check to see if the string is converted properly
  cout << returnString << endl;
  return returnString;
}
