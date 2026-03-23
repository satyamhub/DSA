# Sorting Notes

## How To Choose

- `selection_sort.cpp`: learn minimum selection and in-place sorting.
- `bubble_sort.cpp`: learn adjacent swaps and early exit.
- `insertion_sort.cpp`: good for nearly sorted arrays and small inputs.
- `merge-sort.cpp`: guaranteed `O(n log n)` time.
- `quick_sort.cpp`: strong average performance, but worst-case `O(n^2)`.

## Comparison

- Selection Sort
  Time: `O(n^2)`
  Space: `O(1)`
  Stable: No

- Bubble Sort
  Time: worst `O(n^2)`, best `O(n)`
  Space: `O(1)`
  Stable: Yes

- Insertion Sort
  Time: worst `O(n^2)`, best `O(n)`
  Space: `O(1)`
  Stable: Yes

- Merge Sort
  Time: `O(n log n)`
  Space: `O(n)`
  Stable: Yes

- Quick Sort
  Time: average `O(n log n)`, worst `O(n^2)`
  Space: average `O(log n)`
  Stable: No
