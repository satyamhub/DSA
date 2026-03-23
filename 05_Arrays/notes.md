# Arrays Notes

## Common Patterns

- Linear scan:
  use when one pass is enough to track answer or state.

- Two pointers:
  useful for sorted arrays, partitioning, and in-place updates.

- Sliding window:
  useful for subarray problems, especially when all values are non-negative.

- Prefix sum + hashing:
  useful for subarray sum problems when negatives are present.

- Frequency counting:
  useful for duplicates, majority, and remainder-based pair problems.

## How To Approach Array Problems

1. Check whether the array is sorted.
2. Check whether in-place modification is required.
3. Ask whether brute force is enough for understanding first.
4. Then reduce time using hashing, two pointers, or prefix sums.

## Common Edge Cases

- Empty array
- Single element
- All elements same
- Negative numbers
- Duplicate values
- Already sorted input

## Revision Tip

- Solve brute first.
- Then ask which pattern removes nested loops.
