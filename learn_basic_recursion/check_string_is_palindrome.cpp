#include <iostream>
using namespace std;

class Solution
{
public:
    // brute force approach using an auxiliary string
    bool isPalindrome(string str)
    {
        int start = 0;
        int end = str.length() - 1;

        while (start < end)
        {
            if (!isalnum(str[start]))
            {
                start++;
            }
            else if (!isalnum(str[end]))
            {
                end--;
            }
            else if (tolower(str[start]) != tolower(str[end]))
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
        return true;
    }

    // optimal approach using recursion with two pointers
    bool isPalindromeRecursive(string &str, int start, int end) {
        // base case
        if(start >= end) {
            return true;
        }

        if(!isalnum(str[start])) {
            return isPalindromeRecursive(str, start + 1, end);
        }
        if(!isalnum(str[end])) {
            return isPalindromeRecursive(str, start, end - 1);
        }
        if(tolower(str[start]) != tolower(str[end])) {
            return false;
        }
        return isPalindromeRecursive(str, start + 1, end - 1);
    }

    // another optimal approach using recursion going to half of the string
    bool isPalindromeRecursiveHalf(string &str, int index) {
        int n = str.length();
        // base case
        if(index >= n / 2) {
            return true;
        }

        if(!isalnum(str[index])) {
            return isPalindromeRecursiveHalf(str, index + 1);
        }
        if(!isalnum(str[n - index - 1])) {
            return isPalindromeRecursiveHalf(str, index);
        }
        if(tolower(str[index]) != tolower(str[n - index - 1])) {
            return false;
        }
        return isPalindromeRecursiveHalf(str, index + 1);
    }
};

int main()
{
    Solution sol;
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (sol.isPalindrome(str))
    {
        cout << "\"" << str << "\" is a palindrome." << endl;
    }
    else
    {
        cout << "\"" << str << "\" is not a palindrome." << endl;
    }

    // Using recursive approach
    if (sol.isPalindromeRecursive(str, 0, str.length() - 1))
    {
        cout << "(Recursive) \"" << str << "\" is a palindrome." << endl;
    }
    else
    {
        cout << "(Recursive) \"" << str << "\" is not a palindrome." << endl;
    }

    // Using another recursive approach
    if (sol.isPalindromeRecursiveHalf(str, 0))
    {
        cout << "(Recursive Half) \"" << str << "\" is a palindrome." << endl;
    }
    else
    {
        cout << "(Recursive Half) \"" << str << "\" is not a palindrome." << endl;
    }

    return 0;
}