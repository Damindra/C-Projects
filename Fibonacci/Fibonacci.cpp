#include <iostream>

/*

The Fibonacci sequence is defined by the recurrence relation:
F(n)= F (n - 1) + F (n - 2), where F(1) = 1 and F(2) = 1.
Hence the first 12 terms will be:
F(1) = 1
F(2) = 1
F(3) = 2
F(4) = 3
F(5) = 5
F(6) = 8
F(7) = 13
F(8) = 21
F(9) = 34
F(10) = 55
F(11) = 89
F(12) = 144
The term, F(12), is the first term to contain three digits.
Write a program to find the index of the first term in the Fibonacci sequence
to contain 10 digits?

*/ 

using namespace std;

int main() {
    // Initialize variables to store the first two Fibonacci numbers
    long long int prev = 0, curr = 1;
    // Initialize a variable to count the number of Fibonacci numbers printed
    int count = 1;

    // Output the first Fibonacci number
    cout << "Fibonacci Sequence (1) = " << curr << endl;

    // Loop until the current Fibonacci number has 10 or more digits
    while (curr < 1e9) { // 10^9 has 10 digits (1 exp 9)
        // Calculate the next Fibonacci number
        long long int next = prev + curr;
        // Update prev and curr for the next iteration
        prev = curr;
        curr = next;
        // Output the next Fibonacci number
        cout << "Fibonacci Sequence ("<< count+1 << ") = " << curr << endl;
        // Increment the count
        count++;
    }

    // Output the total count of Fibonacci numbers printed
    cout << "\nTotal Fibonacci numbers printed: " << count << endl;

    return 0;
}
