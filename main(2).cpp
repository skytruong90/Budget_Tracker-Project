#include <iostream>
using namespace std;

int main()
{
    double budget = 0; // initialize budget to 0
    char choice; // variable to store user's choice
    double amount; // variable to store amount
    
    // loop until user chooses to exit
    do {
        // display menu
        cout << "--------------------------\n";
        cout << "Budget Tracker\n";
        cout << "--------------------------\n";
        cout << "1. Add income\n";
        cout << "2. Add expense\n";
        cout << "3. Display budget summary\n";
        cout << "4. Exit\n";
        cout << "--------------------------\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch (choice) {
            case '1':
                // add income
                cout << "Enter amount of income: $";
                cin >> amount;
                budget += amount; // increase budget by amount
                cout << "Income added.\n\n";
                break;
            case '2':
                // add expense
                cout << "Enter amount of expense: $";
                cin >> amount;
                budget -= amount; // decrease budget by amount
                cout << "Expense added.\n\n";
                break;
            case '3':
                // display budget summary
                cout << "--------------------------\n";
                cout << "Budget Summary\n";
                cout << "--------------------------\n";
                cout << "Total budget: $" << budget << "\n\n";
                break;
            case '4':
                // exit
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n\n";
        }
    } while (choice != '4');
    
    return 0;
}
