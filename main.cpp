#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include<cmath>
#include<cstdlib>
#include "functions.h"

using namespace std;

int main(int argc, char* argv[]) {
  // Declarations
  string Executable = argv[0];
  
  // Set both to false as a default
  bool caseSensitive = false;
  bool removeSpaces = false;
  
 
  // Get input from the user using the command line which has been declared above
  // Get the flags form the user which will determine how the palindrome will be evaluated.
  // Assign the string gotton from the command line as the input from the user
  // If there is only the string passed with no additional flags, do the basics of the program
  // Display the Input into the command line.
  // Add the flags needed to assess if the string is a palindrome.
 
  // Call the first function to display in case no input strings were found at the command line.
  if(argc == 1)
  {
    printUsageInfo(Executable);
    return 0;
  }
  
  // Call the function to determine if it is a palindrome for each string in the function.
  // Function loops through, but first check if there is a flag
  for(int i = 0; i < argc; i++){
    Executable =  argv[1];
    
    // Assign the flags to strings so they can be compared to the first string in the character
    //After Executable has been assigned to the first string in the array, 
    // check to see if the only input is a flag case, if so then exit the program
    if(argc == 2 && (argv[1] == "-c" || argv[1] == "-s" || argv[1] == "-S" || argv[1] == "-C" 
                    || argv[1] == "-Sc" || argv[1] == "-Cs || argv[1] == "-cS" || argv[1] == "-sC"
                    || argv[1] == "-cs" || argv[1] == "-sc")
    {
      printUsageInfo(argv[0]);
      cout << "-c: turn on case sensitivity" << endl;
      cout << "-s: turn off ignoring spaces" << endl;
      return 0;
    }
    else {
       // Display what is in the array 
      cout << Executable << " " << endl;

      // If the case sensitive flag is called
      if(Executable == "-c" || Executable == "-C")
      {
        
      }
      // If the Space sensitive flag is called
      else if(Executable == "-s" || Executable == "-S")
      {
        
      }
      // I both space and Punctuation should be taken into account
      else if(Executable == "-Cs" || Executable == "-Sc"|| argv[1] == "-cs" || argv[1] == "-sc")
      {
        
      }
    }
      
    
  }
  return 0;
}
