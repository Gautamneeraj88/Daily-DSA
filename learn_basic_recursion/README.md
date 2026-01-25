# Learn Basic Recursion 🔄

A comprehensive guide to understanding recursion fundamentals with practical C++ implementations.

---

## 📚 What is Recursion?

**Recursion** is a programming technique where a function calls itself directly to solve a problem by breaking it down into smaller subproblems until it reaches a base case that stops further calls.

### Key Components of Recursion

1. **Base Condition**: The stopping condition that prevents infinite recursion
2. **Recursive Call**: The function calling itself with modified parameters
3. **Progress Towards Base Case**: Each call should move closer to the base condition

---

## 🎯 Programs Included

1. **Understand Recursion by Print N Times** (`uderstand_recursion_by_print_n_times.cpp`)
2. **Print Numbers from 1 to N** (`print_1_to_n.cpp`)
3. **Sum of First N Numbers** (`sum_of_n_number.cpp`)
4. **Factorial of a Number** (`factorial_of_a_number.cpp`)
5. **Fibonacci Series** (`fibonacci_series.cpp`)
6. **Reverse an Array** (`reverse_an_array.cpp`)
7. **Check String is Palindrome** (`check_string_is_palindrome.cpp`)

---

## 📝 Detailed Explanations

### 1. Understand Recursion by Print N Times

**Problem:** Print a name/string N times using recursion.

**Approach:**
- Use a counter that decrements with each recursive call
- Base condition: when counter reaches 0 or below, stop
- Recursive call: print the name, then call function with counter-1

**Code Structure:**
```cpp
void print(int times, string name) {
    // Base condition
    if (times <= 0) {
        return;
    }
    
    cout << name << "\n";
    
    // Recursive call - moving towards base case
    print(times - 1, name);
}
```

**Example:**
```
Input: times = 5, name = "Neeraj Gautam"
Output:
Neeraj Gautam
Neeraj Gautam
Neeraj Gautam
Neeraj Gautam
Neeraj Gautam
```

**Recursive Tree:**
```
print(5, "Neeraj")
  └─> prints "Neeraj"
      └─> print(4, "Neeraj")
          └─> prints "Neeraj"
              └─> print(3, "Neeraj")
                  └─> prints "Neeraj"
                      └─> print(2, "Neeraj")
                          └─> prints "Neeraj"
                              └─> print(1, "Neeraj")
                                  └─> prints "Neeraj"
                                      └─> print(0, "Neeraj")
                                          └─> returns (base case)
```

**Time Complexity:** O(N) - N recursive calls
**Space Complexity:** O(N) - N calls in the recursion stack

---

### 2. Print Numbers from 1 to N

**Problem:** Print numbers from 1 to N using recursion.

This program demonstrates **two different approaches**:

#### Approach 1: Forward Recursion

**Concept:** Print the number **before** making the recursive call.

**How it Works:**
- Start from 1
- Print current number
- Recursively call with current+1
- Numbers are printed in ascending order during the forward journey

**Code Structure:**
```cpp
void printNumber(int current, int n) {
    // Base case: if current exceeds n, stop
    if (current > n) {
        return;
    }
    
    // Print BEFORE recursive call
    cout << current << " ";
    
    // Recursive call with next number
    printNumber(current + 1, n);
}
```

**Execution Flow (n=5):**
```
printNumber(1, 5) → prints 1 → calls printNumber(2, 5)
                                  └─> prints 2 → calls printNumber(3, 5)
                                                  └─> prints 3 → calls printNumber(4, 5)
                                                                  └─> prints 4 → calls printNumber(5, 5)
                                                                                  └─> prints 5 → calls printNumber(6, 5)
                                                                                                  └─> returns (base case)
```

**Output:** `1 2 3 4 5`

---

#### Approach 2: Backtracking (Backward Recursion)

**Concept:** Print the number **after** making the recursive call.

**How it Works:**
- Start from 1
- Recursively call with current+1 first
- Print current number while returning
- Numbers are printed in reverse order during the backward journey (backtracking phase)

**Code Structure:**
```cpp
void backtracking(int current, int n) {
    // Base condition
    if (current > n) {
        return;
    }
    
    // Recursive call BEFORE printing
    backtracking(current + 1, n);
    
    // Print AFTER recursive call (during backtrack)
    cout << current << " ";
}
```

