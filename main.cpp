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
  
  // Get input from the user using the command line which has been declared above
  // Get the flags form the user which will determine how the palindrome will be evaluated.
  // Assign the string gotton from the command line as the input from the user
  // If there is only the string passed with no additional flags, do the basics of the program
  // Display the Input into the command line.
  // Add the flags needed to assess if the string is a palindrome.
 
  // Call the first function to display the input into the command line
  printUsageInfo(argc, argv);
  
  // Call the function to determine if it is a palindrome.
  
  return 0;
}
