#include <iostream>
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
