# Hashing Notes

## Main Use Cases

- Frequency counting
- Fast lookup
- Prefix sum storage
- Pair and subarray optimization

## Data Structure Choice

- Array frequency table:
  fastest when key range is small and fixed.

- `unordered_map`:
  average `O(1)` lookup and insert, useful for general keys.

- `map`:
  `O(log n)` operations and sorted keys.

## Common Problems

- Count frequency of numbers
- Count frequency of characters
- Majority element
- Two sum style lookups
- Prefix sum based subarray problems

## Watch For

- Large key range can make arrays impossible.
- `unordered_map` has higher constant factors.
- Missing default cases for unseen keys.
