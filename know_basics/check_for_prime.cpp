/*
 *A prime number is a number that is only divisible by 1 and itself and the
 *total number of divisors is 2.. For example, 7 is a prime number because it is
 *only divisible by 1 and 7.
 */

#include <cmath>
#include <iostream>
using namespace std;

class PrimeChecker {
public:
  bool bruteforceIsPrime(int number) {
    if (number <= 1)
      return false; // 0 and 1 are not prime numbers
    int divisorCount = 0;
    for (int i = 1; i <= number; i++) {
      if (number % i == 0) {
        divisorCount++;
      }
    }
    return divisorCount == 2;
  }

  bool optimizedIsPrime(int n) {
    int cnt = 0; // Initialize a counter variable to count the number of factors

    // Loop through numbers from 1 to the square root of n
    for (int i = 1; i <= sqrt(n); i++) {
      if (n % i == 0) {
        cnt++; // If n is divisible by i, increment the counter

        // If n is not a perfect square, count its reciprocal factor
        if (n / i != i) {
          cnt++;
        }
      }
    }

    // If the number of factors is exactly 2 (1 and the number itself), it's
    // prime
    if (cnt == 2) {
      return true;
    } else {
      return false; // If not, it's not a prime number
    }
  };
};

  int main() {
    PrimeChecker checker;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    // Using brute-force method
    cout << "brute-force method............" << endl;
    if (checker.bruteforceIsPrime(number)) {
      cout << number << " is a prime number." << endl;
    } else {
      cout << number << " is not a prime number." << endl;
    }
    // Using optimized method
    cout << "Optimized method............" << endl;
    if (checker.optimizedIsPrime(number)) {
      cout << number << " is a prime number." << endl;
    } else {
      cout << number << " is not a prime number." << endl;
    }
    return 0;
  }
