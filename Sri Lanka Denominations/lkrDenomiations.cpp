// Calculate in Sri Lanka Rupees and cents, the least number required for a value
// Note the input is a double not float, since the float is not accurate for 0.01 cent 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void calculateNotesAndCoins(double amount) {
    // Define the denominations of rupee notes and cent coins
    int rupeeNotes[] = { 5000, 2000, 1000, 500, 100, 50, 20, 10, 5, 2, 1 };
    int centCoins[] = { 50, 25, 10, 5, 2, 1 };

    // Initialize counters for notes and coins
    int rupeeCount = 0;
    int centCount = 0;

    // Convert amount to string first
    string amountString = to_string(amount);

    //Split the amount string into rupees and cents
    int decimalPos = amountString.find(".");
    string stringRupees = amountString.substr(0, decimalPos);
    string stringCents = amountString.substr(decimalPos + 1);

    //Convert string to integer for the rupees and cents
    int intRupees = stoi(stringRupees);
    int intCents = stoi(stringCents)/10000;


    // Calculate rupee notes
    cout << "Rupee Notes:" << endl;
    for (int i = 0; i < sizeof(rupeeNotes) / sizeof(rupeeNotes[0]); i++) {
        rupeeCount = intRupees / rupeeNotes[i];
        intRupees -= rupeeCount * rupeeNotes[i];
        if (rupeeCount > 0)
            cout << setw(4) << rupeeNotes[i] << " LKR notes: " << rupeeCount << endl;
    }

    // Calculate cent coins
    if (intCents > 0) {

        cout << "\nCent Coins:" << endl;
        for (int i = 0; i < sizeof(centCoins) / sizeof(centCoins[0]); i++) {
            centCount = intCents / centCoins[i];
            intCents -= centCount * centCoins[i];
            if (centCount > 0)
                cout << setw(2) << centCoins[i] << " cent coins: " << centCount << endl;
        }
    }
}

int main() {
    double amount;
    cout << "Enter the amount in Sri Lankan rupees and cents: ";
    cin >> amount;

    calculateNotesAndCoins(amount);

    return 0;
}



