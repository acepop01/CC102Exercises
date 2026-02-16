#include <iostream>
using namespace std;

int main() {
    char repeatProgram;

    do {
        const int PRODUCTS = 5;
        const int SALESPEOPLE = 4;

        double sales[PRODUCTS][SALESPEOPLE] = {0};

        int sp, prod;
        double amount;
        char moreData;

        do {
            cout << "\nSalesperson (1-4): ";
            cin >> sp;

            cout << "Product (1-5): ";
            cin >> prod;

            cout << "Amount: ";
            cin >> amount;

            sales[prod - 1][sp - 1] += amount;

            cout << "Enter another sales record? (y/n): ";
            cin >> moreData;

        } while (moreData == 'y' || moreData == 'Y');

        cout << "\n===== MONTHLY SALES SUMMARY =====\n\n";

        cout << "Product ";
        for (int j = 0; j < SALESPEOPLE; j++)
            cout << "SP" << j + 1 << " ";
        cout << "Total\n";

        double grandTotal = 0;


        for (int i = 0; i < PRODUCTS; i++) {
            double rowTotal = 0;

            cout << i + 1 << "       ";

            for (int j = 0; j < SALESPEOPLE; j++) {
                cout << sales[i][j] << " ";
                rowTotal += sales[i][j];
            }

            cout << rowTotal << endl;
            grandTotal += rowTotal;
        }


        cout << "Total   ";
        for (int j = 0; j < SALESPEOPLE; j++) {
            double colTotal = 0;

            for (int i = 0; i < PRODUCTS; i++)
                colTotal += sales[i][j];

            cout << colTotal << " ";
        }

        cout << grandTotal << endl;

        cout << "\nRun the program again? (y/n): ";
        cin >> repeatProgram;

    } while (repeatProgram == 'y' || repeatProgram == 'Y');

    cout << "Program ended.\n";

    return 0;
}
