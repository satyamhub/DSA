# DSA Revision Workspace

A structured C++ practice workspace for DSA topics with **31 template files** ready for implementation.

## 📁 Folder Structure

```
Revision/
├── 01_Basics/ (4 files)
│   ├── reverse_number.cpp
│   ├── palindrome_number.cpp
│   ├── gcd_lcm.cpp
│   └── armstrong_number.cpp
│
├── 02_Patterns/ (3 files)
│   ├── pattern_1.cpp          [Square]
│   ├── pattern_2.cpp          [Triangle]
│   └── pattern_3.cpp          [Pyramid]
│
└── 03_Arrays/ (24 files)
    ├── largest_element.cpp
    ├── second_largest.cpp
    ├── check_sorted.cpp
    ├── remove_duplicates.cpp
    ├── left_rotate_by_one.cpp
    ├── left_rotate_by_k.cpp
    ├── move_zeroes.cpp
    ├── linear_search.cpp
    ├── union_of_arrays.cpp
    ├── intersection_of_arrays.cpp
    ├── missing_number.cpp
    ├── max_consecutive_ones.cpp
    ├── single_number.cpp
    ├── longest_subarray_sum_k.cpp
    ├── two_sum.cpp
    ├── sort_0_1_2.cpp
    ├── majority_element.cpp
    ├── kadane_algorithm.cpp
    ├── rearrange_positive_negative.cpp
    ├── next_permutation.cpp
    ├── leaders_in_array.cpp
    ├── longest_consecutive_sequence.cpp
    ├── set_matrix_zero.cpp
    ├── rotate_matrix.cpp
    └── spiral_matrix.cpp
```

## 📝 File Template

Each `.cpp` file follows this standardized structure:

```cpp
#include <bits/stdc++.h>
using namespace std;

/*
Problem: <Clear Problem Statement>

<Detailed description>

Example:
Input: ...
Output: ...

Approach Hint: <Short hint for solving>
*/

void solve() {
    // Write your solution here
}

int main() {
    // Test cases
    solve();
    return 0;
}
```

## ✨ Features

- ✅ **31 ready-to-code files** (all topics from Basics to Arrays)
- ✅ **Problem statements** with examples and hints
- ✅ **Empty implementations** - perfect for practice
- ✅ **Clean boilerplate** with `#include <bits/stdc++.h>`
- ✅ **Beginner-friendly** with clear comments
- ✅ **Organized by topic** for progressive learning

## 🚀 How to Use

1. **Open any file** - Each contains a problem statement with hints
2. **Implement the `solve()` function** - This is where your code goes
3. **Add test cases to `main()`** - Test your solution locally
4. **Build and run** using your VS Code tasks

### Compile and Run (Ubuntu/Linux)

```bash
cd 03_Arrays
g++ -std=c++17 -Wall -Wextra -g largest_element.cpp -o largest_element
./largest_element
```

### Using VS Code Tasks

The workspace includes pre-configured build tasks:

- **Build Current C++ File (Ubuntu)** - Compiles the open file
- **Run Current C++ File (Ubuntu)** - Compiles and runs
- **Build and Run with practice_io** - Uses input/output files

## 💡 Tips

- Start with **01_Basics** to get comfortable with syntax
- Progress to **02_Patterns** for loop practice
- Master **03_Arrays** covering:
  - Array fundamentals (search, sort, rotate)
  - Problem-solving patterns (two pointers, prefix sum, hashing)
  - Optimization techniques (Kadane's, Boyer-Moore, XOR)

## 📌 Key Topics Covered

### 01_Basics

- Number manipulation (reverse, palindrome)
- Mathematical concepts (GCD/LCM, Armstrong)

### 02_Patterns

- Nested loops and control flow
- Output formatting

### 03_Arrays

- **Easy**: Searching, basic operations
- **Medium**: Advanced algorithms (Kadane's, sliding window, two pointers)
- **Hard**: Matrix operations, complex patterns

---

**Total Files**: 31
**Generated**: 2025
**Ready for Practice**: ✓ Yes
