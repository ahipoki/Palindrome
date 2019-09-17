#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int k, l;
  char input[80];
  //Char array for input 80 chars at most
  char output[80];
  //Char array for output 80 chars
  cout << "Enter a phrase to test if it is a palindrome." << endl;
  cin.getline(input, 80);
  //Read in user's input which stores as input char array
  for (k = 0, l = 0; k <= strlen(input); k++) {//for loop checking length of user's input
    if (input[k] != ' ') {//if loop checking if char is a letter
      output[k] = tolower(input[k]);
      //if it's a letter, make it lowercase
      l++;
      //Add 1 to L to move to the next character
    }
  }
  int i = strlen(input) - 1, j = 0;
  while (i >= 0) {
    output[j] = input[i];
    i--;
    j++;
  }
  
  if (input == output) {
    cout << "Palindrome" << endl;
  }
  else if (input != output) {
    cout << "Testing" << endl;
  }

  cout << input << endl;
  cout << output << endl;
  
  return 0;
}
