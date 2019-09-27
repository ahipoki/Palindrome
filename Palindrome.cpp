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
  char temp[80];
  //Char array for removing punctuation and spaces
  int temp_index = 0;
  //Temp index value
  cout << "Enter a phrase to test if it is a palindrome." << endl;
  //Ask the user for a phrase
  cin.getline(input, 80);
  //Read in user's input which stores as input char array

  for (int i = 0; input[i]; i++) {//For the user's input
    if (input[i] != ' ') {//If the character is not a space
      if ((input[i] != '!') && (input[i] != '"') && (input[i] != '#') && (input[i] != '$') && (input[i] != '%') && (input[i] != '&') && (input[i] != '(') && (input[i] != ')') && (input[i] != '*') && (input[i] != '+') && (input[i] != '`') && (input[i] != '-') && (input[i] != '.') && (input[i] != '/') && (input[i] != ':') && (input[i] != ';') && (input[i] != '<') && (input[i] != '=') && (input[i] != '>') && (input[i] != '?') && (input[i] != '@') && (input[i] != '[') && (input[i] != ']' ) && (input[i] != '^') && (input[i] != '_') && (input[i] != '{') && (input[i] != '|') && (input[i] != '}') && (input[i] != '~') && (input[i] != ',') && (input[i] != '\\') && (input[i] != '\'')) {//And the character is not punctuation
	temp[temp_index++] = input[i];
	//Add the character to the temporary array
      }
    }
  }
  
  temp[temp_index] = '\0';
  //Add a null-terminator to the end of the temp array

  strcpy(input, temp);
  //Copy the temp array back to the input array

  while (k <= strlen(input)) {//While you're not at the end of the input
    input[k] = tolower(input[k]);
    //Make the character lowercase
    k++;
    //Move 1 character over
  }
  
  int i = strlen(input) - 1, j = 0;
  while (i >= 0) {//While you're not at the end of the array
    output[j] = input[i];
    i--;
    j++;
    //Reverse the array
  }
  
  if (strcmp(input, output) == 0) {//If it's a palindrome
    cout << "Palindrome" << endl;
    //Tell the user it's a palindrome
  }
  else if (strcmp(input, output) != 0) {//If it's not a palindrome
    cout << "Not a Palindrome" << endl;
    //Tell the user it's not a palindrome
  }

  cout << input << endl;
  cout << output << endl;
  
  return 0;
}
