#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int k, l, m, n;
  char input[80];
  //Char array for input 80 chars at most
  char output[80];
  //Char array for output 80 chars
  cout << "Enter a phrase to test if it is a palindrome." << endl;
  cin.getline(input, 80);
  cin.get();
  //Read in user's input which stores as input char array

  //for (m = 0, n = 0; m <= strlen(input); m++) {
  //if ((input[m] == ' ') || (ispunct(input[m] == true))) {
  //input[m].ignore;
  //}
  //}
  cout << input << endl;
  cout << output << endl;

  int i = strlen(input) - 1, j = 0;
  while (i >= 0) {
    output[j] = input[i];
    i--;
    j++;
  }
  
  for (k = 0, l = 0; k <= strlen(input); k++) {//for loop checking length of user's input
    if ((input[k] != ' ') && (ispunct(input[k] == false))) {//if loop checking if char is a letter
      output[k] = tolower(input[k]);
      //if it's a letter, make it lowercase
      input[k] = tolower(input[k]);
      l++;
      //Add 1 to L to move to the next character
    }
  }

  //for (int j = 0; len = strlen(input); j < len) j++ {
  //if (ispunct(input[i])) {
  //input.erase(i--, 1);
  //len = input.size();
  //}
  //}
  
  if (strcmp(input, output) == 0) {
    cout << "Palindrome" << endl;
  }
  else if (strcmp(input, output) != 0) {
    cout << "Not a Palindrome" << endl;
  }

  //cout << input << endl;
  //cout << output << endl;
  
  return 0;
}
