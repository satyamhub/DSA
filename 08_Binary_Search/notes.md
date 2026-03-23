# Binary Search Notes

## When To Use Binary Search

- The data is sorted.
- The search space can be divided into two halves.
- You need the first valid or last valid position.
- You can answer a yes/no condition on a monotonic range.

## Core Loop

- Maintain `low` and `high`.
- Compute `mid = low + (high - low) / 2`.
- Eliminate one half every step.

## Common Variants

- Exact match
- Lower bound
- Upper bound
- First occurrence / last occurrence
- Search insert position
- Binary search on answer

## Watch For

- Infinite loops from wrong boundary updates
- Overflow if using `(low + high) / 2`
- Forgetting whether `high` is inclusive or exclusive
- Using binary search on unsorted data
