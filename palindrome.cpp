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
  char temp[sizeof input];
  //Temporary array to deal with punctuation and spaces
  int temp_index = 0;
  //Temporary int for the temp array
  cout << "Enter a phrase to test if it is a palindrome." << endl;
  //Tell the user to enter a phrase
  cin.getline(input, 80);
  //Get the user's input and store it in input array
  cin.get();
  //Prevent garbage from going in the array

  for (int i = 0; input[i]; i++) {//Go through the input array
    if (input[i] != ' ') {//If the char is not a space
      temp[temp_index++] = input[i]; 
      //Add the char to the temporary array
    }
  }
  
  temp[temp_index] = '\0';
  //Add a null-terminator to the temp array
  
  strcpy_s(input, sizeof(input), temp);
  //Copy the temporary array onto the input array
  
  for (int j = 0; input[j]; j++) {//Go through the input array w/o spaces
    if (ispunct(input) == false) {//If the char is not punctuation
      temp[temp_index++] = input[j]; 
      //Add the char to the temp array
    }
  }
  
  temp[temp_index] = '\0';
  //Add a null-terminator to the temp array
  
  strcpy_s(input, sizeof(input), temp);
  //Copy the temporary array onto the input array
  
  int i = strlen(input) - 1, j = 0;
  while (i >= 0) {//While loop for reversing the phrase
    output[j] = input[i];
    //Set the last one in the output array to the first one in the input array
    i--;
    //Move 1 forwards in the input array
    j++;
    //Move 1 back in the output array
  }

  while (k <= strlen(input)) {//While you you're still going through the input array
    input[k] = tolower(input[k]);
    //Set any characters in the array as a lowercase
  }
  
  if (strcmp(input, output) == 0) {//If the two arrays are equal
    cout << "Palindrome" << endl;
    //Tell the user that it's a palindrome
  }
  else if (strcmp(input, output) != 0) {//If the two arrays are not equal
    cout << "Not a Palindrome" << endl;
    //Tell the user that it's not a palindrome
  }

  //cout << input << endl;
  //cout << output << endl;
  
  return 0;
}
