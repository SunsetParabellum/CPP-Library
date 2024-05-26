#include <iostream> // Header file library setup
#include <string>
#include <cmath> // Includes math functions
using namespace std; // Can use naming conventions from standard library
// This is a comment
/* This is a multi-line
comment*/
int main() {
// Printing output and receiving input
  cout << "Hello World! \n"; // Printing statements and new lines
  cout << "I am learning C++ \n";
  int number = 10;
  number = 5;
  int number2 = 15;
  cout << "The number is " << number << " and that's the number \n";
  int sum = number + number2; // Addition
  cout << sum << "\n";
  int x = 5, y = 6, z = 50; // Defining variables at same time in list form
  cout << x + y + z << "\n";
  int a, b, c;
  a = b = c = 50; // Can set variables to equal each other and constants
  cout << a + b + c << "\n";
  const float PI = 3.14;
  //  PI = 4; // Note the error under PI when uncommented, it cannot change
  // Const variables must be assigned value on same line as declaration
  cout << PI << "\n";
  cout << "Type a number: ";;
  cin >> x; // User input from keyboard
  cout << "Your number is: " << x << "\n"; // Display input

// Simple calculator
  int e, f;
  int efSum;
  cout << "Type a number: ";
  cin >> e;
  cout << "Type another number: ";
  cin >> f;
  sum = e + f;
  cout << "Sum is: " << sum << "\n";

// Data Types
  int Integer = 5; // Whole numbers without decimals
  float Float = 5.8; // Fractional numbers, sufficient for 6-7 decimal digits
  double Double = 5.98; // Fractional numbers, sufficient for 15 decimal digits. Better for calculations than float
  char Letter = 'D'; // Single character, letter, number, or ASCII value
  bool Boolean = true; // True or false statements
  string Text = "Text"; // Any string of text
  float f1 = 35e3; // Indicate the power of 10 with e
  double d1 = 12E4;
  cout << f1 << "\n";
  cout << d1 << "\n";
  bool isCodingFun = true;
  bool isCodingEasy = false;
  cout << isCodingFun ; // Outputs 1 (true)
  cout << isCodingEasy << "\n"; // Outputs 0 (false)
  char Grade = 'B', Result = '8';
  cout << Grade << "\n" << Result << "\n";

// Operators
  int g = 100 + 50; // Addition
  int sum1 = g;
  int sum2 = sum1 + 250;
  int sum3 = sum2 + sum2; // Addition of variables
  cout << sum3 << "\n";
  int difference = sum2 - sum1; // Subtraction
  cout << difference << "\n";
  int multiple = sum2 * sum1; // Multiplication
  cout << difference << "\n";
  int quotient = sum2 / sum1; // Division
  cout << quotient << "\n";
  int modulus = sum2 % sum1; // Returns remainder of division
  cout << modulus << "\n";
  int increment = ++sum2; // Increases value of variable by 1
  cout << sum2 << "\n";
  int decrement = --sum2; // Decreases value of variable by 1
  cout << sum2 << "\n";

// Assignment Operators
  // Not printing because it's basic enough not to
  x = 5; // x = 5
  x += 3; // x = x + 3
  x -= 3; // x = x -3
  x *= 3; // x = x * 3
  x /= 3; // x = x / 3
  x ^= 3; // x = x ^ 3
  x %= 3; // x = x % 3 (modulus)
  x &= 3; // x = x & 3 (and)
  x |= 3; // x = x | 3 (or)
  x >>= 3; // x = x >> 3 (shift right)
  x <<= 3; // x = x << 3 (shift left)

// Comparison Operators
  x = 5;
  y = 3;
  cout << (x > y); // returns 1 (true) because 5 is greater than 3
  cout << (x == y); // Equal to
  cout << (x != y); // Not equal
  cout << (x > y); // Greater than
  cout << (x < y); // Less than
  cout << (x >= y); // Greater than or equal to
  cout << (x <= y) << "\n"; // Less than or equal to

// Logical Operators
  x = 3;
  cout << (x < 5 && x < 10); // Returns true if both statements are true
  cout << (x < 5 || x < 4); // Returns true if one of the statements is true
  cout << !(x < 5 && x < 10) << "\n"; // Reverses result, returns false if result is true

// Strings
  // #include <string> This must be defined outside all blocks and classes or immediately within another namespace
  string greeting = "Hello"; // Create string variable
  cout << greeting << "\n";
  string firstName = "Orlando";
  string lastName = "Dabner";
  string fullName = firstName + " " + lastName; // String concatenation
  cout << fullName << "\n";
  fullName = firstName.append(lastName); // Alternate form of concatenation with appends
  cout << fullName << "\n";
  // + is used for addition and concatenation. Using + with a number and a string will cause an error.
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.length(); // Length of string, can also use txt.size() for the same effect under a different alias
  string ran = "12345";
  cout << ran[0]; // Allows access to characters inside string
  cout << ran[1]; // Outputs 2
  ran[0] = '0'; // Replaces 1 with 0
  cout << ran; // Outputs new string
  // Using "" inside strings causes errors. We can use \" to replace a double quote
  string ex = "This is a \"string\" of text."; // Can also use \' for single quote and \\ for backslash in text.
  // Use \n for a new line and \t for a new tab
  cout << "Type your first name: ";
  string userfName;
  cin >> firstName; // Get user input from keyboard, note cin considers a space as a terminating character. Can only store one word.
  cout << "Your name is: " << firstName;
  cout << "\n \n \n";
  string newName;
  cout << "Type your full name: \n";
  cin.ignore();
  getline (cin, newName);
  cout << "Your full name is: " << newName << "\n";
  // String namespace (using namespace std) can be omitted, but will be replaced with std:: for string and cout objects:
  std::string greeting1 = "Hello";
  std::cout << greeting1;

// Math
  cout << max(5, 10); // Finds max value of set
  cout << min(5, 10); // Finds min value of set
  cout << sqrt(64); // Square root
  cout << round(2.6); // Rounds number
  cout << log(2); // Finds log of number
  // Many more online

// Booleans
  // Used when something has one of two values, e.g. TRUE / FALSE
  // True returns 1, false returns 0
  // See lines from earlier on bool

// If, Else, Else If, Switch
  int Age = 25;
  int votingAge = 18;
  if (Age >= votingAge) {
    cout << "Can vote";
  } else if (Age == votingAge) {
    cout << "Can barely vote";
  } else {
    cout << "Cannot vote";
  }
  // Above is a short example of an if/else/else if/switch usecase.
  // If allows a block of code to be executed if a specified condition is true.
  // Else allows a block of code to be executed if the same condition is false.
  // Else if specifies a new condition to test if the first condition is false.
  // Switch specifies many alternative blocks of code to be executed.
  int time = 20;
  string result = (time < 18) ? "Good day." : "Good evening.";
  cout << result;
  int mode = 4;
  switch(mode) { // Checks different cases based on the result of a variable and then breaks out once it finds the match
    case 1:
      cout << "1";
      break;
    case 2:
      cout << "2";
      break;
    case 3:
      cout << "3";
      break;
    case 4:
      cout << "Correct Case";
      break;
  }
  // Can use default keyword as a case if there is no case match

// While Loops
  // Loops through a block of code as long as a specified condition is true
  int i = 5;
  while (i == 5) 
  {
    cout << i << "\n";
    ++i;
  }

// Do/While Loop 
  //Does something while another thing is true
  i = 0;
  do {
    cout << i << "\n";
    ++i;
  }
  while (i < 5);

// For Loop
  // First statement sets condition, second statement checks its own condition, third statement is applied after loop runs everytime
  for (i = 0; i < 5; ++i) {
    cout << i << "\n";
  }

// Nested Loop
  // Loop inside a loop, features inner and outer loop
  for (i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n"; // Executes 2 times
    for (int j = 1; j <= 3; ++j) {
      cout << " Inner: " << j << "\n"; //Executes 6 times (2*3)
    }
  }

// For-Each Loop
  // Loop through elements in an array or other data set.
  int Numbers[5] = {10, 20, 30, 40, 50};
  for (int k : Numbers) {
    cout << k << "\n";
  }

// Break and Continue
  // break; can be used to jump out of a loop as well as a switch statement
  // continue; breaks one iteration if a specified condition occurs and continues with the next iteration
  for (int l = 0; l < 10; l++) {
    if (l == 4) {
      continue;
    }
    cout << l << "\n";
  }
  // Can also use these in while loops

// Arrays
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars[0]; // Outputs Volvo as first in array
  cars[0] = "Ferrari"; // Changes value of specific element in reference to index number
  for (int n = 0; n < 4; n++) {
    cout << n << cars[n] << "\n"; // Looping through an array
  }
  string beans[] = {"Chickpeas", "Lentils", "Peas", "Pinto beans"}; // C++ will recognise size of an array
  int randomNumbers[]  = {1, 2, 3, 4, 5};
  cout << sizeof(randomNumbers); // Gives size of an array in bytes
  int getArrayLength = sizeof(randomNumbers) / sizeof(int); // Gives no. of elements of an array
  cout << getArrayLength << "\n";
  int newNumbers[5] = {10, 20, 30, 40, 50};
  for (int o = 0; o < sizeof(newNumbers) / sizeof(int); o++) {
    cout << newNumbers[o] << "\n";
  }
  string letters[2][4] = { // You can make multidimensional arrays! Great for collision checking
    { "A", "B", "C", "D"},
    { "E", "F", "G", "H"}
  };
  letters[0][0] = "Z"; // Changes element
  cout << letters[0][0]; // Outputs "Z"
  for (int p = 0; p < 2; p++) { // Looping through a multidimensional array requires one loop for each dimension
    for (int q = 0; q < 4; q++) {
      cout << letters[p][q] << "\n";
    }
  }

  string newLetters[2][2][2] = {
    {
      { "A", "B" },
      { "C", "D" }
    },
    {
      { "E", "F" },
      { "G", "H"}
    }
  };
  for (int r = 0; r < 2; r++) {
    for (int s = 0; s < 2; s++) {
      for (int t = 0; t < 2; t++) {
        cout << newLetters[r][s][t] << "\n";
      }
    }
  }

// Structures
  // Can contain many different data types, not just one
  struct {
    int myNum; // Member (int variable)
    string myString; // Member (string variable)
  } myStructure; // Structure variable
  // Assign values to members of Structure
  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";
  // Print members
  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  struct {
    string brand;
    string model;
    int year;
  } myCar1, myCar2; // We can add variables by separating them with a comma here
  // Put data into each structure
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
  cout << myCar1.brand << myCar1.model << myCar1.year;
  cout << myCar2.brand << myCar2.model << myCar2.year;
  struct myDataType { // Names the structure
    int newNum;
    string newString;
  };
  myDataType myVar; // Declares variable that uses the structure. Allows you to create variables with the preset structure anywhere in your program at any time
  // Example on using one structure to represent two cars
  struct game {
    string releasemonth;
    string platform;
    int year;
  };
  game TLOU;
  TLOU.releasemonth = "June";
  TLOU.platform = "PS3";
  TLOU.year = 2013;
  cout << TLOU.releasemonth << TLOU.platform << TLOU.year;

// References
  // Reference variable is a reference to an existing variable, and is created with the & operator:
  string food = "Pizza"; // Food variable
  string &meal = food; // Reference to food
  cout << food << "\n"; // Outputs pizza
  cout << meal << "\n"; // Outputs pizza
    // We can use & operator to get memory address of variable
  cout << &food; // Outputs something similar to 00AFF4EC
  return 0;

// Pointers
  
}