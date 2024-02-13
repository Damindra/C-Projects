/*

Write a program that determines the number of trailing zeros at the end of X!
(X factorial), where X is an arbitrary number that is input through the
keyboard. For instance, 5! is 120, so it has one trailing zero.

Restrict between 0! to 20! as factorial greater than 20! will exceed the limit of long long data type.
So will not be able to display the value, however, the calculation will still work to get the trailing zeros.

*/

#include <iostream>


using namespace std;


// Function to find the factorial of a number
long long factorial(int num) {
    if (num < 0)
        return 0; // Factorial of a negative number doesn't exist
       
    long long result = 1;
    for (int index = 1; index <= num; index++) {
        result *= index;
    }
    return result;
}

// Function to return trailing 0s in factorial of n
int findTrailingZeros(int num) {
    if (num < 0) // Negative Number Edge Case
        return -1;

    // Initialize result
    int count = 0;

    // Keep dividing n by powers of 5 and update count
    for (int i = 5; num / i >= 1; i *= 5)
        count += num / i;

    return count;
}

// main function
int main() {
    int num;
    cout << "Enter a positive number (0 to 20) to find the trailing zeros in its factorial: ";
    cin >> num;

    // check if the number is greater than 20
    if (num > 20) {
        cout << "Factorial of " << num << " is too large to be displayed." << endl;
        cout << "Count of trailing 0s in " << num << "! is " << findTrailingZeros(num) << endl;
    } 
    else {

        cout << num << "!" << " = " << factorial(num) << endl;
        cout << "Count of trailing 0s in " << num << "! is " << findTrailingZeros(num) << endl;
        return 0;
    }
}
