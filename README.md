# Daily DSA - Learning Journey 🚀

A comprehensive repository documenting my daily progress in Data Structures and Algorithms. This serves as both a learning log and a reference guide for anyone studying DSA.

---

## 📚 Repository Structure

```
Daily-DSA/
├── know_basics/          # Fundamental programming concepts
│   ├── count_digits.cpp
│   ├── reverse_a_number.cpp
│   ├── palindrome_number.cpp
│   ├── armstrong_number.cpp
│   ├── gcd.cpp
│   ├── check_for_prime.cpp
│   ├── print_all_divisors.cpp
│   └── README.md         # Detailed notes and explanations
└── README.md            # This file - Daily progress tracker
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

---

## 📝 Daily Progress Log

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
- [ ] Complete all "Know Basics" problems
- [ ] Understand time and space complexity analysis
- [ ] Practice pattern recognition in problems

### Medium-term Goals (This Month)
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

Current Streak: **2 days** 🎉

---

## 📊 Statistics

- **Total Programs:** 7
- **Topics Covered:** 1
- **Total Study Time:** ~4 hours
- **Problems Solved:** 7

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

**Last Updated:** 14 Jan 2025

**Keep Learning, Keep Growing! 💪**