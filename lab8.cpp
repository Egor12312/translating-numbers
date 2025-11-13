/**************************
 * Автор: Устинов Егор    *
 **************************/
 
#include <iostream>
using namespace std;

int main() {
  int anArrayOfArabicNumbers[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  string anArrayOfRomanNumbers[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  string theTranslationString = "";
  int number, loopIteration;

  cout << "Enter a number < 4000: ";
  cin >> number;

  while (number > 0) {
    for (loopIteration = 0; loopIteration < 13; ++loopIteration) {
      if (number >= anArrayOfArabicNumbers[loopIteration]) {
        theTranslationString += anArrayOfRomanNumbers[loopIteration]; 
        number -= anArrayOfArabicNumbers[loopIteration];
        break;
      }
    }
  }
  
  cout << theTranslationString;

  return 0;
}
