#include <iostream>

using namespace std;

// input name
void reserve_table(string table[20]) {
    int tablenumber;
    int i;
    string name;

    while (1) {

        tablenumber = 0;
        name = "";

        cout << "\nEnter table number (0 to 19) : ";
        cin >> tablenumber;

        if (table[tablenumber] == "available") {
            cout << "Enter name : ";
            cin >> name;
            table[tablenumber] = name;
            break;
        }
        else {
            cout << "Table not available choose another\n";
        }
    }
}

// clear table number
void clear_table(string table[20]) {
    int number;
    cout << "\nEnter table number (0 to 19) : ";
    cin >> number;

    if (table[number] == "available") { // if table empty
        cout << "Selected table is already available (nothing to clear)\n";
    }
    else {
        table[number] = "available";
        cout << "Table is clear\n";
    }
}

// print table data
void print_table(string table[20]) {
    int i;

    cout << "Table No." << "   " << "Status\n";
    for (i = 0; i < 20; i++) {
        cout << "    " << i << "\t" << "   " << table[i] << endl;
    }
}

int main() {

    string table[20];

    int choice;

    // input available in table
    for (int i = 0; i < 20; i++)
        table[i] = "available";

    while (1) {

        cout << "\n1 : Reserve a Table\n";
        cout << "2 : Clear Reservation\n";
        cout << "3 : Report\n";
        cout << "0 : Exit Program\n";
        cin >> choice;

        if (1 == choice) {
            reserve_table(table);
        }
        else if (2 == choice) {
            clear_table(table);
        }
        else if (3 == choice) {
            print_table(table);
        }
        else if (0 == choice) {
            cout << "Quit\n";
            break;
        }
        else {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}