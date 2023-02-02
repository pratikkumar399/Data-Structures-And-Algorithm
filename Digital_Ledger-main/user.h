#include <bits/stdc++.h>
#include <conio.h>
// #include "validation2.h"
using namespace std;

class user {
    public:
    char userName[20];
    char name[50];
    char phoneNumber[18];
    char password[50];
    double amount;
    void insertData(string, string, string, string);
    void getData();
    bool compare(user *obj);
    void printData();
    bool checkPassword(string);
    bool checkPhoneNumber(string);
    bool isDigits(const string&);
    bool checkUserName(string);
};

bool user :: compare(user *obj) {
    return {!(strcmp(this->userName, obj->userName) ||
            strcmp(this->name, obj->name) ||
            strcmp(this->phoneNumber, obj->phoneNumber) ||
            strcmp(this->password, obj->password) ||
            this->amount == obj->amount)};

}

void user :: getData() {
    system("cls");
    system("COLOR F0");
    string Name, PhoneNumber, Password, uName; 
    cout << "\n\n\t\t\t\t\t\t\t\t\tPlease Enter Following Information\n\n";
    cout << "\t\t\t\t\t\t    ------------------------------------------------------------------\n\n";
    cout << "\n\t\t\t\t\t\t\t\t\t\t-> Create Your User Name :";
    while (true) {
        fflush(stdin);
        char ch = getch();
        if (checkUserName(uName) && ch == '\r') break;
        else if (ch == '\r') {
            int len = uName.length();
            for (int i = 0; i < len; i++) cout << "\b \b";
            uName = "";
        }
        else if (ch == '\b' && uName.length() > 0) {
            uName.pop_back();
            cout << "\b \b";
        }
        else if (ch == '\b')  {
            continue;
        }
        else {
            cout << ch;
            uName.push_back(ch);
        }
    }
    cout << "\n\n\t\t\t\t\t\t\t\t\t\t-> Enter Your Name : ";
    fflush(stdin);
    getline(cin, Name);
    cout << "\n\t\t\t\t\t\t\t\t\t\t-> Enter Your Phone Number : ";
    while (true) {
        fflush(stdin);
        char ch = getch();
        if (checkPhoneNumber(PhoneNumber) && ch == '\r') break;
        else if (ch == '\r') {
            int len = PhoneNumber.length();
            for (int i = 0; i < len; i++) cout << "\b \b";
            PhoneNumber = "";
        }
        else if (ch == '\b' && PhoneNumber.length() > 0) {
            PhoneNumber.pop_back();
            cout << "\b \b";
        }
        else if (ch == '\b')  {
            continue;
        }
        else {
            cout << ch;
            PhoneNumber.push_back(ch);
        }
    }
    cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tPassword Must Contain";
    cout << "\n\t\t\t\t\t\t\t\t\t\t\t1. A Capital Letter";
    cout << "\n\t\t\t\t\t\t\t\t\t\t\t2. A Small Letter";
    cout << "\n\t\t\t\t\t\t\t\t\t\t\t3. A Numberic Character";
    cout << "\n\t\t\t\t\t\t\t\t\t\t\t4. A Special Character";
    cout << "\n\t\t\t\t\t\t\t\t\t\t\t5. Length Greater Than 7";
    cout << "\n\t\n\t\t\t\t\t\t\t\t\t\t-> Create Password : ";
    fflush(stdin);
    while (true) {
        fflush(stdin);
        char ch = getch();
        if (checkPassword(Password) && ch == '\r') break;
        else if (ch == '\r') {
            int len = Password.length();
            for (int i = 0; i < len; i++) cout << "\b \b";
            Password = "";
        }
        else if (ch == '\b' && Password.length() > 0) {
            Password.pop_back();
            cout << "\b \b";
        }
        else if (ch == '\b')  {
            continue;
        }
        else {
            cout << ch;
            Password.push_back(ch);
        }
    }

    strcpy(this->name, Name.c_str());
    strcpy(this->phoneNumber, PhoneNumber.c_str());
    strcpy(this->userName, uName.c_str());
    strcpy(this->password, Password.c_str());
    amount = 0;
}

void user :: insertData(string a, string b, string c, string d) {
    strcpy(userName, b.c_str());
    strcpy(name, a.c_str());
    strcpy(phoneNumber, c.c_str());
    strcpy(password, d.c_str());
    amount = 0;
}

void user :: printData() {
    cout << this->name << " " << this->userName << " " << this->phoneNumber << " " << this->password << " " << this->amount << endl;
} 

bool user :: checkPassword(string str) {
    if (str.length() < 8) return false;
    bool small = false, capital = false, special = false, number = false;
 
    for (int i = 0; i < str.length(); i++) {
        bool temp = true;

        if (str[i] >= '1' && str[i] <= '9')  {
            number = true;
            temp = false;
        }
        if (str[i] >= 'a' && str[i] <= 'z') {
            small = true;
            temp = false;
        }
        if (str[i] >= 'A' && str[i] <= 'Z') {
            capital = true;
            temp = false;
        }
        if (temp) {
            special = true;
        }
        if (small && capital && special && number) return true;
    }
    if (small && capital && special && number) return true;
    else return false;
}

bool user :: checkPhoneNumber(string str) {
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

bool user :: isDigits(const string &str)
{
    return all_of(str.begin(), str.end(), ::isdigit); 
}

bool user :: checkUserName(string uName) {
    ifstream reading("userName.txt");
    bool check = true;
    user obj;
    reading.read((char*)&obj, sizeof(obj));
    while (!reading.eof()) {
        if (obj.userName == uName) {
            check = false;
            break;
        }
        reading.read((char*)&obj, sizeof(obj));
    }
    reading.close();
    return check;
}