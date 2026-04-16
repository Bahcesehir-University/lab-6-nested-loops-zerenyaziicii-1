// ============================================================================
//  LAB: Nested Loops, Break & Continue Statements
//  Course: CMP1001 - Introduction to Programming (C++)
//  Duration: 60 minutes
// ============================================================================
//
//  DESCRIPTION:
//    In this lab you will practice nested loops (a loop inside another loop)
//    and learn how to control loop execution using 'break' and 'continue'.
//    These are essential tools for working with grids, patterns, searching,
//    and filtering data.
//
//  INSTRUCTIONS:
//    1. Read each section carefully before writing code.
//    2. Complete every // TODO: section.
//    3. Compile often to catch errors early:
//         g++ MainProgram.cpp -o lab && ./lab
//    4. Test your output against the expected output shown in comments.
//    5. Do NOT change the provided code structure unless instructed.
//
// ============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // ========================================================================
    //  SECTION 1 — WARM-UP  (5-10 minutes)
    //  Goal: Refresh your memory on basic loops and output.
    // ========================================================================

    cout << "===== SECTION 1: WARM-UP =====" << endl;

    // -----------------------------------------------------------------------
    // Exercise 1.1: Simple Countdown
    //   Print a countdown from 5 to 1, each number on the same line
    //   separated by a space, then print "Go!" on a new line.
    //
    //   Expected output:
    //     5 4 3 2 1
    //     Go!
    // -----------------------------------------------------------------------

    // TODO: Write a for loop that counts from 5 down to 1
    //       Print each number followed by a space, then "Go!" on a new line.
    for (int i = 5; i >= 1; i--){
        cout << i << " ";
    }
    cout << endl;
    cout << "Go!";


    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 1.2: Sum of Numbers
    //   Ask the user for a positive integer N.
    //   Calculate the sum of all integers from 1 to N using a loop.
    //   Print the result.
    //
    //   Example: If N = 4, output: "Sum = 10"
    // -----------------------------------------------------------------------

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // TODO: Use a loop to calculate the sum of 1 + 2 + ... + N
    //       Store the result in a variable called 'sum' and print it.
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    cout << "Sum: " << sum << endl;


    cout << endl;

    // ========================================================================
    //  SECTION 2 — CORE CONCEPTS  (10-15 minutes)
    //  Goal: Understand nested loops, break, and continue through
    //        short examples and small tasks.
    // ========================================================================

    cout << "===== SECTION 2: CORE CONCEPTS =====" << endl;

    // -----------------------------------------------------------------------
    //  CONCEPT A: Nested Loops
    //
    //  A nested loop is a loop inside another loop.
    //  The INNER loop runs completely for EACH iteration of the OUTER loop.
    //
    //  Example: Print a 3x3 grid of stars
    //
    // for (int row = 0; row < 3; row++) {
    // for (int col = 0; col < 3; col++) {
    //       cout << "* ";
    //   }
    //  cout << endl;
    //    }
    //
    //  Output:
    //    * * *
    //    * * *
    //    * * *
    //
    //  Notice: The inner loop (col) resets and runs 3 times for EVERY
    //          iteration of the outer loop (row). Total prints = 3 x 3 = 9.
    // -----------------------------------------------------------------------

    // Exercise 2.1: Counting Iterations
    //   Using nested loops, count how many times the inner loop body executes
    //   when the outer loop runs 4 times and the inner loop runs 5 times.
    //   Print the count at the end.
    //
    //   Expected output: "Total iterations: 20"

    // TODO: Create nested loops (outer: 4 iterations, inner: 5 iterations).
    //       Use a counter variable to count how many times the inner body runs.
    //       Print the total count.
    //nested loopta iki for var ikisinde de farklı değişkenler kullan
    cout << "Exercise 2.1" << endl;
    int outer_loop_counter = 0;
    int inner_loop_counter = 0;
    int total_loop_counter = 0;
    for (int row = 0; row <= 4; row++){
        outer_loop_counter ++;
        total_loop_counter ++;
        for(int col = 0; col < 5; col++){
            inner_loop_counter ++;
             total_loop_counter ++;
        }
    }
    cout << " outer:" << outer_loop_counter << endl;
    cout << "inner:" <<  inner_loop_counter << endl;
    cout << "total:" << total_loop_counter << endl;


    cout << endl;

    // -----------------------------------------------------------------------
    //  CONCEPT B: The 'break' Statement
    //
    //  'break' immediately exits the NEAREST enclosing loop.
    //  It does NOT exit outer loops — only the one it's inside.
    //
    //  Example:
    //    for (int i = 0; i < 10; i++) {
    //        if (i == 5) break;      // stops the loop when i reaches 5
    //        cout << i << " ";
    //    }
    //    // Output: 0 1 2 3 4
    // -----------------------------------------------------------------------

    // Exercise 2.2: Find and Stop
    //   Given the array below, use a loop to find the first negative number.
    //   Print it and stop searching immediately using 'break'.
    //
    //   Expected output: "First negative number: -3"
