#include <bits/stdc++.h>
// #include "validation2.h"
#include <conio.h>
using namespace std;

class person {
    public:
    char name[30];
    char phoneNo[18];
    double amount;
    void getData();
    void insertData(string, string, double);
    void copyData(person);
    bool checkPhoneNumber(string);
    bool isDigits(const string &);
};

void person :: getData() {
    string Name, PhoneNo;
    cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Name : ";
    while (true) {
        char ch = getch();
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == ' ' || (ch >= '0' && ch <= '9')) {
            Name.push_back(ch);
            cout << ch; 
        }
        else if (ch == '\r' && Name.length() >= 1) break;
        else if (ch == '\r') continue;
        else if (ch == '\b' && Name.length() >= 1){
            cout << "\b \b";
            Name.pop_back();
            continue;
        }
    }
    cout << "\n";
    
    cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Phone Number : ";
    fflush(stdin);
    while (true) {
        fflush(stdin);
        char ch = getch();
        if (checkPhoneNumber(PhoneNo) && ch == '\r') break;
        else if (ch == '\r') {
            int len = PhoneNo.length();
            for (int i = 0; i < len; i++) cout << "\b \b";
            PhoneNo = "";
        }
        else if (ch == '\b' && PhoneNo.length() > 0) {
            PhoneNo.pop_back();
            cout << "\b \b";
        }
        else if (ch == '\b')  {
            continue;
        }
        else {
            cout << ch;
            PhoneNo.push_back(ch);
        }
    }
    // getline(cin, PhoneNo);
    strcpy(this->name, Name.c_str());
    strcpy(this->phoneNo, PhoneNo.c_str());
    this->amount = 0;
}

void person :: insertData(string Name, string PhoneNo, double Amount) {
    strcpy(this->name, Name.c_str());
    strcpy(this->phoneNo, PhoneNo.c_str());
    this->amount = Amount;
}

void person :: copyData(person data) {
    strcpy(this->name, data.name);
    strcpy(this->phoneNo, data.phoneNo);
    this->amount = data.amount;
}

bool person :: checkPhoneNumber(string str) {
    if (str[0] == '+') {
        int pos = 0;
        while (str[pos] != ' ') pos++;
        if (str.length() - pos - 1 >= 10) return true;
    }

    else {
        if (str.length() >= 10 && isDigits(str)) return true;
    }

    return false;
}

bool person :: isDigits(const string &str)
{
    return all_of(str.begin(), str.end(), ::isdigit); 
}