**Execution Flow (n=5):**
```
backtracking(1, 5) → calls backtracking(2, 5)
                     └─> calls backtracking(3, 5)
                         └─> calls backtracking(4, 5)
                             └─> calls backtracking(5, 5)
                                 └─> calls backtracking(6, 5)
                                     └─> returns (base case)
                                 └─> prints 5
                             └─> prints 4
                         └─> prints 3
                     └─> prints 2
                 └─> prints 1
```

**Output:** `5 4 3 2 1`

**Note:** Even though we're calling with ascending numbers (1→2→3→4→5), the output is descending because we print during the return phase (backtracking).

---

### Key Difference: Forward vs Backtracking

| Aspect | Forward Recursion | Backtracking |
|--------|------------------|--------------|
| **Print Statement** | Before recursive call | After recursive call |
| **When Printed** | During forward journey | During backward journey |
| **Output Order** | 1 2 3 4 5 | 5 4 3 2 1 |
| **Use Case** | Direct order processing | Reverse order processing |

**Time Complexity (Both):** O(N) - N recursive calls
**Space Complexity (Both):** O(N) - N calls in the recursion stack

---

### 3. Sum of First N Numbers

**Problem:** Find the sum of first N natural numbers using recursion.

**Formula:** `sum(n) = n + sum(n-1)` with base case `sum(0) = 0`

**Code Structure:**
```cpp
int sum(int n) {
    if (n == 0) return 0;  // Base case
    return n + sum(n - 1);  // Recursive call
}
```

**Example (n=5):**
```
sum(5) = 5 + sum(4)
       = 5 + 4 + sum(3)
       = 5 + 4 + 3 + sum(2)
       = 5 + 4 + 3 + 2 + sum(1)
       = 5 + 4 + 3 + 2 + 1 + sum(0)
       = 5 + 4 + 3 + 2 + 1 + 0 = 15
```

**Time Complexity:** O(N) | **Space Complexity:** O(N)

---

### 4. Factorial of a Number

**Problem:** Calculate n! (n factorial) using recursion.

**Formula:** `n! = n × (n-1)!` with base case `0! = 1! = 1`

**Code Structure:**
```cpp
int factorial(int n) {
    if (n <= 1) return 1;  // Base case
    return n * factorial(n - 1);
}
```

**Example (n=5):**
```
factorial(5) = 5 × factorial(4)
             = 5 × 4 × factorial(3)
             = 5 × 4 × 3 × factorial(2)
             = 5 × 4 × 3 × 2 × factorial(1)
             = 5 × 4 × 3 × 2 × 1 = 120
```

**Time Complexity:** O(N) | **Space Complexity:** O(N)

---

### 5. Fibonacci Series

**Problem:** Find the Nth Fibonacci number using recursion.

**Formula:** `fib(n) = fib(n-1) + fib(n-2)` with base cases `fib(0) = 0, fib(1) = 1`

**Code Structure:**
```cpp
int fibonacci(int n) {
    if (n <= 1) return n;  // Base case
    return fibonacci(n - 1) + fibonacci(n - 2);
}
```

**Example (n=5):**
```
fib(5) = fib(4) + fib(3)
       = (fib(3) + fib(2)) + (fib(2) + fib(1))
       = ((fib(2) + fib(1)) + (fib(1) + fib(0))) + ((fib(1) + fib(0)) + 1)
       = ((1 + 1) + (1 + 0)) + ((1 + 0) + 1)
       = 3 + 2 = 5

Series: 0, 1, 1, 2, 3, 5, 8, 13, 21...
```

**Time Complexity:** O(2^N) - Exponential (without memoization)
**Space Complexity:** O(N) - Maximum recursion depth

**Note:** This naive approach recalculates same values multiple times. Use memoization or iterative approach for better performance.

---

### 6. Reverse an Array

**Problem:** Reverse an array using recursion with two-pointer technique.

**Approaches:**

#### Approach 1: Brute Force (Extra Space)
- Create a new array
- Copy elements in reverse order

#### Approach 2: Two-Pointer Recursion (In-Place)
- Use two pointers: `left` and `right`
- Swap elements at both pointers
- Move pointers towards center recursively

