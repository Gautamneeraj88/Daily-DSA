#include <iostream>
using namespace std;

class Solution
{
public:
  // brute force approach by using an auxiliary array
  void reverseArray(int arr[], int n)
  {
    // step 1: create an auxiliary array of size n
    int ans[n];
    // step 2: copy elements from arr to ans in reverse order
    for (int i = n; i > 0; i--)
    {
      ans[n - i] = arr[i - 1];
    }
    // step 3: copy elements from ans back to arr
    for (int i = 0; i < n; i++)
    {
      arr[i] = ans[i];
    }
  }

  // optimal approach using recursion by using two pointers that is in-place reversal
  void reverseArrayRecursive(int arr[], int start, int end){
    // base case
    if (start >= end){
      return;
    }
    // swap elements at start and end indices
    swap(arr[start], arr[end]);
    // recursive call with updated pointers
    reverseArrayRecursive(arr, start + 1, end - 1);
  }
};

int main()
{
  Solution sol;
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  sol.reverseArray(arr, n);

  cout << "Reversed array: (brute force approach) " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  int arr2[] = {1, 2, 3, 4, 5};
  sol.reverseArrayRecursive(arr2, 0, n - 1);  
  cout << "Reversed array: (recursive approach) " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr2[i] << " ";
  }
  cout << endl;

  return 0;
}
