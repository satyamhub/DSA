#!/bin/bash

# Create Revision directory structure and generate C++ template files

REVISION_DIR="$(dirname "$0")/Revision"

# Create base directory
mkdir -p "$REVISION_DIR"

# Function to create a C++ file with template
create_cpp_file() {
    local file_path=$1
    local problem_title=$2
    local problem_statement=$3
    local sample_input=$4
    local sample_output=$5
    local approach_hint=$6

    mkdir -p "$(dirname "$file_path")"

    cat > "$file_path" << 'EOF'
#include <bits/stdc++.h>
using namespace std;

/*
Problem: PROBLEM_TITLE

PROBLEM_STATEMENT

Example:
Input: SAMPLE_INPUT
Output: SAMPLE_OUTPUT

Approach Hint: APPROACH_HINT
*/

void solve() {
    // Write your solution here
}

int main() {
    // Test cases
    solve();
    return 0;
}
EOF

    # Replace placeholders
    sed -i "s|PROBLEM_TITLE|$problem_title|g" "$file_path"
    sed -i "s|PROBLEM_STATEMENT|$problem_statement|g" "$file_path"
    sed -i "s|SAMPLE_INPUT|$sample_input|g" "$file_path"
    sed -i "s|SAMPLE_OUTPUT|$sample_output|g" "$file_path"
    sed -i "s|APPROACH_HINT|$approach_hint|g" "$file_path"
}

# ============ 01_BASICS ============
echo "Creating 01_Basics files..."

create_cpp_file \
    "$REVISION_DIR/01_Basics/reverse_number.cpp" \
    "Reverse a Number" \
    "Given an integer, reverse its digits. Handle negative numbers appropriately." \
    "n = 1234" \
    "4321" \
    "Extract digits using modulo and build reversed number"

create_cpp_file \
    "$REVISION_DIR/01_Basics/palindrome_number.cpp" \
    "Check if Number is Palindrome" \
    "Check if a given number reads the same forwards and backwards." \
    "n = 121" \
    "true (or 1)" \
    "Reverse the number and compare with original"

create_cpp_file \
    "$REVISION_DIR/01_Basics/gcd_lcm.cpp" \
    "Find GCD and LCM" \
    "Given two numbers, find their Greatest Common Divisor and Least Common Multiple." \
    "a = 12, b = 18" \
    "GCD = 6, LCM = 36" \
    "Use Euclidean algorithm for GCD, then LCM = (a*b)/GCD"

create_cpp_file \
    "$REVISION_DIR/01_Basics/armstrong_number.cpp" \
    "Check Armstrong Number" \
    "Check if a number is Armstrong (sum of cubes of digits equals the number)." \
    "n = 153" \
    "true (1^3 + 5^3 + 3^3 = 153)" \
    "Extract digits, cube them, sum, and compare"

# ============ 02_PATTERNS ============
echo "Creating 02_Patterns files..."

create_cpp_file \
    "$REVISION_DIR/02_Patterns/pattern_1.cpp" \
    "Square Pattern" \
    "Print a square pattern with n rows and n columns using asterisks." \
    "n = 3" \
    "* * *\n* * *\n* * *" \
    "Nested loops: i for rows, j for columns"

create_cpp_file \
    "$REVISION_DIR/02_Patterns/pattern_2.cpp" \
    "Triangle Pattern" \
    "Print a right-angled triangle pattern." \
    "n = 4" \
    "*\n* *\n* * *\n* * * *" \
    "Outer loop for rows, inner loop prints i asterisks"

create_cpp_file \
    "$REVISION_DIR/02_Patterns/pattern_3.cpp" \
    "Pyramid Pattern" \
    "Print a pyramid pattern centered with spaces and asterisks." \
    "n = 3" \
    "  *\n * * *\n* * * * *" \
    "For each row, print spaces then asterisks"

# ============ 03_ARRAYS ============
echo "Creating 03_Arrays files..."

