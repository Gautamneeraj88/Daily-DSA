#include <iostream>
using namespace std;

class Solution {
    public:

    // Recursive function to calculate the sum of first n natural numbers
    int sumOfN(int n) {
        // Base case: if n is 1, return 1
        if (n == 1) {
            return 1;       
        }
        // Recursive case: sum of n is n plus sum of (n-1)
        return n + sumOfN(n - 1);
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a natural number: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive natural number." << endl;
        return 1; 
    }
    int result = sol.sumOfN(n);
    cout << "The sum of the first " << n << " natural numbers is: " << result << endl;
    return 0;
}