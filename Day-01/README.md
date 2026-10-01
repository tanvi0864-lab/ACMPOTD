# Day 01 - Minimum Cost Rectangle

## Problem

Bob has an `n × m` rectangular grid. Some cells are shaded with `*` and the remaining cells contain `.`.

We have to find the smallest rectangle that contains all the shaded cells. The sides of the rectangle must be parallel to the sides of the grid.

---

## Approach

The required rectangle is the **bounding rectangle** of all the `*` cells.

While traversing the complete grid, we keep track of four boundaries:

- `minRow` → topmost row containing `*`
- `maxRow` → bottommost row containing `*`
- `minCol` → leftmost column containing `*`
- `maxCol` → rightmost column containing `*`

After finding these four boundaries, we print all cells between them.

---

## Algorithm

1. Read `n` and `m`.
2. Read the complete grid.
3. Traverse every cell of the grid.
4. If the current cell contains `*`, update:
   - `minRow`
   - `maxRow`
   - `minCol`
   - `maxCol`
5. After the traversal, print the sub-grid from `minRow` to `maxRow` and from `minCol` to `maxCol`.

---

## Why Does This Work?

Every valid rectangle containing all shaded cells must contain:

- the topmost shaded cell,
- the bottommost shaded cell,
- the leftmost shaded cell,
- the rightmost shaded cell.

Therefore, the smallest possible rectangle is exactly the rectangle formed by these four boundaries.

---

## Complexity

### Time Complexity

`O(n × m)`

We visit every cell of the grid once.

### Space Complexity

`O(n × m)`

We store the input grid.

---

## Language

**C++17**

---

## Solution

The complete implementation is available in [`solution.cpp`](solution.cpp).

---

## Sample

### Input

```text
5 6
......
..*...
....*.
.*....
......
