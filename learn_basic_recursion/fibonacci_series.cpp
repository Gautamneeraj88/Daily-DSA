#include <iostream>
using namespace std;

class Solution
{
public:
    // brute force approach using recursion
    int fibonacci(int n)
    {
        if (n <= 1)
        {
            return n;
        }

        return fibonacci(n - 1) + fibonacci(n - 2);
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
    for (int i = 0; i <= n; i++) {
        cout << sol.fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}