**Code Structure:**
```cpp
void reverseArray(int arr[], int left, int right) {
    if (left >= right) return;  // Base case
    swap(arr[left], arr[right]);
    reverseArray(arr, left + 1, right - 1);  // Move pointers
}
```

**Example:**
```
arr = [1, 2, 3, 4, 5]

Step 1: swap(1, 5) → [5, 2, 3, 4, 1], left=1, right=3
Step 2: swap(2, 4) → [5, 4, 3, 2, 1], left=2, right=2
Step 3: left >= right → return

Result: [5, 4, 3, 2, 1]
```

**Time Complexity:** O(N) | **Space Complexity:** O(N) for recursion stack, O(1) auxiliary

---

### 7. Check String is Palindrome

**Problem:** Check if a string is palindrome using recursion.

**Approaches:**

#### Approach 1: Iterative Two-Pointer
```cpp
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++; right--;
    }
    return true;
}
```

#### Approach 2: Recursive Two-Pointer
```cpp
bool isPalindromeRecursive(string &s, int left, int right) {
    if (left >= right) return true;  // Base case
    if (s[left] != s[right]) return false;
    return isPalindromeRecursive(s, left + 1, right - 1);
}
```

**Example:**
```
s = "madam"

Check: s[0]='m' == s[4]='m' ✓ → recurse(1, 3)
Check: s[1]='a' == s[3]='a' ✓ → recurse(2, 2)
Check: left >= right → return true

Result: "madam" is a palindrome
```

**Time Complexity:** O(N) | **Space Complexity:** O(N) for recursive, O(1) for iterative

---

## 🧠 Important Recursion Concepts

### 1. Stack Overflow in Recursion

**What is it?**
Whenever recursion calls are executed, they're stored in the recursion stack where they wait for completion. Each call takes up memory space.

**When does it occur?**
- When there's no base condition
- When the base condition is never reached
- When recursion depth is too large

**Result:** 
Program terminates with a **Segmentation Fault error** due to exceeding the memory limit of the recursion stack.

**Example of Stack Overflow:**
```cpp
// ❌ No base condition - INFINITE RECURSION
void infiniteRecursion(int n) {
    cout << n << " ";
    infiniteRecursion(n + 1);  // Never stops!
}
```

---

### 2. Base Condition

**Definition:** The condition that terminates recursion and prevents infinite calls.

**Characteristics:**
- Must be reachable from the initial call
- Should be simple and clear
- Returns without making further recursive calls

**Examples:**
```cpp
// Base condition for factorial
if (n == 0 || n == 1) return 1;

// Base condition for Fibonacci
if (n <= 1) return n;

// Base condition for printing N times
if (times <= 0) return;
```

---

### 3. Recursive Tree

**Definition:** A visual representation of recursion showing how functions are called as a series of events.

**Benefits:**
- Helps understand the flow of execution
- Makes it easier to analyze time and space complexity
- Useful for debugging recursive logic

**Example for print(3, "Hi"):**
```
                    print(3, "Hi")
                         |
                    prints "Hi"
                         |
                    print(2, "Hi")
                         |
                    prints "Hi"
                         |
                    print(1, "Hi")
                         |
                    prints "Hi"
                         |
                    print(0, "Hi")
                         |
                      returns
```

---

## ✅ Advantages of Recursion

1. **Simplifies Code**: Complex problems solved in fewer lines compared to iterative solutions
2. **Natural Representation**: Problems that are recursive in nature (trees, factorial, Fibonacci) are easier to express
3. **Reduces Complexity**: Avoids nested loops, making logic more readable and elegant
4. **Divide-and-Conquer**: Essential for algorithms like QuickSort, MergeSort, Binary Search, and Dynamic Programming
5. **Elegant Solutions**: Often more intuitive and closer to mathematical definitions

---

## ❌ Disadvantages of Recursion

1. **High Memory Usage**: Each call adds a layer to the call stack, causing memory overhead
2. **Risk of Stack Overflow**: Without proper base cases, infinite recursion crashes the program
3. **Slower Execution**: Function call overhead (pushing/popping stack frames) compared to simple loops
4. **Harder to Debug**: Tracing recursive calls can be confusing, especially with deep recursion
5. **Not Always Optimal**: Some problems are better solved iteratively (e.g., simple loops)

