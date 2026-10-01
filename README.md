# Minimum Cost Rectangle

## Problem

Bob has an n × m rectangular grid. Some cells are shaded (`*`) and the remaining cells are unshaded (`.`).

We need to cut out the smallest rectangle whose sides are parallel to the grid and which contains all the shaded cells.

## Approach

The required rectangle is the bounding rectangle of all the shaded cells.

While traversing the grid, we find:

- `minRow` → topmost row containing `*`
- `maxRow` → bottommost row containing `*`
- `minCol` → leftmost column containing `*`
- `maxCol` → rightmost column containing `*`

After finding these four boundaries, we print all cells between them.

### Why does this work?

Any rectangle containing all shaded cells must contain the topmost, bottommost, leftmost and rightmost shaded cells.

Therefore, the rectangle formed by these four boundaries is the minimum possible rectangle.

## Algorithm

1. Read `n` and `m`.
2. Read the grid.
3. Traverse every cell.
4. Whenever `*` is found, update the four boundaries.
5. Print the rectangle between these boundaries.

## Complexity

- **Time Complexity:** `O(n × m)`
- **Space Complexity:** `O(n × m)`

## Language

C++17

## Solution

The complete solution is available in `solution.cpp`.

## Screenshots

Screenshots of the problem, input, and output will be added here.