create_cpp_file \
    "$REVISION_DIR/03_Arrays/largest_element.cpp" \
    "Find Largest Element in Array" \
    "Given an array, find and return the largest element." \
    "arr = [1, 5, 3, 9, 2]" \
    "9" \
    "Iterate through and track maximum"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/second_largest.cpp" \
    "Find Second Largest Element" \
    "Find the second largest distinct element in an array." \
    "arr = [10, 5, 8, 12, 3]" \
    "10" \
    "Find max, then find max excluding that element"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/check_sorted.cpp" \
    "Check if Array is Sorted" \
    "Check if an array is sorted in non-decreasing order." \
    "arr = [1, 2, 2, 3]" \
    "true" \
    "Single pass: each element <= next element"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/remove_duplicates.cpp" \
    "Remove Duplicates from Sorted Array" \
    "Remove duplicate elements from a sorted array in-place. Return new length." \
    "arr = [1, 1, 2, 2, 3]" \
    "Length = 3, arr = [1, 2, 3, *, *]" \
    "Two pointers: one to track unique position, one to scan"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/left_rotate_by_one.cpp" \
    "Rotate Array Left by 1" \
    "Rotate array elements to the left by 1 position." \
    "arr = [1, 2, 3, 4]" \
    "[2, 3, 4, 1]" \
    "Store first element, shift all left, place first at end"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/left_rotate_by_k.cpp" \
    "Rotate Array Left by K" \
    "Rotate array elements to the left by k positions." \
    "arr = [1, 2, 3, 4, 5], k = 2" \
    "[3, 4, 5, 1, 2]" \
    "Use reversal: reverse first k, last n-k, then entire array"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/move_zeroes.cpp" \
    "Move All Zeroes to End" \
    "Move all zeros to the end while maintaining order of non-zero elements." \
    "arr = [0, 1, 0, 3, 12]" \
    "[1, 3, 12, 0, 0]" \
    "Two pointers: one for next non-zero position"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/linear_search.cpp" \
    "Linear Search" \
    "Search for a target element in an array and return its index." \
    "arr = [1, 5, 3, 9, 2], target = 9" \
    "3 (index of 9)" \
    "Simple iteration through array"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/union_of_arrays.cpp" \
    "Union of Two Sorted Arrays" \
    "Find union (all unique elements) of two sorted arrays." \
    "arr1 = [1, 2, 3], arr2 = [2, 3, 4]" \
    "[1, 2, 3, 4]" \
    "Two pointers: compare and merge while skipping duplicates"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/intersection_of_arrays.cpp" \
    "Intersection of Two Sorted Arrays" \
    "Find intersection (common elements) of two sorted arrays." \
    "arr1 = [1, 2, 3], arr2 = [2, 3, 4]" \
    "[2, 3]" \
    "Two pointers: include when elements match"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/missing_number.cpp" \
    "Find Missing Number" \
    "Given array of n-1 numbers from 1 to n, find the missing number." \
    "arr = [1, 2, 4, 5] (n = 5)" \
    "3" \
    "Sum of 1 to n minus sum of array elements"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/max_consecutive_ones.cpp" \
    "Maximum Consecutive Ones" \
    "Find the maximum count of consecutive 1s in a binary array." \
    "arr = [1, 1, 0, 1, 1, 1]" \
    "3" \
    "Track current count and max count"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/single_number.cpp" \
    "Single Number (XOR Property)" \
    "Find the element that appears once; all others appear twice." \
    "arr = [4, 1, 2, 1, 2]" \
    "4" \
    "XOR all elements: a XOR a = 0, a XOR 0 = a"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/longest_subarray_sum_k.cpp" \
    "Longest Subarray with Sum K" \
    "Find length of longest subarray with sum equal to k." \
    "arr = [10, 5, 2, 7, 1], k = 15" \
    "4 (subarray: 5, 2, 7, 1)" \
    "Use prefix sum with hashmap or two pointers"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/two_sum.cpp" \
    "Two Sum" \
    "Find two indices where array[i] + array[j] = target." \
    "arr = [2, 7, 11, 15], target = 9" \
    "[0, 1]" \
    "Use hashmap: store complements and check"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/sort_0_1_2.cpp" \
    "Sort Array with 0, 1, 2" \
    "Sort array containing only 0s, 1s, 2s in-place (Dutch National Flag)." \
    "arr = [2, 0, 1, 2, 1, 0]" \
    "[0, 0, 1, 1, 2, 2]" \
    "Three pointers: for 0s, 1s, 2s partitions"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/majority_element.cpp" \
    "Majority Element" \
    "Find element appearing more than n/2 times (guaranteed to exist)." \
    "arr = [3, 2, 3]" \
    "3" \
    "Boyer-Moore Voting Algorithm"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/kadane_algorithm.cpp" \
    "Maximum Subarray Sum (Kadane's Algorithm)" \
    "Find the maximum sum of any contiguous subarray." \
    "arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]" \
    "6 (subarray: [4, -1, 2, 1])" \
    "Track current sum and max sum, reset when negative"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/rearrange_positive_negative.cpp" \
    "Rearrange Positive and Negative Numbers" \
    "Rearrange array with positive and negative integers (order may vary)." \
    "arr = [1, -1, 3, -2]" \
    "[1, -1, 3, -2] (or any arrangement)" \
    "Partition around negative/positive or use extra space"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/next_permutation.cpp" \
    "Next Permutation" \
    "Generate the next lexicographically greater permutation." \
    "arr = [1, 2, 3]" \
    "[1, 3, 2]" \
    "Find rightmost pair to swap, then reverse suffix"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/leaders_in_array.cpp" \
    "Leaders in Array" \
    "Element is leader if all elements to its right are smaller." \
    "arr = [16, 17, 4, 3, 5, 2]" \
    "[17, 5, 2]" \
    "Traverse right to left, track max"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/longest_consecutive_sequence.cpp" \
    "Longest Consecutive Sequence" \
    "Find length of longest consecutive elements sequence (unordered array)." \
    "arr = [100, 4, 200, 1, 3, 2]" \
    "4 (sequence: 1, 2, 3, 4)" \
    "Use unordered_set for O(n) lookup"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/set_matrix_zero.cpp" \
    "Set Matrix Zeroes" \
    "If element is 0, set entire row and column to 0 (in-place)." \
    "matrix = [[1,1,1],[1,0,1],[1,1,1]]" \
    "[[1,0,1],[0,0,0],[1,0,1]]" \
    "Use first row/column as markers or extra space"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/rotate_matrix.cpp" \
    "Rotate Matrix 90 Degrees" \
    "Rotate a 2D matrix 90 degrees clockwise in-place." \
    "matrix = [[1,2],[3,4]]" \
    "[[3,1],[4,2]]" \
    "Transpose then reverse each row"

create_cpp_file \
    "$REVISION_DIR/03_Arrays/spiral_matrix.cpp" \
    "Spiral Matrix Traversal" \
    "Traverse matrix in spiral order (clockwise from outside to inside)." \
    "matrix = [[1,2,3],[4,5,6],[7,8,9]]" \
    "[1,2,3,6,9,8,7,4,5]" \
    "Track boundaries: top, bottom, left, right"

echo "✓ All files created successfully!"
echo "Location: $REVISION_DIR"
echo ""
echo "Structure created:"
find "$REVISION_DIR" -type f -name "*.cpp" | sort | nl
