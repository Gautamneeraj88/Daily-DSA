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

**Beginner Level** (Current):
- ✅ Understanding recursion basics
- ✅ Print N times
- ✅ Print 1 to N (forward and backward)

**Next Steps:**
- [ ] Print N to 1 using recursion
- [ ] Sum of first N numbers
- [ ] Factorial calculation
- [ ] Fibonacci series
- [ ] Palindrome checking
- [ ] Array reversal
- [ ] String reversal

**Advanced Topics:**
- [ ] Binary Search (divide and conquer)
- [ ] Tree traversals (inorder, preorder, postorder)
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
| Print 1 to N (Forward) | O(N) | O(N) | N recursive calls, N stack frames |
| Print 1 to N (Backtrack) | O(N) | O(N) | N recursive calls, N stack frames |

**Space Complexity Note:** The O(N) space is due to the recursion call stack, which stores function frames for each recursive call.

---

## 🚀 How to Run

```bash
# Compile
g++ -o print_n_times uderstand_recursion_by_print_n_times.cpp
g++ -o print_1_to_n print_1_to_n.cpp

# Execute
./print_n_times
./print_1_to_n
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

**Last Updated:** 15 Jan 2025