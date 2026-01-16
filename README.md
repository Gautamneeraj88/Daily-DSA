# Daily DSA - Learning Journey 🚀

A comprehensive repository documenting my daily progress in Data Structures and Algorithms. This serves as both a learning log and a reference guide for anyone studying DSA.

---

## 📚 Repository Structure

```
Daily-DSA/
├── know_basics/              # Fundamental programming concepts
│   ├── count_digits.cpp
│   ├── reverse_a_number.cpp
│   ├── palindrome_number.cpp
│   ├── armstrong_number.cpp
│   ├── gcd.cpp
│   ├── check_for_prime.cpp
│   ├── print_all_divisors.cpp
│   └── README.md             # Detailed notes and explanations
├── learn_basic_recursion/    # Recursion fundamentals
│   ├── uderstand_recursion_by_print_n_times.cpp
│   ├── print_1_to_n.cpp
│   └── README.md             # Detailed notes and explanations
└── README.md                 # This file - Daily progress tracker
```

---

## 📖 Topics Covered

- [x] **Know Basics** - Fundamental number theory and digit manipulation
  - Count Digits
  - Reverse a Number
  - Palindrome Number
  - Armstrong Number
  - GCD (Greatest Common Divisor)
  - Check for Prime
  - Print All Divisors

- [x] **Learn Basic Recursion** - Understanding recursion fundamentals
  - Understand Recursion by Print N Times
  - Print 1 to N (Forward Recursion & Backtracking)

---

## 📝 Daily Progress Log

### Day 3: 15 Jan 2025
**Topics:** Learn Basic Recursion - Fundamentals

**Files Added:**
- `learn_basic_recursion/uderstand_recursion_by_print_n_times.cpp` - Print a name N times using recursion
- `learn_basic_recursion/print_1_to_n.cpp` - Print numbers 1 to N using forward recursion and backtracking
- `learn_basic_recursion/README.md` - Comprehensive guide to recursion with detailed explanations, examples, and complexity analysis

**What I Learned:**
- Recursion is a function calling itself to solve problems by breaking them into smaller subproblems
- Every recursive function needs a base condition to prevent infinite recursion and stack overflow
- Forward recursion: print before recursive call (ascending order)
- Backtracking: print after recursive call (descending order)
- Recursive tree visualization helps understand execution flow

**Key Insights:**
- The position of the print statement (before/after recursive call) determines output order
- Each recursive call consumes stack memory - O(N) space complexity for N calls
- Stack overflow occurs when there's no base condition or it's never reached
- Recursion simplifies code but has higher memory usage compared to iteration
- Understanding the call stack is crucial for mastering recursion

**Recursion Advantages vs Disadvantages:**
- ✅ Elegant and readable code for naturally recursive problems (trees, graphs, divide-and-conquer)
- ✅ Fewer lines of code compared to iterative solutions
- ❌ Higher memory usage due to stack frames
- ❌ Risk of stack overflow with deep recursion
- ❌ Slower execution due to function call overhead

---

### Day 2: 14 Jan 2025 - 5:36 PM
**Topics:** Know Basics - Number Theory Algorithms

**Files Added:**
- `know_basics/armstrong_number.cpp` - Check if a number equals sum of its digits raised to power of digit count
- `know_basics/check_for_prime.cpp` - Prime number checking (brute force & optimized √N approach)
- `know_basics/print_all_divisors.cpp` - Find all divisors (brute force & optimized √N approach)

**Files Modified:**
- `know_basics/README.md` - Added comprehensive documentation with examples, code explanations, and complexity analysis for all programs

**What I Learned:**
- Armstrong numbers are narcissistic numbers where each digit is raised to the power of total digits
- Optimizing algorithms by checking only up to √N instead of N (used in prime checking and divisor finding)
- Divisors come in pairs - if `i` divides N, then `N/i` also divides N
- Importance of handling edge cases (perfect squares, 0, 1, negative numbers)

**Key Insights:**
- Time complexity improvement from O(N) to O(√N) makes a huge difference for large numbers
- Pattern recognition helps in optimization (divisor pairs concept)
- Always test with edge cases before finalizing solution

---

### Day 1: 13 Jan 2025 - 2:18 PM
**Topics:** Know Basics - Digit Manipulation & GCD

**Files Added:**
- `know_basics/count_digits.cpp` - Count total digits using loop and log10 methods
- `know_basics/reverse_a_number.cpp` - Reverse digits of a number
- `know_basics/palindrome_number.cpp` - Check if number reads same forwards and backwards
- `know_basics/gcd.cpp` - Find Greatest Common Divisor using brute force

**What I Learned:**
- Using `% 10` to extract last digit and `/= 10` to remove it
- Two approaches for counting digits: iterative O(d) and log10 O(1)
- Palindrome checking by comparing original with reversed number
- GCD is the largest number that divides both inputs without remainder

---

## 🎯 Goals & Roadmap

### Short-term Goals (This Week)
- [x] Complete all "Know Basics" problems
- [x] Start learning recursion fundamentals
- [x] Understand time and space complexity analysis
- [ ] Complete basic recursion problems
- [ ] Practice pattern recognition in problems

### Medium-term Goals (This Month)
- [ ] Master recursion (factorial, Fibonacci, array operations)
- [ ] Arrays and Hashing
- [ ] Two Pointers technique
- [ ] Sliding Window problems
- [ ] Basic Sorting algorithms

### Long-term Goals
- [ ] Master all fundamental data structures
- [ ] Solve 100+ LeetCode problems
- [ ] Understand advanced algorithms (DP, Graphs, Trees)

---

## 💡 Learning Resources

- **Practice Platforms:** LeetCode, Codeforces, HackerRank
- **Theory:** GeeksforGeeks, CP Algorithms
- **Complexity Analysis:** Big-O Cheat Sheet

---

## 🔥 Streak Counter

Current Streak: **3 days** 🎉

---

## 📊 Statistics

- **Total Programs:** 9
- **Topics Covered:** 2
- **Total Study Time:** ~6 hours
- **Problems Solved:** 9

---

## 🤝 How to Use This Repository

1. **For Learning:** Navigate to topic folders and read the README for detailed explanations
2. **For Practice:** Try solving problems yourself before looking at solutions
3. **For Reference:** Use code examples and complexity analysis as quick reference

---

## 📌 Notes

- Each program includes multiple approaches (brute force + optimized)
- Time and space complexity mentioned for every solution
- Real examples provided for better understanding
- Edge cases handled and documented

---

**Last Updated:** 15 Jan 2025

**Keep Learning, Keep Growing! 💪**