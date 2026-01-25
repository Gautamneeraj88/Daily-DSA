#include <iostream>
using namespace std;

class Solution {
    public:
    // Recursive function to calculate the factorial of a number
    int factorial(int n) {
        // Base case: if n is 0 or 1, return 1
        if (n == 0 || n == 1) {
            return 1;       
        }
        // Recursive case: factorial of n is n times factorial of (n-1)
        return n * factorial(n - 1);
    }   
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1; 
    }
    int result = sol.factorial(n);
    cout << "The factorial of " << n << " is: " << result << endl;
    return 0;
}