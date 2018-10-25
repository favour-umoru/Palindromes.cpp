#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include <vector>
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
  
bool isPalindrome(string Executable, bool caseSensitive, bool spaceIgnore)
{
  
  
  return bool;
}




string toLower(string Executable)
{
  string returnString;
  char lowerConvert;
  int i = 0;
  
  for (int i = 0; i < Executable.length() - 1; ++i) {
    lowerConvert=argv[i];
    // ????????????? Is this the right assignment for a function????
    returnString = putchar (tolower(lowerConvert));
  } 
  return returnString;
}

string removePunctuation(string Executable, bool removeSpaces)
{
  string returnString;
  
  //Use the isalnum function defied in 
  for (int i = 0; i < Executable.length() - 1; ++i) {
    if(isalnum(Executable[i]){
      returnString += Executable[i];
    }
    // If the user wants their string evaluated with the space removed or not   
    if(removeSpaces == true){
      int j = 1;
       if(Executable[i] != ' '){
         Executable[j] = Executable[i];
           j++;
       }
    }
    else{
      
    }
  }
  // Check to see if the string is converted properly
  cout << returnString << endl;
  return returnString;
}