---

## 🔄 Recursion vs Iteration

| Aspect | Recursion | Iteration |
|--------|-----------|-----------|
| **Syntax** | Function calls itself | Uses loops (for, while) |
| **Memory** | Higher (stack frames) | Lower (loop variables) |
| **Speed** | Slower (function overhead) | Faster (direct execution) |
| **Readability** | Often more elegant | Can be verbose |
| **Use Case** | Tree/graph traversal, divide-and-conquer | Simple counting, linear processing |
| **Stack Overflow Risk** | Yes | No |

---

## 💡 Best Practices

1. **Always Define Base Condition**: Ensure it's the first thing in your recursive function
2. **Make Progress**: Each recursive call should move closer to the base case
3. **Test Edge Cases**: Empty inputs, single elements, large inputs
4. **Consider Stack Depth**: For very large inputs, consider iterative alternatives
5. **Optimize When Needed**: Use memoization/dynamic programming for overlapping subproblems
6. **Document Your Recursion**: Explain what each call does and how it reduces the problem

---

## 🎓 Learning Path

**Beginner Level** (Completed):
- ✅ Understanding recursion basics
- ✅ Print N times
- ✅ Print 1 to N (forward and backward)
- ✅ Sum of first N numbers
- ✅ Factorial calculation
- ✅ Fibonacci series
- ✅ Palindrome checking
- ✅ Array reversal

**Next Steps:**
- [ ] Binary Search (divide and conquer)
- [ ] Tree traversals (inorder, preorder, postorder)
- [ ] Merge Sort / Quick Sort
- [ ] Subset generation

**Advanced Topics:**
- [ ] Backtracking problems (N-Queens, Sudoku)
- [ ] Dynamic Programming with memoization
- [ ] Graph DFS traversal

---

## 🔍 Common Patterns

### Pattern 1: Counting Down
```cpp
void countdown(int n) {
    if (n == 0) return;  // Base case
    cout << n << " ";
    countdown(n - 1);    // Reduce problem size
}
```

### Pattern 2: Counting Up
```cpp
void countup(int current, int n) {
    if (current > n) return;  // Base case
    cout << current << " ";
    countup(current + 1, n);  // Progress forward
}
```

### Pattern 3: Divide and Conquer
```cpp
void divideConquer(int left, int right) {
    if (left >= right) return;  // Base case
    int mid = (left + right) / 2;
    divideConquer(left, mid);    // Left half
    divideConquer(mid + 1, right);  // Right half
}
```

---

## 📊 Complexity Analysis Summary

| Program | Time Complexity | Space Complexity | Reason |
|---------|----------------|------------------|---------|
| Print N Times | O(N) | O(N) | N recursive calls, N stack frames |
| Print 1 to N | O(N) | O(N) | N recursive calls, N stack frames |
| Sum of N Numbers | O(N) | O(N) | N recursive calls |
| Factorial | O(N) | O(N) | N recursive calls |
| Fibonacci | O(2^N) | O(N) | Exponential calls, max depth N |
| Reverse Array | O(N) | O(N) | N/2 swaps, N/2 stack frames |
| Palindrome Check | O(N) | O(N) | N/2 comparisons, N/2 stack frames |

**Note:** Fibonacci has exponential time due to overlapping subproblems. Use memoization to reduce to O(N).

---

## 🚀 How to Run

```bash
# Compile any program
g++ -o output_name filename.cpp

# Examples
g++ -o factorial factorial_of_a_number.cpp && ./factorial
g++ -o fibonacci fibonacci_series.cpp && ./fibonacci
g++ -o reverse reverse_an_array.cpp && ./reverse
g++ -o palindrome check_string_is_palindrome.cpp && ./palindrome
```

---

## 🎯 Key Takeaways

1. **Recursion = Base Case + Recursive Case**: Always need both
2. **Order Matters**: Print before call (forward) vs print after call (backward)
3. **Stack is Your Friend**: Understand how the call stack works
4. **Every Loop Can Be Recursion**: But not always the best choice
5. **Visualization Helps**: Draw recursive trees to understand flow

---

**Master recursion, master DSA! 🌟**

---

**Last Updated:** 25 Jan 2026