# Know Basics

A collection of fundamental programming problems and algorithms to build strong foundation in Data Structures and Algorithms.

---

## Table of Contents
1. [Count Digits](#1-count-digits)
2. [Reverse a Number](#2-reverse-a-number)
3. [Palindrome Number](#3-palindrome-number)
4. [Armstrong Number](#4-armstrong-number)
5. [Print All Divisors](#5-print-all-divisors)
6. [GCD (Greatest Common Divisor)](#6-gcd-greatest-common-divisor)
7. [Check for Prime](#7-check-for-prime)

---

## 1. Count Digits

### Problem
Count the total number of digits in a given number.

### Approach

#### Method 1: Using Loop
- Keep dividing the number by 10 until it becomes 0
- Count how many times we divided

#### Method 2: Using log10
- Use the mathematical formula: `count = floor(log10(number)) + 1`
- This works because log10 tells us the power of 10

### Example
```
Input: 12345
Output: Total digits: 5

Input: 999
Output: Total digits: 3
```

### Code Explanation
```cpp
// Method 1: Loop approach
while (number > 0) {
    count += 1;        // Increment counter
    number /= 10;      // Remove last digit
}

// Method 2: Log approach
count = (int)log10(number) + 1;
```

**Time Complexity:** 
- Loop method: O(d) where d is number of digits
- Log method: O(1)

**Space Complexity:** O(1)

---

## 2. Reverse a Number

### Problem
Reverse the digits of a given number.

### Approach
1. Extract the last digit using modulo operator (`number % 10`)
2. Add this digit to the reversed number by multiplying reversed number by 10 and adding the digit
3. Remove the last digit from the original number by dividing by 10
4. Repeat until the number becomes 0

### Example
```
Input: 12345
Process:
- Extract 5, reversed = 5, remaining = 1234
- Extract 4, reversed = 54, remaining = 123
- Extract 3, reversed = 543, remaining = 12
- Extract 2, reversed = 5432, remaining = 1
- Extract 1, reversed = 54321, remaining = 0
Output: 54321
```

### Code Explanation
```cpp
int reversedNumber = 0;
while (number > 0) {
    int lastDigit = number % 10;              // Get last digit
    reversedNumber = reversedNumber * 10 + lastDigit;  // Build reversed number
    number /= 10;                             // Remove last digit
}
```

**Time Complexity:** O(d) where d is number of digits  
**Space Complexity:** O(1)

---

## 3. Palindrome Number

### Problem
Check if a number reads the same forwards and backwards.

### What is a Palindrome?
A palindrome number is identical when reversed.
- Examples: 121, 1331, 4554, 12321

### Approach
1. Reverse the number using the same logic as "Reverse a Number"
2. Compare the reversed number with the original number
3. If they are equal, it's a palindrome

### Example
```
Input: 121
Reversed: 121
Output: 121 is a palindrome

Input: 123
Reversed: 321
Output: 123 is not a palindrome
```

### Code Explanation
```cpp
int originalNumber = number;  // Store original value
int reversedNumber = 0;

while (number > 0) {
    int lastDigit = number % 10;
    reversedNumber = reversedNumber * 10 + lastDigit;
    number /= 10;
}

return originalNumber == reversedNumber;  // Compare
```

**Time Complexity:** O(d) where d is number of digits  
**Space Complexity:** O(1)

---

## 4. Armstrong Number

### Problem
Check if a number equals the sum of its digits raised to the power of the number of digits.

### What is an Armstrong Number?
An Armstrong number (also called Narcissistic number) is a number that equals the sum of its own digits each raised to the power of the number of digits.

### Examples
```
153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✓
370 = 3³ + 7³ + 0³ = 27 + 343 + 0 = 370 ✓
9474 = 9⁴ + 4⁴ + 7⁴ + 4⁴ = 6561 + 256 + 2401 + 256 = 9474 ✓
123 = 1³ + 2³ + 3³ = 1 + 8 + 27 = 36 ✗
```

### Approach
1. Find the number of digits in the number
2. Extract each digit
3. Raise each digit to the power of total digits
4. Sum all the powers
5. Compare the sum with the original number

### Code Explanation
```cpp
int digits = to_string(number).length();  // Count digits
int sum = 0;

while (number > 0) {
    int digit = number % 10;         // Extract digit
    sum += pow(digit, digits);       // Add digit^digits to sum
    number /= 10;                    // Move to next digit
}

return sum == originalNumber;
```

**Time Complexity:** O(d) where d is number of digits  
**Space Complexity:** O(1)

---

## 5. Print All Divisors

### Problem
Find and print all divisors of a given number.

### What is a Divisor?
A divisor of a number N is a positive integer that divides N without leaving a remainder.

### Example
```
Input: 12
Divisors: 1, 2, 3, 4, 6, 12

Input: 36
Divisors: 1, 2, 3, 4, 6, 9, 12, 18, 36
```

### Approaches

#### Method 1: Brute Force
Check every number from 1 to N to see if it divides N evenly.

```cpp
for (int i = 1; i <= number; i++) {
    if (number % i == 0) {
        cout << i << " ";
    }
}
```
**Time Complexity:** O(N)

#### Method 2: Optimized Approach
Key insight: Divisors come in pairs! If `i` divides N, then `N/i` also divides N.
We only need to check up to √N.

```cpp
for (int i = 1; i * i <= number; i++) {
    if (number % i == 0) {
        cout << i << " ";              // Print smaller divisor
        if (i != number / i) {         // Avoid printing duplicate for perfect squares
            cout << number / i << " "; // Print larger divisor
        }
    }
}
```

**Example for 36:**
- i=1: Print 1 and 36
- i=2: Print 2 and 18
- i=3: Print 3 and 12
- i=4: Print 4 and 9
- i=6: Print only 6 (since 6*6=36, avoid duplicate)

**Time Complexity:** O(√N)  
**Space Complexity:** O(1)

---

## 6. GCD (Greatest Common Divisor)

### Problem
Find the greatest common divisor (GCD) of two numbers.

### What is GCD?
The GCD is the largest positive integer that divides both numbers without leaving a remainder.

### Example
```
GCD(12, 18)
Divisors of 12: 1, 2, 3, 4, 6, 12
Divisors of 18: 1, 2, 3, 6, 9, 18
Common divisors: 1, 2, 3, 6
GCD = 6

GCD(20, 28) = 4
GCD(7, 13) = 1  (coprime numbers)
```

### Approach: Brute Force

1. Start from 1 and go up to the minimum of the two numbers
2. Check if the current number divides both numbers evenly
3. Keep updating GCD whenever we find a common divisor
4. The last updated value is the GCD

### Code Explanation
```cpp
int gcd = 1;  // Initialize with 1 (minimum possible GCD)

for (int i = 1; i <= min(n1, n2); i++) {
    if (n1 % i == 0 && n2 % i == 0) {  // If i divides both numbers
        gcd = i;                         // Update GCD
    }
}
```

**Time Complexity:** O(min(n1, n2))  
**Space Complexity:** O(1)

**Note:** There's a more efficient approach called Euclidean Algorithm with O(log(min(n1, n2))) time complexity.

---

## 7. Check for Prime

### Problem
Determine if a given number is a prime number.

### What is a Prime Number?
A prime number is a natural number greater than 1 that has exactly 2 divisors: 1 and itself.

### Examples
```
Prime numbers: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29...
Not prime: 1 (only 1 divisor), 4 (divisors: 1,2,4), 6 (divisors: 1,2,3,6)
```

### Approaches

#### Method 1: Brute Force
Count all divisors from 1 to N. If count is exactly 2, it's prime.

```cpp
int divisorCount = 0;
for (int i = 1; i <= number; i++) {
    if (number % i == 0) {
        divisorCount++;
    }
}
return divisorCount == 2;
```
**Time Complexity:** O(N)

#### Method 2: Optimized Approach
Key insight: We only need to check up to √N!

Why? Because divisors come in pairs. If N = a × b, then one of them must be ≤ √N.

```cpp
int cnt = 0;
for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
        cnt++;                    // Count i as a divisor
        if (n / i != i) {        // If not a perfect square
            cnt++;                // Count n/i as another divisor
        }
    }
}
return cnt == 2;
```

**Example for n = 36:**
- i=1: divisors are 1 and 36, cnt = 2
- i=2: divisors are 2 and 18, cnt = 4
- i=3: divisors are 3 and 12, cnt = 6
- i=4: divisors are 4 and 9, cnt = 8
- i=6: divisor is 6 (6×6=36, count once), cnt = 9
- Result: 9 divisors, not prime

**Example for n = 7:**
- i=1: divisors are 1 and 7, cnt = 2
- i=2: 7%2 ≠ 0, skip
- Loop ends at √7 ≈ 2.6
- Result: 2 divisors, prime!

**Time Complexity:** O(√N)  
**Space Complexity:** O(1)

---

## Key Takeaways

1. **Digit Manipulation**: Most problems involving digits use `% 10` to extract last digit and `/= 10` to remove it
2. **Optimization**: Many problems can be optimized by checking only up to √N instead of N
3. **Pattern Recognition**: Understanding that divisors come in pairs helps optimize several algorithms
4. **Edge Cases**: Always consider special cases like 0, 1, and negative numbers

---

## Practice Tips

- Try solving each problem on paper first before coding
- Understand the brute force approach before moving to optimization
- Test with multiple examples including edge cases
- Analyze time and space complexity of your solutions

Happy Coding! 🚀