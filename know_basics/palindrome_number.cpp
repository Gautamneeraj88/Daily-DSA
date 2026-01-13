#include <iostream>
using namespace std;

/**
 * A palindrome is a number that reads the same backward as forward. For
 * example, 121, 1331, and 4554 are palindromes because they remain the same
 * when their digits are reversed.
 */

class Solution {
public:
  bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
      int lastDigit = number % 10;
      reversedNumber = reversedNumber * 10 + lastDigit;
      number /= 10;
    }
    return originalNumber == reversedNumber;
  }
};

int main() {
  Solution sol;

  int number;
  cout << "Enter Number: ";
  cin >> number;

  if (sol.isPalindrome(number)) {
    cout << number << " is a palindrome." << endl;
  } else {
    cout << number << " is not a palindrome." << endl;
  }

  return 0;
}
