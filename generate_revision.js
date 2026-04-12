#!/usr/bin/env node

/**
 * DSA Revision Workspace Generator (Node.js version)
 * Creates a structured C++ practice workspace with 31 template files
 */

const fs = require("fs");
const path = require("path");

// Configuration
const REVISION_DIR = path.join(__dirname, "Revision");

// Template structure
const problems = {
  "01_Basics": [
    {
      name: "reverse_number.cpp",
      title: "Reverse a Number",
      statement:
        "Given an integer, reverse its digits. Handle negative numbers appropriately.",
      input: "n = 1234",
      output: "4321",
      hint: "Extract digits using modulo and build reversed number",
    },
    {
      name: "palindrome_number.cpp",
      title: "Check if Number is Palindrome",
      statement:
        "Check if a given number reads the same forwards and backwards.",
      input: "n = 121",
      output: "true (or 1)",
      hint: "Reverse the number and compare with original",
    },
    {
      name: "gcd_lcm.cpp",
      title: "Find GCD and LCM",
      statement:
        "Given two numbers, find their Greatest Common Divisor and Least Common Multiple.",
      input: "a = 12, b = 18",
      output: "GCD = 6, LCM = 36",
      hint: "Use Euclidean algorithm for GCD, then LCM = (a*b)/GCD",
    },
    {
      name: "armstrong_number.cpp",
      title: "Check Armstrong Number",
      statement:
        "Check if a number is Armstrong (sum of cubes of digits equals the number).",
      input: "n = 153",
      output: "true (1^3 + 5^3 + 3^3 = 153)",
      hint: "Extract digits, cube them, sum, and compare",
    },
  ],
  "02_Patterns": [
    {
      name: "pattern_1.cpp",
      title: "Square Pattern",
      statement:
        "Print a square pattern with n rows and n columns using asterisks.",
      input: "n = 3",
      output: "* * *\n* * *\n* * *",
      hint: "Nested loops: i for rows, j for columns",
    },
    {
      name: "pattern_2.cpp",
      title: "Triangle Pattern",
      statement: "Print a right-angled triangle pattern.",
      input: "n = 4",
      output: "*\n* *\n* * *\n* * * *",
      hint: "Outer loop for rows, inner loop prints i asterisks",
    },
    {
      name: "pattern_3.cpp",
      title: "Pyramid Pattern",
      statement: "Print a pyramid pattern centered with spaces and asterisks.",
      input: "n = 3",
      output: "  *\n * * *\n* * * * *",
      hint: "For each row, print spaces then asterisks",
    },
  ],
  "03_Arrays": [
    {
      name: "largest_element.cpp",
      title: "Find Largest Element in Array",
      statement: "Given an array, find and return the largest element.",
      input: "arr = [1, 5, 3, 9, 2]",
      output: "9",
      hint: "Iterate through and track maximum",
    },
    {
      name: "second_largest.cpp",
      title: "Find Second Largest Element",
      statement: "Find the second largest distinct element in an array.",
      input: "arr = [10, 5, 8, 12, 3]",
      output: "10",
      hint: "Find max, then find max excluding that element",
    },
    {
      name: "check_sorted.cpp",
      title: "Check if Array is Sorted",
      statement: "Check if an array is sorted in non-decreasing order.",
      input: "arr = [1, 2, 2, 3]",
      output: "true",
      hint: "Single pass: each element <= next element",
    },
    {
      name: "remove_duplicates.cpp",
      title: "Remove Duplicates from Sorted Array",
      statement:
        "Remove duplicate elements from a sorted array in-place. Return new length.",
      input: "arr = [1, 1, 2, 2, 3]",
      output: "Length = 3, arr = [1, 2, 3, *, *]",
      hint: "Two pointers: one to track unique position, one to scan",
    },
    {
      name: "left_rotate_by_one.cpp",
      title: "Rotate Array Left by 1",
      statement: "Rotate array elements to the left by 1 position.",
      input: "arr = [1, 2, 3, 4]",
      output: "[2, 3, 4, 1]",
      hint: "Store first element, shift all left, place first at end",
    },
    {
      name: "left_rotate_by_k.cpp",
      title: "Rotate Array Left by K",
      statement: "Rotate array elements to the left by k positions.",
      input: "arr = [1, 2, 3, 4, 5], k = 2",
      output: "[3, 4, 5, 1, 2]",
      hint: "Use reversal: reverse first k, last n-k, then entire array",
    },
    {
      name: "move_zeroes.cpp",
      title: "Move All Zeroes to End",
      statement:
        "Move all zeros to the end while maintaining order of non-zero elements.",
      input: "arr = [0, 1, 0, 3, 12]",
      output: "[1, 3, 12, 0, 0]",
      hint: "Two pointers: one for next non-zero position",
    },
    {
      name: "linear_search.cpp",
      title: "Linear Search",
      statement:
        "Search for a target element in an array and return its index.",
      input: "arr = [1, 5, 3, 9, 2], target = 9",
      output: "3 (index of 9)",
      hint: "Simple iteration through array",
    },
    {
      name: "union_of_arrays.cpp",
      title: "Union of Two Sorted Arrays",
      statement: "Find union (all unique elements) of two sorted arrays.",
      input: "arr1 = [1, 2, 3], arr2 = [2, 3, 4]",
      output: "[1, 2, 3, 4]",
      hint: "Two pointers: compare and merge while skipping duplicates",
    },
    {
      name: "intersection_of_arrays.cpp",
      title: "Intersection of Two Sorted Arrays",
      statement: "Find intersection (common elements) of two sorted arrays.",
      input: "arr1 = [1, 2, 3], arr2 = [2, 3, 4]",
      output: "[2, 3]",
      hint: "Two pointers: include when elements match",
    },
    {
      name: "missing_number.cpp",
      title: "Find Missing Number",
      statement:
        "Given array of n-1 numbers from 1 to n, find the missing number.",
      input: "arr = [1, 2, 4, 5] (n = 5)",
      output: "3",
      hint: "Sum of 1 to n minus sum of array elements",
    },
    {
      name: "max_consecutive_ones.cpp",
      title: "Maximum Consecutive Ones",
      statement: "Find the maximum count of consecutive 1s in a binary array.",
      input: "arr = [1, 1, 0, 1, 1, 1]",
      output: "3",
      hint: "Track current count and max count",
    },
    {
      name: "single_number.cpp",
      title: "Single Number (XOR Property)",
      statement: "Find the element that appears once; all others appear twice.",
      input: "arr = [4, 1, 2, 1, 2]",
      output: "4",
      hint: "XOR all elements: a XOR a = 0, a XOR 0 = a",
    },
    {
      name: "longest_subarray_sum_k.cpp",
      title: "Longest Subarray with Sum K",
      statement: "Find length of longest subarray with sum equal to k.",
      input: "arr = [10, 5, 2, 7, 1], k = 15",
      output: "4 (subarray: 5, 2, 7, 1)",
      hint: "Use prefix sum with hashmap or two pointers",
    },
    {
      name: "two_sum.cpp",
      title: "Two Sum",
      statement: "Find two indices where array[i] + array[j] = target.",
      input: "arr = [2, 7, 11, 15], target = 9",
      output: "[0, 1]",
      hint: "Use hashmap: store complements and check",
    },
    {
      name: "sort_0_1_2.cpp",
      title: "Sort Array with 0, 1, 2",
      statement:
        "Sort array containing only 0s, 1s, 2s in-place (Dutch National Flag).",
      input: "arr = [2, 0, 1, 2, 1, 0]",
      output: "[0, 0, 1, 1, 2, 2]",
      hint: "Three pointers: for 0s, 1s, 2s partitions",
    },
    {
      name: "majority_element.cpp",
      title: "Majority Element",
      statement:
        "Find element appearing more than n/2 times (guaranteed to exist).",
      input: "arr = [3, 2, 3]",
      output: "3",
      hint: "Boyer-Moore Voting Algorithm",
    },
    {
      name: "kadane_algorithm.cpp",
      title: "Maximum Subarray Sum (Kadane's Algorithm)",
      statement: "Find the maximum sum of any contiguous subarray.",
      input: "arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]",
      output: "6 (subarray: [4, -1, 2, 1])",
      hint: "Track current sum and max sum, reset when negative",
    },
    {
      name: "rearrange_positive_negative.cpp",
      title: "Rearrange Positive and Negative Numbers",
      statement:
        "Rearrange array with positive and negative integers (order may vary).",
      input: "arr = [1, -1, 3, -2]",
      output: "[1, -1, 3, -2] (or any arrangement)",
      hint: "Partition around negative/positive or use extra space",
    },
    {
      name: "next_permutation.cpp",
      title: "Next Permutation",
      statement: "Generate the next lexicographically greater permutation.",
      input: "arr = [1, 2, 3]",
      output: "[1, 3, 2]",
      hint: "Find rightmost pair to swap, then reverse suffix",
    },
    {
      name: "leaders_in_array.cpp",
      title: "Leaders in Array",
      statement: "Element is leader if all elements to its right are smaller.",
      input: "arr = [16, 17, 4, 3, 5, 2]",
      output: "[17, 5, 2]",
      hint: "Traverse right to left, track max",
    },
    {
      name: "longest_consecutive_sequence.cpp",
      title: "Longest Consecutive Sequence",
      statement:
        "Find length of longest consecutive elements sequence (unordered array).",
      input: "arr = [100, 4, 200, 1, 3, 2]",
      output: "4 (sequence: 1, 2, 3, 4)",
      hint: "Use unordered_set for O(n) lookup",
    },
    {
      name: "set_matrix_zero.cpp",
      title: "Set Matrix Zeroes",
      statement: "If element is 0, set entire row and column to 0 (in-place).",
      input: "matrix = [[1,1,1],[1,0,1],[1,1,1]]",
      output: "[[1,0,1],[0,0,0],[1,0,1]]",
      hint: "Use first row/column as markers or extra space",
    },
    {
      name: "rotate_matrix.cpp",
      title: "Rotate Matrix 90 Degrees",
      statement: "Rotate a 2D matrix 90 degrees clockwise in-place.",
      input: "matrix = [[1,2],[3,4]]",
      output: "[[3,1],[4,2]]",
      hint: "Transpose then reverse each row",
    },
    {
      name: "spiral_matrix.cpp",
      title: "Spiral Matrix Traversal",
      statement:
        "Traverse matrix in spiral order (clockwise from outside to inside).",
      input: "matrix = [[1,2,3],[4,5,6],[7,8,9]]",
      output: "[1,2,3,6,9,8,7,4,5]",
      hint: "Track boundaries: top, bottom, left, right",
    },
  ],
};