cout << "Exercise 2.2" << endl;
    int data[] = {7, 12, 4, 9, -3, 8, -1, 6};
    int dataSize = 8;
    
    for ( int i = 0; i < dataSize  ; i++){
    if (data [i] < 0 ){
        cout << "First Negative number: " << data[i];
        break;
    }
}
    // TODO: Loop through the 'data' array.
    //       When you find the first negative number, print it and break.


    cout << endl;

    // -----------------------------------------------------------------------
    //  CONCEPT C: The 'continue' Statement
    //
    //  'continue' skips the REST of the current iteration and jumps
    //  to the next iteration of the loop. The loop does NOT stop.
    //
    //  Example:
    //    for (int i = 1; i <= 6; i++) {
    //        if (i % 2 == 0) continue;   // skip even numbers
    //        cout << i << " ";
    //    }
    //    // Output: 1 3 5
    // -----------------------------------------------------------------------

    // Exercise 2.3: Skip Multiples of 3
    //   Print all numbers from 1 to 20, but SKIP any number
    //   that is a multiple of 3. Use 'continue'.
    //
    //   Expected output: 1 2 4 5 7 8 10 11 13 14 16 17 19 20

    // TODO: Write a loop from 1 to 20.
    //       Use 'continue' to skip multiples of 3.
    //       Print the remaining numbers on one line separated by spaces.

