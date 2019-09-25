#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int k, l, m, n = 0;
  char input[80];
  //Char array for input 80 chars at most
  char output[80];
  //Char array for output 80 chars
  cout << "Enter a phrase to test if it is a palindrome." << endl;
  cin.getline(input, 80);
  cin.get();
  //Read in user's input which stores as input char array

  int i = strlen(input) - 1, j = 0;
  while (i >= 0) {
    output[j] = input[i];
    i--;
    j++;
  }

  while (k <= strlen(input)) {
    input[k] = tolower(input[k]);
  }
  
  while (l <= strlen(input)) {
    if (input[l] == ' ') {
      cout << "Space" << endl;
      l++;
    }
  }
  if (ispunct(input[l] == true)) {
    //input[l] = input[m];
    //output[m] = output[l];
    cout << "Punct" << endl;
  }
  cout << output << endl;
  
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