const cppTemplate = (problem) => `#include <bits/stdc++.h>
using namespace std;

/*
Problem: ${problem.title}

${problem.statement}

Example:
Input: ${problem.input}
Output: ${problem.output}

Approach Hint: ${problem.hint}
*/

void solve() {
    // Write your solution here
}

int main() {
    // Test cases
    solve();
    return 0;
}
`;

/**
 * Create directories and files
 */
function generateWorkspace() {
  console.log("🚀 Generating DSA Revision Workspace...\n");

  let fileCount = 0;

  for (const [folder, fileList] of Object.entries(problems)) {
    const folderPath = path.join(REVISION_DIR, folder);

    // Create folder
    if (!fs.existsSync(folderPath)) {
      fs.mkdirSync(folderPath, { recursive: true });
      console.log(`📁 Created directory: ${folder}`);
    }

    // Create files
    for (const problem of fileList) {
      const filePath = path.join(folderPath, problem.name);
      const content = cppTemplate(problem);

      fs.writeFileSync(filePath, content, "utf8");
      fileCount++;
      console.log(`   ✓ ${problem.name}`);
    }
  }

  console.log(`\n✨ Workspace generated successfully!`);
  console.log(`📊 Total files created: ${fileCount}`);
  console.log(`📍 Location: ${REVISION_DIR}\n`);

  // Print structure
  console.log("📋 Structure:");
  printStructure();
}

/**
 * Print directory structure
 */
function printStructure() {
  for (const [folder, fileList] of Object.entries(problems)) {
    console.log(`\n${folder}/ (${fileList.length} files)`);
    fileList.forEach((file) => {
      console.log(`  └─ ${file.name}`);
    });
  }
}

// Run generator
generateWorkspace();