cout << "Exercise 2.3" << endl;
for(int i = 1; i <= 20; i++){
    if (i % 3 == 0) continue;
    cout << i << " ";
}

    cout << endl << endl;

    // ========================================================================
    //  SECTION 3 — GUIDED EXERCISES  (25-30 minutes)
    //  Goal: Apply nested loops, break, and continue to solve problems.
    // ========================================================================

    cout << "===== SECTION 3: GUIDED EXERCISES =====" << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.1: Multiplication Table
    //   Print a multiplication table from 1 to 5.
    //   Use nested loops: outer for rows, inner for columns.
    //   Format each number in a 4-character wide field.
    //
    //   Expected output:
    //      1   2   3   4   5
    //      2   4   6   8  10
    //      3   6   9  12  15
    //      4   8  12  16  20
    //      5  10  15  20  25
    //
    //   Hint: Use cout.width(4) before printing each product,
    //         or simply print "\t" for tab-separated output.
    // -----------------------------------------------------------------------

    cout << "--- Multiplication Table (1-5) ---" << endl;

    // TODO: Write nested loops to produce the multiplication table above.
    for(int k = 1 ; k <= 5 ; k++){
        for( int z = 1; z <= 5; z++){
            cout << k * z << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.2: Right Triangle Pattern
    //   Ask the user for a height (integer between 1 and 10).
    //   Print a right triangle of stars.
    //
    //   Example for height = 5:
    //     *
    //     **
    //     ***
    //     ****
    //     *****
    // -----------------------------------------------------------------------

    cout << "--- Right Triangle ---" << endl;
    int height;
    cout << "Enter triangle height (1-10): ";
    
    cin >> height;

    // TODO: Use nested loops to print the right triangle pattern.
    //       Outer loop: controls the row (1 to height)
    //       Inner loop: prints '*' characters for that row
for (int i = 1; i <= height; i++){
        for (int j = 1; j <= i; j++){
        cout << "*";
        }
        cout << endl;
    }
    // bunun pyramid halini sorucak

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.3: Number Triangle with Row Sum 
    //   Print the following pattern for N rows (ask user for N, 1-7):
    //
    //   Example for N = 5:
    //     1                     -> Sum = 1
    //     1 2                   -> Sum = 3
    //     1 2 3                 -> Sum = 6
    //     1 2 3 4               -> Sum = 10
    //     1 2 3 4 5             -> Sum = 15
    //
    //   Each row prints numbers from 1 up to the row number,
    //   then prints the sum of that row at the end.
    // -----------------------------------------------------------------------

    cout << "--- Number Triangle with Row Sum ---" << endl;
    int rows;
    cout << "Enter number of rows (1-7): ";
    cin >> rows;

    // TODO: Use nested loops.
    //       Outer loop: row = 1 to 'rows'
    //       Inner loop: col = 1 to 'row'
    //         - Print each number
    //         - Accumulate the sum for that row
    //       After inner loop: print "-> Sum = " and the row's sum
      
 for(int i = 1; i <= rows; i++ ){
    int sum = 0;
    if (rows >= 8){
        cout << "Enter number between 1-7:";
     break;
    }
     for(int j = 1; j <= i; j++ ){
         cout << j << " ";
         sum += j;
     }
     cout << setw(20)<< " -> Sum = " << sum << endl;
 }

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.4: Search a 2D Grid
    //   A 3x4 grid of integers is provided below.
    //   Ask the user for a target number to search for.
    //   Use nested loops to find it. If found, print its position (row, col)
    //   and STOP searching (use break).
    //   If not found, print "Not found."
    //
    //   Grid:
    //     10  25  33  47
    //     51  62  78  84
    //     90  15  42  68
    // -----------------------------------------------------------------------

    cout << "--- 2D Grid Search ---" << endl;

    int grid[3][4] = {
        {10, 25, 33, 47},
        {51, 62, 78, 84},
        {90, 15, 42, 68}
    };

    int target;
    cout << "Enter a number to search for: ";
    cin >> target;

    // TODO: Use nested loops to search the grid for 'target'.
    //       If found, print "Found <target> at row <r>, col <c>" and stop.
    //       If not found after checking all elements, print "Not found."
    //
    //   Hint: You will need a boolean flag (e.g., 'found') to track whether
    //         the value was found across both loops, because 'break' only
    //         exits the inner loop.


    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.5: Filter and Sum with Continue
    //   Given an array of 10 test scores, calculate the average
    //   but SKIP any score below 50 (invalid/failed attempts).
    //   Use 'continue' to skip invalid scores.
    //
    //   Scores: 85, 42, 91, 37, 78, 65, 29, 88, 95, 44
    //
    //   Valid scores: 85, 91, 78, 65, 88, 95  (6 scores)
    //   Expected average: 83.67 (approximately)
    // -----------------------------------------------------------------------

    cout << "--- Filtered Average ---" << endl;

    int scores[] = {85, 42, 91, 37, 78, 65, 29, 88, 95, 44};
    int scoresSize = 10;

    // TODO: Loop through the 'scores' array.
    //       Use 'continue' to skip any score below 50.
    //       Accumulate the sum and count of valid scores.
    //       Print the average of valid scores (use double for precision).
    float avg = 0;
    int valid_counter = 0;
    for(int i = 0; i <= scoresSize ; i++){
        if (scores[i] < 50 ) {
            continue;
        }
        avg += scores[i];
        valid_counter++;
    }
    cout << "average of valid scores:" << avg / valid_counter << endl;
       

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.6: Nested Loop with Break — Prime Checker
    //   Ask the user for a number (>= 2).
    //   Determine if it is prime using a loop.
    //   A prime number has no divisors other than 1 and itself.
    //
    //   Approach:
    //     Loop from 2 to number-1 (or up to sqrt for efficiency).
    //     If any value divides the number evenly, it's NOT prime — break.
    //
    //   Example:
    //     Input: 13  -> Output: "13 is prime."
    //     Input: 15  -> Output: "15 is not prime."
    // -----------------------------------------------------------------------

    cout << "--- Prime Checker ---" << endl;

    int num;
    cout << "Enter a number (>= 2): ";
    cin >> num;

    // TODO: Use a loop from 2 to num-1 to check for divisors.
    //       If you find a divisor, set a flag and break.
    //       After the loop, print whether the number is prime or not.


    cout << endl;

    // ========================================================================
    //  SECTION 4 — CHALLENGE  (10 minutes) Quizzzzzz
    //  Goal: Apply everything you've learned to harder problems.
    // ========================================================================

    cout << "===== SECTION 4: CHALLENGE =====" << endl;

    // -----------------------------------------------------------------------
    // Challenge 4.1: Diamond Pattern
    //   Ask the user for an odd number N (between 3 and 15).
    //   Print a diamond shape made of stars.
    //
    //   Example for N = 5:
    //       *
    //      ***
    //     *****
    //      ***
    //       *
    //
    //   Hint:
    //     - The diamond has N rows total.
    //     - The widest row is at the middle (row N/2).
    //     - Upper half (including middle): stars increase by 2 each row.
    //     - Lower half: stars decrease by 2 each row.
    //     - Each row has leading spaces to center the stars.
    // -----------------------------------------------------------------------

    cout << "--- Diamond Pattern ---" << endl;
    int diamond;
    cout << "Enter an odd number (3-15): ";
    cin >> diamond;

    // TODO: Print the diamond pattern.
    //       You may use two separate loop sections (upper half, lower half)
    //       or a single clever loop — your choice.
    // ÜST
 

    // -----------------------------------------------------------------------
    // Challenge 4.2: Password Attempt System
    //   Simulate a login system:
    //     - The correct password is 1234 (integer).
    //     - The user gets a MAXIMUM of 3 attempts.
    //     - After each wrong attempt, print how many attempts remain.
    //     - If the user enters the correct password, print "Access granted!"
    //       and stop asking (use break).
    //     - If all 3 attempts fail, print "Account locked."
    //
    //   This exercise combines a loop with break and a counter.
    // -----------------------------------------------------------------------


cout << "--- Password System ---" << endl;

    int correctPassword = 1234;

    // TODO: Implement the login attempt loop.
    //       - Use a for loop with 3 iterations (attempts).
    //       - Ask for the password each time.
    //       - If correct, print "Access granted!" and break.
    //       - If wrong, print remaining attempts.
    //       - After the loop, if not successful, print "Account locked."


    cout << endl;

    // ========================================================================
    cout << "===== LAB COMPLETE =====" << endl;
    // ========================================================================

    return 0;
    // Piramit sorusu
    for(int row = 0; row < 4; row++){
        //boşluklar
        for(int space = 0; space < n - row - 1; space++){
            cout << " ";
        }
        for(int star = 0; star < 2 * row + 1; star++){
            cout << "*";
        }
        cout << endl;
    }
       int z = 3;
for (int row = 0; row < z; row++){
    for(int space = 0; space < z - row - 1; space++){
        cout << " ";
    }
    for(int star = 0; star < 2 * row + 1; star++){
        cout << "*";
    }
    cout << endl;
}
// alt
 for(int row = z-2; row >= 0; row--) {

        for(int space = 0; space < z - row - 1; space++)
            cout << " ";

        for(int star = 0; star < 2*row + 1; star++)
            cout << "*";

        cout << endl;
    }
   
}

