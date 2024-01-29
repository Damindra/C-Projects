#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0) {
        return 1; // Factorial of 0 is 1
    }
    int fact = 1; // Initialize factorial to 1
    for (int i = 1; i <= n; i++) {
        fact *= i; // Multiply factorial by each number up to n
    }
    return fact; // Return the factorial
}

int main() {
    // Display information about the program
    cout << "Calculate all curious numbers up to 1,000,000 (where the factorial of each number is the total)" << endl;
    cout << "*** Example, 1!+4!+5! = 145 ***" << endl;

    int sum = 0; // Initialize sum of curious numbers to 0
    int numOfCurious = 0;

    // Iterate through numbers from 1 to 1,000,000
    for (int i = 145; i <= 145; i++) {
        int num = i; // Store current number in a variable
        int digit_sum = 0; // Initialize sum of factorials of digits to 0

        /*  Calculate sum of factorials of digits of the current number
            Calculates it by taking the last number of the total each time
            Example for 145, it first executes Factorial 5, then 4 and then 1
            it does this by first getting last number (num % 10)
            it then removes the last number using /= 10 since num is a integer
            so 145/10 is 14.5 so discards 5 then using num % 10 uses now 4 from 14
            when it gets to 1 which give 0.1, then in Factorial function if n == 0, it returns 1
            Factorial 1 is 1 
        */

        while (num > 0) {
            digit_sum += factorial(num % 10); // Add factorial of last digit to digit_sum
            num /= 10; // Remove last digit from the number
        }

        // Check if the sum of factorials of digits equals the original number
        if (digit_sum == i) {
            cout << i << " "; // Display the curious number
            sum = i; // Update the sum of curious numbers
            cout << endl << "The sum of all such numbers is " << sum << endl; // Display the sum
            numOfCurious++;

        }
    }
    cout << endl << "The number of curious numbers is " << numOfCurious << endl;
    return 0; // Return 0 to indicate successful execution
}
