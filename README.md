*This project has been created as part of the 42 curriculum by aluslu and mbichet.*

# Push_swap

## Description
The goal of this project is to sort a list of numbers using two stacks (Stack A and Stack B) and a limited set of instructions. The challenge is to complete the sort using the fewest moves possible.

To achieve this, we implemented three different algorithms. A smart system allows the program to choose the best algorithm based on how disorganized the list is.

## Instructions

### Compilation
Use the Makefile to compile the project:
```bash
make
```

### Usage

Run the program with a list of numbers and a "flag" to choose the algorithm:

* `--simple`: Bubble Sort.
* `--medium`: Chunk-based Sort.
* `--complexe`: Radix Sort.
* `--adaptive`: Automatically chooses the most efficient algorithm based on the disorder index.
* `--bench`: Displays sorting statistics (total moves).

**Example:**

```bash
./push_swap --medium --bench $(shuf -n 500 -i 1-1000)
```

## Algorithms and Complexity

Here is an explanation of our choices and the performance of each algorithm:

### 1. Bubble Sort (`--simple`)

* **Logic:** Compares adjacent numbers and swaps them if they are in the wrong order.
* **Complexity:** O(n^2)
* **Why?** It is a slow algorithm for large lists but very simple to implement for testing and very small sets.

### 2. Chunk-based Sort (`--medium`)

* **Logic:** The list is divided into several groups (chunks). Each group is sent one by one to Stack B and then brought back to Stack A in the correct order.
* **Complexity:** O(n\sqrt{n})
* **Why?** This algorithm gives the best results for sorting 100 numbers because it optimizes stack rotations.

### 3. Radix Sort (`--complexe`)

* **Logic:** A binary sorting algorithm. It checks each bit of the numbers (0 or 1) to decide whether to move the number to the other stack or not.
* **Complexity:** O(n \log(n))
* **Why?** For very large lists (500+ numbers), this is the most stable algorithm. Its performance does not depend on the initial order of the numbers.

## Contributions

#### Sorting Algorithms

* Simple: `(mbichet)`
* Medium: `(aluslu + mbichet)`
* Complex: `(mbichet)`

#### Parsing

* Main: `(aluslu)`
* Input management: `(aluslu)`
* Flag management: `(aluslu)`

#### Others

* Makefile: `(aluslu + mbichet)`
* Push_swap logic: `(aluslu + mbichet)`
* README: `(aluslu + mbichet)`

## Resources

* **Wikipedia:** Used to understand complexity formulas and the logic behind Radix and Bubble Sort.
* **AI (Artificial Intelligence):**
* Helped us understand how to use bits for the Radix algorithm.
* Helped us translate and structure this README file.
