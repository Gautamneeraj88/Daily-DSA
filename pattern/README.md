# Pattern Printing Problems

A collection of pattern printing programs to master nested loops and build strong loop intuition for DSA.

---

## Why Pattern Problems?

Pattern problems help you:
- Understand nested loop behavior (outer loop = rows, inner loop = columns)
- Build intuition for 2D array traversal
- Practice loop variable manipulation
- Strengthen problem-solving skills

---

## Programs Included

| # | File | Description |
|---|------|-------------|
| 1 | `square_pattern_1st.cpp` | Square patterns (numbers, stars, characters) |
| 2 | `square_pattern_2nd.cpp` | Additional square pattern variations |
| 3 | `triangle_pattern_1st.cpp` | Right-angled triangles (5 variations) |
| 4 | `reverse_trianle_pattern_1st.cpp` | Reverse triangle patterns |
| 5 | `inverted_triangle_pattern_1st.cpp` | Inverted (upside-down) triangles |
| 6 | `Pyramid_pattern_1st.cpp` | Pyramid number pattern |
| 7 | `Floyed_triangle_pattern.cpp` | Floyd's triangle |
| 8 | `printing_starts.cpp` | Star printing patterns |
| 9 | `sum_of_n_odd_numbers.cpp` | Sum of first N odd numbers |
| 10 | `sum_of_n_even_numbers.cpp` | Sum of first N even numbers |
| 11 | `sum_of_number_divisible_by_3.cpp` | Sum of numbers divisible by 3 |
| 12 | `check_a_number_prime.cpp` | Prime number checking |
| 13 | `printing_factorial_of_n_numbers.cpp` | Print factorial series |

---

## Pattern Examples

### 1. Square Pattern (n=4)

**Number Pattern:**
```
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
```

**Star Pattern:**
```
* * * *
* * * *
* * * *
* * * *
```

**Character Pattern:**
```
A B C D
A B C D
A B C D
A B C D
```

**Logic:**
```cpp
for (int i = 0; i < n; i++) {       // rows
    for (int j = 0; j < n; j++) {   // columns
        cout << (j+1) << " ";
    }
    cout << "\n";
}
```

---

### 2. Triangle Patterns (n=4)

**Right Triangle (Stars):**
```
*
* *
* * *
* * * *
```

**Right Triangle (Same Number):**
```
1
2 2
3 3 3
4 4 4 4
```

**Right Triangle (Incrementing):**
```
1
1 2
1 2 3
1 2 3 4
```

**Right Triangle (Characters):**
```
A
B B
C C C
D D D D
```

**Logic:**
```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {  // j goes from 0 to i
        cout << "* ";
    }
    cout << "\n";
}
```

---

### 3. Inverted Triangle (n=4)

```
* * * *
* * *
* *
*
```

**Logic:**
```cpp
for (int i = n; i > 0; i--) {
    for (int j = 0; j < i; j++) {
        cout << "* ";
    }
    cout << "\n";
}
```

---

### 4. Pyramid Pattern (n=4)

```
   1
  121
 12321
1234321
```

**Logic:**
- First loop: print spaces (n-i-1)
- Second loop: print ascending numbers (1 to i+1)
- Third loop: print descending numbers (i to 1)

```cpp
for (int i = 0; i < n; i++) {
    // spaces
    for (int j = 0; j < n-i-1; j++) cout << " ";
    // ascending
    for (int k = 1; k <= i+1; k++) cout << k;
    // descending
    for (int z = i; z >= 1; z--) cout << z;
    cout << "\n";
}
```

---

### 5. Floyd's Triangle (n=4)

```
1
2 3
4 5 6
7 8 9 10
```

**Key Insight:** Uses a single counter that increments across all rows.

**Logic:**
```cpp
int num = 1;
for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
        cout << num << " ";
        num++;
    }
    cout << "\n";
}
```

---

## Math Problems

### Sum of N Odd Numbers
Formula: `1 + 3 + 5 + ... + (2n-1)`
```cpp
int sum = 0;
for (int i = 1; i <= n; i += 2) {
    sum += i;
}
```
**Pattern:** Sum of first n odd numbers = n^2

### Sum of N Even Numbers
Formula: `2 + 4 + 6 + ... + 2n`
```cpp
int sum = 0;
for (int i = 2; i <= n; i += 2) {
    sum += i;
}
```

### Sum of Numbers Divisible by 3
```cpp
int sum = 0;
for (int i = 3; i <= n; i += 3) {
    sum += i;
}
```

---

## Key Concepts

### Nested Loop Structure
```
Outer Loop (i) → Controls ROWS
    Inner Loop (j) → Controls COLUMNS within each row
```

### Common Patterns

| Pattern Type | Inner Loop Condition |
|--------------|---------------------|
| Square | `j < n` |
| Triangle | `j <= i` |
| Inverted Triangle | `j < n-i` |
| Pyramid | Multiple inner loops |

### Variable Relationships

- `i` = current row (0-indexed)
- `j` = current column
- `n` = total rows/size
- `n - i - 1` = spaces for pyramid (decreasing)
- `i + 1` = elements in row i (for triangle)

---

## How to Run

```bash
# Compile and run any pattern file
g++ -o pattern filename.cpp && ./pattern

# Examples
g++ -o square square_pattern_1st.cpp && ./square
g++ -o triangle triangle_pattern_1st.cpp && ./triangle
g++ -o pyramid Pyramid_pattern_1st.cpp && ./pyramid
g++ -o floyd Floyed_triangle_pattern.cpp && ./floyd
```

---

## Tips for Solving Pattern Problems

1. **Identify the pattern** - Draw it out, count rows and columns
2. **Find row-column relationship** - How does column count change with row?
3. **Start with outer loop** - This controls rows
4. **Add inner loop(s)** - For columns, spaces, etc.
5. **Handle special cases** - Spaces, line breaks, counters

---

## Complexity

All pattern programs have:
- **Time Complexity:** O(N^2) - nested loops
- **Space Complexity:** O(1) - only using loop variables

---

**Last Updated:** 25 Jan 2026
