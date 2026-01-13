#include <iostream>
using namespace std;

class Solution {
    public:
        int reverseNumber(int number) {
            int reversedNumber = 0;
            while (number > 0) {
                int lastDigit = number % 10;
                reversedNumber = reversedNumber * 10 + lastDigit;
                number /= 10;
            }
            return reversedNumber;
        }
};

int main () {
    Solution sol;
    int number;
    cout << "Enter Number: ";
    cin >> number;
    int reversedNumber = sol.reverseNumber(number);
    cout << "Reversed Number: " << reversedNumber << endl;
    return 0;
}
