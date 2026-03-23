# Recursion Notes

## When To Use Recursion

- A problem can be written in terms of a smaller version of itself.
- Tree traversal, divide and conquer, and backtracking naturally fit recursion.
- The recursive state is easier to express than iterative bookkeeping.

## Core Pattern

1. Define what the function returns or changes.
2. Write the base case.
3. Move closer to the base case in every call.
4. Trust the smaller subproblem.

## Common Styles

- Parameterized recursion:
  carry the answer as an argument.

- Functional recursion:
  return the answer from smaller calls.

- Two-pointer recursion:
  useful for strings and arrays.

## Watch For

- Deep recursion can overflow the stack.
- Naive recursion can repeat work, like Fibonacci.
- A weak base case causes infinite recursion.
