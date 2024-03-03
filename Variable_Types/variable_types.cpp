#include <iostream>
#include <limits>

int main() {
    // **Integral Types:**

    // 1. `int`: Stores whole numbers (signed).
    int age = 25;
    std::cout << "Age (int): " << age << std::endl;


    // 2. `short`: Smaller integer type, often used for space optimization.
    short daysInWeek = 7;
    std::cout << "Days in a week (short): " << daysInWeek << std::endl;

    // 3. `char`: Stores a single character.
    char initial = 'A';
    std::cout << "Initial (char): " << initial << std::endl;

    // 4. `bool`: Represents Boolean values (true or false).
    bool isStudent = true;
    std::cout << "Is student (bool): " << isStudent << std::endl;

    // **Floating-point Types:**

    // 5. `float`: Stores single-precision floating-point numbers (decimal values).
    float pi = 3.14159f; // Add 'f' suffix for float literals
    std::cout << "Pi (float): " << pi << std::endl;

    // 6. `double`: Stores double-precision floating-point numbers (higher precision than float).
    double distance = 123456.789;
    std::cout << "Distance (double): " << distance << std::endl;

    // **Character and String Types:**

    // 7. `char array`: Array of characters to form a string (null-terminated).
    char name[10] = "Alice"; // Array size includes space for null terminator
    std::cout << "Name (char array): " << name << std::endl;

    // 8. `std::string`: Provides safer and more flexible string handling.
    std::string city = "New York";
    std::cout << "City (std::string): " << city << std::endl;

    // **Reference Types:**

    // 9. `int&` (reference to int): References another existing variable.
    int num = 10;
    int& refNum = num;
    std::cout << "Original number (int): " << num << std::endl;
    std::cout << "Referenced number (int&): " << refNum << std::endl; // Prints the same value as num

    // **Pointer Types:**

    // 10. `int*` (pointer to int): Stores memory address of an integer variable.
    int value = 42;
    int* ptrValue = &value; // Address-of operator (&)
    std::cout << "Value (int): " << value << std::endl;
    std::cout << "Pointer to value (int*): " << ptrValue << std::endl; // Prints memory address

    // **Enumeration (User-defined Type):**

    // 11. `enum`: Custom type representing a set of named integer constants.
    enum Color { Red, Green, Blue };
    Color favoriteColor = Green;
    std::cout << "Favorite color (enum): " << favoriteColor << std::endl << std::endl; // Often printed as the numerical value

    // Other types: `long`, `long long`, `unsigned int`, `unsigned char`, `wchar_t`, etc.

    // Further Integer Types:
    long longValue = 2000000000;
    long long longLongValue = 9000000000000000000;

    // Further Floating-point Types:
    long double piExtended = 3.14159265358979323846;

    // Further Character Types:
    unsigned char ucharValue = 65; // ASCII value of 'A'
    wchar_t wideChar = L'ö'; // Unicode for 'ö'

    std::cout << "Further Types" << std::endl << std::endl;
    

    std::cout << "Further Integer Types: " << std::endl << std::endl;
    std::cout << "Long (long): " << longValue << std::endl;
    std::cout << "Long Long (long long): " << longLongValue << std::endl << std::endl;

    std::cout << "Further Floating-point Types: " << std::endl << std::endl;
    std::cout << "Long Double (long double): " << piExtended << std::endl << std::endl;

    std::cout << "Further Character Types: " << std::endl << std::endl;
    std::cout << "Unsigned Char (unsigned char): " << ucharValue << std::endl;
    std::wcout << "Wide Char (wchar_t) ö: " << wideChar << std::endl;



    return 0;
}