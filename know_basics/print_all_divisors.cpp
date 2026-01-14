/*
* A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.
  * For example, the divisors of 12 are 1, 2, 3, 4, 6, and 12 because each of these numbers divides 12 evenly.
*/
#include <iostream>
using namespace std;

class DivisorPrinter {
public:
    void bruteForcePrintDivisors(int number) {
      cout << "Divisors of " << number << " are: ";
      for (int i = 1; i <= number; i++) {
          if (number % i == 0) {
              cout << i << " ";
          }
      }
      cout << endl;
    }

      void optimizedPrintDivisors(int number) {
        cout << "Divisors of " << number << " are: ";
        for (int i = 1; i * i <= number; i++) {
          if (number % i == 0) {
              cout << i << " ";
              if (i != number / i) {
                  cout << number / i << " ";
              }
          }
        }
        cout << endl;
      }
};


int main () {
    DivisorPrinter printer;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    // Using brute-force method
    printer.bruteForcePrintDivisors(number);
    // Using optimized method
    printer.optimizedPrintDivisors(number);
    return 0;
}
