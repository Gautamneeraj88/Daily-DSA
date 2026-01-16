/**
 * Forward Recursion
 *
 * To print numbers from 1 to n using forward recursion, the approach involves defining a recursive funtion that takes the current number as a parameter. The function first checks if the current number exceeds n; if it does, the recursion terminates. otherwise, it prints the current number and then recursively calls itself with the next number incremented by one. this way, the numbers are printed in ascending order as the recursion unfolds forward from the base case to the maximum number. the key is to make the print statement before the recursive call, ensuring the numbers appear from 1 up to n in order.
 */

 /**
  * Backtracking
  *
  * Backtracking builds solutions by exploring all options and undoing choices when needed. To print number form 1 to n using backtracking, the function recursively calls itself with the next number until it passes n. After reaching the base case, it prints the numbers while returning from the recursion. This way, numbers are printed in reverse order because the print happens after the recursive call during backtracking. the main difference from forward recursion is that printing occurs on the way back, not before the recursive call.
  */

 #include <iostream>
 using namespace std;

 class Solution {
     public:
        // forward recursion
        void printNumber(int current, int n) {
            //base case: if current exceeds n, stop recursion
            if (current > n) {
                return;
            }

            // print current number
            cout<<current<<" ";

            // recursive call with next number
            printNumber(current+1, n);
        }

        void backtracking(int current, int n) {
            //base condition
            if (current > n) { return;  }

            // recursive call with next number
            backtracking(current + 1, n);

            // print the current number
            cout<<current<<" ";
        }
 };

 int main () {
     Solution sol;
     int n = 10;

     cout<<"Forward Recursion: ";
     sol.printNumber(1, n);
     cout<<"\n";

     cout<<"Backtracking (backward recursion): ";
     sol.backtracking(1, n);
     cout<<"\n";

     return 0;
 }
