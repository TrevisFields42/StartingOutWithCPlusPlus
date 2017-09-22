  // Code Author: Trevis J Fields.
  // Book: Starting Out With C++ Early Objects 7th Edition
  // Date: Friday 15th September 2017
  // Chapter 2 Introduction to C++

  // A well documented program
#include <iostream>
#include <string>

using namespace std;

int main()
{
  // Displaying text to the screen
  cout << "The following items were top sellers";
  cout << " during the month of June: ";
  cout << "\n_Computer games\n"; // uses \n to end the current line and begin printing on the next line
  cout << "_Coffee\n";
  cout << "_Aspirin\n";
  
  // Displaying a constants to the screen
  int apples;
  apples = 20;
  cout << "On Sunday we sold " << apples << " bushels of apples.\n";
  
  // Changing the variable in side the program
  apples = 15;
  cout << "On Monday we sold " << apples << " bushels of apples.\n";
  
  auto oranges = 30;
  cout << "We sold " << oranges << " bags of oranges.\n";
  
  // Different variable types
  int checking;
  unsigned int miles;
  long days;
  
  checking = 1100;
  miles = 3000;
  days = 365;
  
  cout << "We have made a long journy of " << miles << " miles.";
  cout << "\nOur checking account balance is $" << checking;
  cout << "\nAbout " << days << " days ago North Korea";
  cout << " launched a ballistic missle.\n";
  
  // Defining multiple variables in one statement
  int rooms = 26,
  		apts = 13,
  parking = 52;
  
  cout << "Myers Park APT's has " << apts << " Apartments\n";
  cout << "with " << rooms << " rooms and " << parking;
  cout << " parking spaces.\n";
  
  // Using the char data type to store a number and display a letter
  char letter;
  letter = 42;
  cout << letter << endl;
  
  letter =  90;
  cout << letter << endl;
  
  // Using char data type to store and display a letter
  letter = 'A';
  cout << letter << endl;
  
  letter = 'B';
  cout << letter << endl;
  
  // Displaying a string
  string stateName;
  
  stateName = "California";
  cout << "The state that i live in is " << stateName << endl;
  
  // Using a floating point data type, float and double
  float gpa = 3.2;
  double credits = 70.0;
  cout << "Your GPA is " << gpa << " points.\n";
  cout << "The total credits you have is " << credits << ".\n";
  
  // Using a bool to test for true and false
  
  bool boolValue;
  boolValue = false;
  
  cout << boolValue << endl;
  
  boolValue = true;
  cout << boolValue << endl;
  
  
  // Using sizeof() to determine the size of a variable type
  
  long double grapes;
  cout << "The size of an integer is " << sizeof(int);
  cout << " bytes.\n";
  cout << "The size of a long integer is " << sizeof(long);
  cout << " bytes.\n";
  cout << "A bag of grapes can be eaten in " << sizeof(grapes);
  cout << " bytes.\n";
  
  // Using variable initialization
  string month = "September";
  int year,
  age = 25;
  
  year = 2017; // Now age is assigned a value
  
  cout << "In the year " << year << " month of " << month << " i will be " << age << " years of age.\n";
  
  // Understanding the scope of a program
  cout << "You can not call for a variable before it has been declared for use by the program.\n";
  
  // Using Arithmetic operators
  double payRate = 10.96,
  overTimePay = 0.00,
  regularHours = 20.00,
  overTimeHours = 0.00,
  overTimeWages,
  regularWages,
  totalWages;
  
  // Calculate regular wages
  regularWages = payRate * regularHours;
  
  // Calculate overtime wages
  overTimeWages = overTimePay * overTimeHours;
  
  // Calculate total wages
  totalWages = regularWages + overTimeWages;
  
  // Display total wages
  cout << "Wages for this week are $" << totalWages << endl;
  
  // Using comments *Single line and **Multi-line comments
  //* This is a single line comment
  /*
	This is a multi-line comment
	*/
  
  // Tying everything togeter to print a picture
  cout << "\n\n";
  cout << "     O   O   \n";
  cout << "       o     \n";
  cout << "     (___)   \n";
  cout << "\n\n";
  cout << "     ^   ^   \n";
  cout << "       *     \n";
  cout << "     \\___/   \n";
  cout << "\n\n";
  cout << "     ^   ^   \n";
  cout << "     v   v   \n";
  cout << "       :     \n";
  cout << "     \\UUU/   \n";
  return 0;
}
