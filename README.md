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
Use the to create checker (bonus)
```bash
make bonus
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
ra
ra
ra
ra
ra
ra
...
pa
rrb
pa
rrb
rrb
pa
pa
pa
[bench] disorder: 49.70%
[bench] strategy: Medium / O(n√n)
[bench] total ops: 5909
[bench] sa: 0 sb: 0 ss: 0 pa: 500 pb: 500
[bench] ra: 3600 rb: 656 rr: 0 rra: 0 rrb: 653 rrr: 0
```
Run the checker whit a list of numbers

**Example:**
```bash
./checker 4 5 2 9 3
pb
pa
ra
KO
```
```bash
shuf -i 0-9999 -n 500 > args.txt ; ./push_swap --bench  $(cat args.txt) 2>bench.txt | ./checker $(cat args.txt)
OK
```

## Algorithms 

Here is an explanation of our choices and the performance of each algorithm:

### 1. Bubble Sort (`--simple`)

* **Logic:** Compares adjacent numbers and swaps them if they are in the wrong order.
* **Complexity:** O(n^2)
* **Why?** It is a slow algorithm for large lists but very simple to implement for testing and very small sets.

### 2. Chunk-based Sort (`--medium`)

* **Logic:** The list is divided into several groups (chunks). Each group is sent one by one to Stack B and then brought back to Stack A in the correct order.
* **Complexity:** O(n√n)
* **Why?** This algorithm gives the best results for sorting 100 numbers because it optimizes stack rotations.

### 3. Radix Sort (`--complexe`)

* **Logic:** A binary sorting algorithm. It checks each bit of the numbers (0 or 1) to decide whether to move the number to the other stack or not.
* **Complexity:** O(n \log(n))
* **Why?** For very large lists (500+ numbers), this is the most stable algorithm. Its performance does not depend on the initial order of the numbers.

## Contributions

#### Sorting Algorithms

* Simple: `(mbichet)`
* Medium: `(aluslu + mbichet)`
* Complex: `(aluslu + mbichet)`

#### Parsing

* Main: `(aluslu + mbichet)`
* Input management: `(aluslu)`
* Flag management: `(aluslu)`

#### Bonus

* Checker `(aluslu + mbichet)`


#### Others

* Makefile: `(aluslu + mbichet)`
* Push_swap.h : `(aluslu + mbichet)`
* README: `(aluslu + mbichet)`


## Resources

* **Wikipedia:** Used to understand complexity formulas and the logic behind Radix and Bubble Sort.
* **AI (Artificial Intelligence):**
   * Helped us understand how to use bits for the Radix algorithm.
   * Helped us translate and structure this README file.
