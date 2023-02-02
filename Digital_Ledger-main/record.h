#include <bits/stdc++.h>
// #include "validation2.h"
using namespace std;

bool isValidDate(string);
bool isValid(int);

class record {
    public:
    char date[20];
    char itemName[50];
    char quantity[10];
    double itemPrice;

    void insertData(string a, string b, string c, double);
    void takeInput();

};
void record :: insertData(string a, string b, string c, double d) {
    strcpy(this->date, a.c_str());
    strcpy(this->itemName, b.c_str());
    strcpy(this->quantity, c.c_str());
    this->itemPrice = d;
}

void record :: takeInput() {
    string Date, ItemName, Quantity;
    double ItemPrice;
    cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Date (DD/MM/YYYY) : ";
    fflush(stdin);
    while (true) {
        char ch = getch();
        if (Date.length() == 0 && ch == '\b') continue;
        else if (ch == '\b') {
            cout << "\b \b";
            Date.pop_back();
            continue;
        }
        else if (ch == '\r' && isValidDate(Date)) break;
        else if (ch == '\r') {
            int len = Date.length();
            for (int i = 0; i < len; i++) cout << "\b \b";
            Date.clear();
            continue;
        }
        else if (!((ch >= '0' && ch <= '9') || ch == '/')) continue;
        Date.push_back(ch);
        cout << ch;
    }
    cout << "\n\n\t\t\t\t\t\t\t\t\t\tEnter Item Name : ";
    getline(cin, ItemName);
    cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Quantity : ";
    getline(cin, Quantity);
    cout << "\n\t\t\t\t\t\t\t\t\t\tEnter ItemPrice : ";
    cin >> ItemPrice;
    strcpy(this->date, Date.c_str());
    strcpy(this->itemName, ItemName.c_str());
    strcpy(this->quantity, Quantity.c_str());
    this->itemPrice = ItemPrice;
}

bool isValidDate(string date) {
    if (!((date[0] >= '0' && date[0] <= '9') && (date[1] >= '0' && date[1] <= '9'))) return false;
    if (date[2] != '/') return false;
    if (!((date[3] >= '0' && date[3] <= '9') && (date[4] >= '0' && date[4] <= '9'))) return false;
    if (date[5] != '/') return false;
    if(!(((date[6] >= '0' && date[6] <= '9') && (date[7] >= '0' && date[7] <= '9')) && ((date[8] >= '0' && date[8] <= '9') && (date[9] >= '0' && date[9] <= '9')))) return false;
    int day, month, year;
    day = stoi(date.substr(0, 2));
    month = stoi(date.substr(3, 2));
    year = stoi(date.substr(6, 4));
    if (month > 12 || month < 1) return false;
    if (day < 1 || day > 31) return false;
    if (month == 2 && day > 28 && year % 4 != 0) return false;
    if (month == 2 && day > 29 && year % 4 == 0) return false;
    if (month != 2 && day > 30 && (!isValid(month))) return false;
    return true;
}

bool isValid (int month) {
    switch(month) {
        case 1 : return true;
        case 3 : return true;
        case 5 : return true;
        case 7 : return true;
        case 8 : return true;
        case 10 : return true;
        case 12 : return true;
    }
    return false;
}