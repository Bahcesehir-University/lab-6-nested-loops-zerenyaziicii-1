# Lab: Nested Loops, Break & Continue Statements

## Course Information

| Field       | Details                                      |
|-------------|----------------------------------------------|
| Course      | CMP1001 – Introduction to Programming (C++)  |
| Lab Topic   | Nested Loops; Break and Continue Statements   |
| Duration    | 60 minutes                                   |
| File        | `MainProgram.cpp` (single file)              |

## Objective

By the end of this lab, you will be able to:

- Write nested `for` loops to process grids, patterns, and multi-dimensional data.
- Use the `break` statement to exit a loop early when a condition is met.
- Use the `continue` statement to skip specific iterations without stopping the loop.
- Combine nested loops with `break` and `continue` to solve practical problems such as searching, filtering, and pattern generation.

## Prerequisites

Before starting this lab, you should be comfortable with:

- Declaring and using variables (`int`, `double`, `bool`).
- Reading input with `cin` and printing output with `cout`.
- Writing basic `for` and `while` loops.
- Using `if` / `else` conditions.
- Working with one-dimensional arrays.

## What You Will Learn

- **Nested loops**: How the inner loop completes all its iterations for each single iteration of the outer loop, and how to reason about total iteration counts.
- **`break`**: How to exit a loop immediately when a goal is achieved (e.g., finding a value in an array or grid).
- **`continue`**: How to skip unwanted iterations (e.g., filtering out invalid data) while letting the loop proceed.
- **Combining concepts**: Using boolean flags to propagate a `break` from an inner loop to an outer loop; using `continue` for data filtering before accumulation.

## Lab Structure

The lab is divided into four progressive sections:

### Section 1 — Warm-Up (5–10 minutes)
Simple loop exercises to refresh your memory. You will write a countdown loop and a summation loop.

### Section 2 — Core Concepts (10–15 minutes)
Short commented explanations of nested loops, `break`, and `continue`, each followed by a small hands-on task. This section builds the vocabulary you need for the rest of the lab.

### Section 3 — Guided Exercises (25–30 minutes)
Six exercises of increasing difficulty that require you to apply nested loops, `break`, and `continue` to real problems: multiplication tables, triangle patterns, 2D grid searching, score filtering, and prime checking.

### Section 4 — Challenge (10 minutes)
Two harder problems that combine multiple concepts: a diamond star pattern and a password-attempt simulation system.

## How to Compile & Run

Open a terminal in the directory containing `MainProgram.cpp` and run:

```bash
g++ MainProgram.cpp -o lab
./lab
```

On Windows with MinGW:

```bash
g++ MainProgram.cpp -o lab.exe
lab.exe
```

Compile frequently as you complete each exercise to catch errors early.

## Submission Instructions

1. Complete all `// TODO:` sections in `MainProgram.cpp`.
2. Make sure your code compiles without errors.
3. Test each exercise and verify your output matches the expected output in the comments.
4. Submit your completed `MainProgram.cpp` via GitHub Classroom (push to your assignment repository) before the deadline.
5. Do **not** rename the file or add extra files.

## Grading Criteria

| Criterion        | Weight | Description                                                        |
|------------------|--------|--------------------------------------------------------------------|
| **Correctness**  | 50%    | Code produces the expected output for all exercises.               |
| **Code Quality** | 20%    | Clean formatting, meaningful variable names, no unnecessary code.  |
| **Completion**   | 20%    | All TODO sections are attempted (Sections 1–3).                    |
| **Challenge**    | 10%    | Section 4 challenge problems are attempted and reasonably correct. |

## Estimated Time Breakdown

| Section                        | Time        |
|--------------------------------|-------------|
| Section 1 — Warm-Up           | 5–10 min    |
| Section 2 — Core Concepts     | 10–15 min   |
| Section 3 — Guided Exercises  | 25–30 min   |
| Section 4 — Challenge         | 10 min      |
| **Total**                      | **~60 min** |

## Tips for Students

- **Compile after every exercise.** Don't wait until the end — small errors are much easier to fix one at a time.
- **Trace through your nested loops by hand.** Write down the values of the outer and inner loop variables for the first few iterations. This helps you understand the pattern before you code it.
- **`break` only exits ONE loop.** If you are inside a nested loop and use `break`, you only leave the innermost loop. Use a boolean flag (like `bool found = false;`) to also control the outer loop.
- **`continue` does NOT exit the loop.** It skips to the next iteration. If you want to stop entirely, use `break` instead.
- **Test with different inputs.** Don't just use the example values — try edge cases like 1, 2, or very small/large numbers to make sure your logic is solid.
- **Read the expected output carefully.** Spacing and formatting matter. Compare your output character by character if something looks off.
- **Ask for help if you're stuck for more than 5 minutes on one exercise.** It's better to move on and come back than to lose time.
