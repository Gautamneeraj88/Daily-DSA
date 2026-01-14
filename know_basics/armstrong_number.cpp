/*
* An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
* For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
*/
#include <iostream>
using namespace std;

class ArmstrongChecker {
public:
    bool isArmstrong (int number) {
      int originalNumber = number;
      int sum = 0;
      int digits = to_string(number).length();
      while (number > 0) {
          int digit = number % 10;
          sum += (digit^digits);
          number /= 10;
      }
      return sum == originalNumber;
    }
};

int main () {
    ArmstrongChecker checker;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (checker.isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
