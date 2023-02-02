#include <bits/stdc++.h>
#include <fstream>
#include <direct.h>
#include "user.h"
#include <conio.h> 
#include "record.h"
#include "person.h"
#include "validation.h"
#include <cstdio>
using namespace std;

void updateUser(user *data, string newPassword);
void login(user*);
void openKhata(user*);
bool checkExistance(user*, person*);
void deleteKhata(user*);
void doTransaction(user*);
void deleteAccount(user*);
void doOperationByName(user*);
void doOperationByPhoneNumber(user*);
void doOperation(user*, person*);
void refreshAccount(user*);
bool check(user*, person*);
double findTotalAmount(user*, person*);
void updateRecord(user*, person*, double);
void displayRecordDetails(user*, person*);
void displayPersonRecord(user*);
void findByName(user*);
void findByPhoneNumber(user*); 
void printAllKhata(user*); 

void signup() {
    user *data = new user();
    data->getData();
    string userName = data->userName;
    if(mkdir(userName.c_str()) == -1){
        cerr << " ERROR : " << strerror(errno) << endl;
        return;
    }

    ofstream writeInUserName("userName.txt", ios::app);
    if (writeInUserName.fail()) {
        cout << "ERROR : NOT ABLE TO CREATE FILE" << endl;
        return;
    }
    writeInUserName.write((char*)&(*data), sizeof(*data));
    writeInUserName.close();
    ofstream writeInUserFile((userName + "/" + userName + ".txt"), ios::app);
}

bool verifyLogin() {
    system("cls");
    system ("COLOR F0");
    user *data = new user();
    cout << "\n\n\t\t\t\t\t\t\t\t\tPlease Enter Username And Password\n\n";
    cout << "\t\t\t\t\t\t    ------------------------------------------------------------------\n\n";
    cout << "\t\t\t\t\t\t\t                  -> UserName :";
    string uName;
    cin >> uName;
    cout << "\t\t\t\t\t\t\t                  -> Password :";
    fflush(stdin);
    string password;
    cin >> password;
    ifstream reading("userName.txt", ios::in);
    // reading.read((char*)&(*data), sizeof(*data));
    while (!reading.eof()) {
        reading.read((char*)&(*data), sizeof(*data));
        if (uName == data->userName && password == data->password) {
            login(data);
            return true;
        }
    }
    return false;
}

void forgotIdPassword() {
    system("cls");
    cout << "\n\n\t\t\t\t\t\t\t\t\tPlease Enter Following Information\n\n";
    cout << "\t\t\t\t\t\t    ------------------------------------------------------------------\n\n";
    string uName, phoneNumber;
    cout << "\n\t\t\t\t\t\t\t\t\t\t-> Enter Your UserName : ";
    fflush(stdin);
    cin >> uName;
    cout << "\n\t\t\t\t\t\t\t\t\t\t-> Enter Your PhoneNumber : ";
    cin >> phoneNumber;
    user *data = new user();
    bool flag = true;
    ifstream reading("userName.txt", ios::in);
    reading.read((char*)&(*data), sizeof(*data));
    while (!reading.eof()) {
        if (!(strcmp(data->userName, uName.c_str()) || strcmp(data->phoneNumber, phoneNumber.c_str()))) {
            flag = false;
            string newPassword = "";
            system("cls");
            cout << "\n\n\t\t\t\t\t\t\t\t\t\tAccount Found\n";
            cout << "\t\t\t\t\t\t    ------------------------------------------------------------------\n\n";
            cout << "\n\n\t\t\t\t\t\t\t\t\tPlease Enter Following Information\n\n";
            cout << "\t\t\t\t\t\t\t********************************************************** \n\n";
            cout << "\t\t\t\t\t\t\t                  Enter New Password : ";
            while (true) {
                char ch;
                ch = getch();
                if (ch == '\b' && newPassword.length() >= 1) {
                    newPassword.pop_back(); 
                    cout << "\b \b";
                    continue;
                }
                if (ch == '\r') {
                    break;
                } 
                cout << "*";
                newPassword.push_back(ch);
            }
            updateUser(data, newPassword);
            break;
        }
        reading.read((char*)&(*data), sizeof(*data));
    }
    if (flag) {
        system("cls");
        cout << "\n\t\t\t\t\t\t\t\t\t\tAccount Not Found\n\n";
        cout << "\n\t\t\t\t\t\t\t\t\t\tPress Any Key To Continue...";
        char ch = getch();
    }
}
// --------------------------------------------------------------------------------------

// UPDATE USER DATA FROM userName.txt

// ---------------------------------------------------------------------------------------
void updateUser(user *data, string newPassword) {
    ifstream obj("userName.txt", ios::in);
    ofstream writing("temp.txt");
    user *reading = new user();
    obj.read((char*)&(*reading), sizeof(*reading));
    while (!obj.eof()) {
        if (reading->compare(data)) {
            user *newData = new user();
            newData->insertData(data->name, data->userName, data->phoneNumber, newPassword);
            writing.write((char*)&(*newData), sizeof(*newData));
        }
        else writing.write((char*)&(*reading), sizeof(*reading));
        obj.read((char*)&(*reading), sizeof(*reading));
    }
    writing.close();
    obj.close();
    ifstream readingObject("temp.txt", ios::in);
    ofstream writingObject("userName.txt");
    readingObject.read((char*)&(*reading), sizeof(*reading));
    while (!readingObject.eof()) {
        writingObject.write((char*)&(*reading), sizeof(*reading));
        readingObject.read((char*)&(*reading), sizeof(*reading));
    }
    writingObject.close();
    readingObject.close();
} 

// ---------------------------------------------------------------------------------------

// LOGIN PAGE (BODY)

// ---------------------------------------------------------------------------------------

void login(user* data) {
    while (true) {
        system("cls");
        cout << "\n\n\n\t\t\t\t\t\t\t\t\t    Hello, " << data->name << endl;

        cout << "\n\t\t\t\t\t    UserName - " << data->userName << "\t\tMob. No. : " << data->phoneNumber << "\t\tAmount Remaining : Rs. " << data->amount << endl;
        // string path = string(data->userName) + "/" + string(data->userName) + ".txt";
        // ifstream reading(path, ios::in);
        // person *details = new person();
        // long i = 1;
        // reading.read((char*)&(*details), sizeof(*details));
        // while (!reading.eof()) {
        //     cout << i++ << ". " << details->name << " --> Rs. " << details->amount << endl;
        //     reading.read((char*)&(*details), sizeof(*details));
        // }
        // reading.close();
        // cout << "\n\nTotal Amount Remaining : " << data->amount << "\n\n";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t-- DASHBOARD --\n\n";
        cout << "\t\t\t\t\t\t    ------------------------------ MENU ------------------------------\n\n";
        cout << "\t\t\t\t\t\t\t********************************************************** \n";
        cout << "\t\t\t\t\t\t\t|                                                        | \n";
        cout << "\t\t\t\t\t\t\t|             Press 1 To Open New Khata                  | \n";
        cout << "\t\t\t\t\t\t\t|                                                        | \n";
        cout << "\t\t\t\t\t\t\t|             Press 2 To Delete Someone's Khata          | \n";
        cout << "\t\t\t\t\t\t\t|                                                        | \n";
        cout << "\t\t\t\t\t\t\t|             press 3 To Do Transaction                  | \n";
        cout << "\t\t\t\t\t\t\t|                                                        | \n";
        cout << "\t\t\t\t\t\t\t|             press 4 To Delete Your Account             | \n";
        cout << "\t\t\t\t\t\t\t|                                                        | \n";
        cout << "\t\t\t\t\t\t\t|             press 5 Refresh Account                    | \n";
        cout << "\t\t\t\t\t\t\t|                                                        | \n";
        cout << "\t\t\t\t\t\t\t|             press 6 Open Someone's File                | \n";
        cout << "\t\t\t\t\t\t\t|                                                        | \n";
        cout << "\t\t\t\t\t\t\t|             press 7 Print All Khata's                  | \n";
        cout << "\t\t\t\t\t\t\t|                                                        | \n";
        cout << "\t\t\t\t\t\t\t|             press 8 To Exit                            | \n";
        cout << "\t\t\t\t\t\t\t|                                                        | \n";
        cout << "\t\t\t\t\t\t\t********************************************************** \n";
        cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
        char choice;
        while (true) {
            choice = getch();
            cout << choice;
            if (choice == '\b' || choice == '\r') continue;
            if (!(choice >= '1' && choice <= '8')) {
                cout << "\b \b";
            }
            else break;
        }
        switch(choice) {
            case '1' : openKhata(data); break;
            case '2' : deleteKhata(data); break;
            case '3' : doTransaction(data); break;
            case '4' : deleteAccount(data); return;
            case '5' : refreshAccount(data); break;
            case '6' : displayPersonRecord(data); break;
            case '7' : printAllKhata(data); break;
            case '8' : return;
        }
    }
}

// ---------------------------------------------------------------------------------------

// Opening Khata Of A Person

// ----------------------------------------------------------------------------------------

void openKhata(user* data) {
    system("cls");
    person* details = new person();
    string path = string(data->userName) + "/" + string(data->userName) + ".txt";
    ofstream writing(path, ios::app);
    details->getData();
    bool res = checkExistance(data, details);
    if (res) {
        system("cls");
        cout << "\n\t\t\t\t\t\t\t\t\t\tAccount Already Exist";
        cout << "\n\n\t\t\t\t\t\t\t\t\t\tPress Any Key To Continue...";
        char ch = getch();
    }
    else {
        writing.write((char*)&(*details), sizeof(*details));
        path = string(data->userName) + "/" + (details->name) + string(details->phoneNo) + ".txt";
        ofstream createFile(path);
    }
    writing.close();
}

// ---------------------------------------------------------------------------------------

// Deleting Khata Of A Person

// ----------------------------------------------------------------------------------------

void deleteKhata(user* data) {
    system("cls");
    string Name, PhoneNumber;
    cout << "\n\n\t\t\t\t\t\t\t\t\tEnter Name : ";
    fflush(stdin);
    getline(cin, Name);
    cout << "\n\n\t\t\t\t\t\t\tEnter Phone Number : ";
    fflush(stdin);
    getline(cin, PhoneNumber);
    bool found = false;
    person* details = new person();
    string path = string(data->userName) + "/" + string(data->userName) + ".txt";
    ifstream reading(path);
    ofstream writing("temp.txt");
    reading.read((char*)&(*details), sizeof(*details));
    while (!reading.eof()) {
        if ((!isEqual(details->name, Name)) && details->phoneNo == PhoneNumber) {
            found = true;
            system("cls");
            cout << "--> Account Found <--\n\n";
            if (details->amount != 0) {
                cout << "!! WARNING !! --> Amount Remaining -> Rs. " << details->amount << "\n\n";
                cout << "Do You Still Want To Continue? (y/n) : ";
                char ch;
                while (true) {
                    ch = getch();
                    cout << ch;
                    if (ch == 'y' || ch == 'Y' || ch == 'n' || ch == 'N') break;
                }
                if (ch == 'n' || ch == 'N') return;
            }
        }
        else {
            cout << details->name << " " << details->phoneNo << endl;
            writing.write((char*)&(*details), sizeof(*details));
        }
        reading.read((char*)&(*details), sizeof(*details));

    }
    reading.close();
    writing.close();
    if (found) {
        string path2 = string(data->userName) + "/" + Name + PhoneNumber + ".txt";
        int status = remove(path2.c_str());
        if (!status) {
            ofstream writing2(path);
            ifstream reading2("temp.txt");
            person temp;
            reading2.read((char*)&temp, sizeof(temp));
            while (!reading2.eof()) {
                writing2.write((char*)&(temp), sizeof(temp));
                reading2.read((char*)&(temp), sizeof(temp));
            }
            cout << "\n\nAccount Deleted Successfully\n\n";
        }
        else {
            cout << "ERROR IN PERFORMING OPERATION";
            char ch = getch();
            return;
        }
    }
    else {
        system("cls");
        cout << "\n\t\t\t\t\t\t\t\t\t\tAccount Not Found\n\n";
        cout << "\n\t\t\t\t\t\t\t\t\t\tPress Any Key To Continue...";
        char ch = getch();
    }
    refreshAccount(data);
}

void doTransaction(user* data) {
    system("cls");
    cout << "\n\n\t\t\t\t\t\t\t\t\tWELCOME TO TRANSACION PAGE\n\n";
    cout << "\t\t\t\t\t\t    ------------------------------ MENU ------------------------------\n\n";
    cout << "\t\t\t\t\t\t\t********************************************************** \n";
    cout << "\t\t\t\t\t\t\t|                                                        | \n";
    cout << "\t\t\t\t\t\t\t|          Press 1 To Search By Name                     | \n";
    cout << "\t\t\t\t\t\t\t|                                                        | \n";
    cout << "\t\t\t\t\t\t\t|          Press 2 To Search By Phone Number             | \n";
    cout << "\t\t\t\t\t\t\t|                                                        | \n";
    cout << "\t\t\t\t\t\t\t********************************************************** \n";
    cout << "\n\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
    char ch;
    while (true) {
        ch = getch();
        if (ch == '1' || ch == '2'){
            cout << ch << endl;
            break;
        } 
        else continue;
    }
    if (ch == '1') doOperationByName(data);
    else doOperationByPhoneNumber(data);
}

// ---------------------------------------------------------------------------------------

// Deleting User Account

// ----------------------------------------------------------------------------------------

void deleteAccount(user* data) {
    string path = string(data->userName) + "/" + string(data->userName) + ".txt";
    ifstream reading(path, ios::in);
    person *details = new person();
    reading.read((char*)&(*details), sizeof(*details));
    while (!reading.eof()) {
        string temp = string(data->userName) + "/" + string(details->name) + string(details->phoneNo) + ".txt";
        int status = remove(temp.c_str());
        if (status) {
            cout << "\n\t\t\t\t\t\t\t\t\t\tSOME FILE MAY BE DELETED\n\n";
            cout << "\n\t\t\t\t\t\t\t\t\t\tERROR OCCURED PRESS ANY KEY TO CONTINUE";
            char ch = getch();
            return;
        }
        reading.read((char*)&(*details), sizeof(*details));
    }
    reading.close();
    int status = remove(path.c_str());
    if(rmdir(string(data->userName).c_str()) == -1){
        cerr << " ERROR : " << strerror(errno) << endl;
        cout << "SOME FILE MAY BE DELETED\n\n";
        char ch = getch();
        return;
    }
    else {
        ifstream reading2;
        ofstream writing;
        reading2.open("userName.txt", ios::in);
        writing.open("temp.txt");
        user *details = new user();
        reading2.read((char*)&(*details), sizeof(*details));
        while (!reading2.eof()) {
            if (strcmp(data->userName, details->userName)){
                writing.write((char*)&(*details), sizeof(*details));
            }
            reading2.read((char*)&(*details), sizeof(*details));
        }
        reading2.close();
        writing.close();
        char ch = getch();
        reading2.open("temp.txt");
        writing.open("userName.txt");
        reading2.read((char*)&(*details), sizeof(*details));
        while (!reading2.eof()) {
            writing.write((char*)&(*details), sizeof(*details));
            reading2.read((char*)&(*details), sizeof(*details));
        }
        writing.close();
        reading2.close();
        cout << "\n\n\t\t\t\t\t\t\t\t\t\tACCOUNT SUCCESSFULLY DELETED\n\n";
        char ch2 = getch();
    }
} 

void doOperationByName(user* data) {
    system("cls");
    string Name;
    cout << "\n\n\t\t\t\t\t\t\t\t\tEnter Name : ";
    getline(cin, Name);
    long count = 0;
    string path = string(data->userName) + "/" + string(data->userName) + ".txt";
    ifstream reading(path, ios::in);
    person* details = new person();
    vector<person> temp;
    reading.read((char*)&(*details), sizeof(*details));
    while (!reading.eof()) {
        if (!(isEqual(details->name, Name))) {
            cout << "\n\t" << ++count << ")  Name- " << details->name << "\t Phone No. - " << details->phoneNo << "\t Amount - " << details->amount << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------------";
            temp.resize(count);
            temp[count-1].insertData(details->name, details->phoneNo, details->amount);
        }
        reading.read((char*)&(*details), sizeof(*details));
    }
    if (count == 0) {
        system("cls");
        cout << "\n\n\n\t\t\tNo Record Found";
        cout << "\n\n\t\t\t\tPress Any Key To Continue...";
        char ch = getch();
        system("cls");
        return;
    }
    else if (count == 1) {
        person* copy = new person();
        copy->copyData(temp[0]);
        doOperation(data, copy);
    }
    else {
        cout << "\n\t\t\t\t\t\t\t\t\t\tFollowing Data Found";
        cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Serial Number Or Phone Number To Continue : ";
        string input;
        cin >> input;
        if (input.length() < 10) {
            long long index = (long long)(stod(input));
            if (temp.size() >= index) {
                person* copy = new person();
                copy->copyData(temp[index-1]);
                doOperation(data, copy);
            }
            else {
                cout << "INVALID";
                char ch = getch();
            }
        }
        else {
            bool check = true;
            for (int i = 0; i < temp.size(); i++) {
                person* copy = new person();
                copy->copyData(temp[i]);
                if (copy->name == Name && copy->phoneNo == input) {
                    doOperation(data, copy);
                    check = false;
                    return;
                }
            }
            if (check) {
                system("cls");
                cout << "\n\n\n\t\t\tNo Record Found";
                cout << "\n\n\t\t\t\tPress Any Key To Continue...";
                char ch = getch();
                system("cls");
                return;
            }
        }
    }
}

void doOperationByPhoneNumber(user* data) {
    string PhoneNumber;
    cout << "\n\n\t\t\t\t\t\t\t\t\tEnter PhoneNumber : ";
    cin >> PhoneNumber;
    long count = 0;
    string path = string(data->userName) + "/" + string(data->userName) + ".txt";
    ifstream reading(path, ios::in);
    person* details = new person();
    vector<person> temp;
    system("cls");
    reading.read((char*)&(*details), sizeof(*details));
    while (!reading.eof()) {
        if (!strcmp(details->phoneNo, PhoneNumber.c_str())) {
            cout << "\n\t" << ++count << ")  Name- " << details->name << "\t Phone No. - " << details->phoneNo << "\t Amount - Rs." << details->amount << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------------";
            temp.resize(count);
            temp[count-1].insertData(details->name, details->phoneNo, details->amount);
        }
        reading.read((char*)&(*details), sizeof(*details));
    }
    reading.close();
    if (count == 0) {
        system("cls");
        cout << "\n\n\n\t\t\tNo Record Found";
        cout << "\n\n\t\t\t\tPress Any Key To Continue...";
        char ch = getch();
        system("cls");
        return;
    }
    else if (count == 1) {
        person* copy = new person();
        copy->copyData(temp[0]);
        doOperation(data, copy);
    }
    else {
        cout << "\n\t\t\t\t\t\t\t\t\t\tFollowing Data Found";
        cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Serial Number Or Name To Continue : ";
        string input;
        fflush(stdin);
        getline (cin, input);
        if (input.length() == 1 && is_digits(input)) {
            long long index = (long long)(stod(input));
            person* copy = new person();
            copy->copyData(temp[index-1]);
            doOperation(data, copy);
        }
        else {
            bool check = true;
            for (int i = 0; i < temp.size(); i++) {
                person* copy = new person();
                copy->copyData(temp[i]);
                if (!(isEqual(copy->name, input.c_str()) || strcmp(copy->phoneNo, PhoneNumber.c_str()))) {
                    doOperation(data, copy);
                    check = false;
                    return;
                }
            }
            if (check) {
                system("cls");
                cout << "\n\n\n\t\t\tNo Record Found";
                cout << "\n\n\t\t\t\tPress Any Key To Continue...";
                char ch = getch();
                system("cls");
                return;
            }
        }
    }
}

void doOperation(user* data, person* details) {
    system("cls");
    cout << "\n\n\t\t\t\t\t\t\t\t\tWELCOME TO TRANSACTION PAGE\n\n";
    cout << "\t\t\t\t\t\t    ------------------------------ MENU ------------------------------\n\n";
    cout << "\t\t\t\t\t\t\t********************************************************** \n";
    cout << "\t\t\t\t\t\t\t|                                                        | \n";
    cout << "\t\t\t\t\t\t\t|                    Press 1 To Add More Items           | \n";
    cout << "\t\t\t\t\t\t\t|                                                        | \n";
    cout << "\t\t\t\t\t\t\t|                    Press 2 To Pay                      | \n";
    cout << "\t\t\t\t\t\t\t|                                                        | \n";
    cout << "\t\t\t\t\t\t\t|                    press 3 To Exit                     | \n";
    cout << "\t\t\t\t\t\t\t|                                                        | \n";
    cout << "\t\t\t\t\t\t\t********************************************************** \n";
    cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
    char choice;
    while (true) {
        choice = getch();
        if (choice == '1' || choice == '2' || choice == '3') {
            cout << choice;
            break;
        }
    }
    if (choice == '1') {
        cout << "\n\n\t\t\t\t\t\t\t\t\t\tHow Many Items You Want To Add : ";
        int num;
        cin >> num;
        string path = string(data->userName) + "/" + string(details->name) + string(details->phoneNo) + ".txt"; 
        for (int i = 0; i < num; i++) {
            system("cls");
            cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Details Of " << i+1 << " Item...\n\n\n";
            // ========================== Inserting Item =====================================================
            record* item = new record();
            item->takeInput();
            ofstream writing;
            writing.open(path, ios :: app);
            if (details->amount < 0) {
                if (abs(details->amount) < item->itemPrice) {
                    double temp = item->itemPrice;
                    item->itemPrice += details->amount;
                    details->amount = 0;
                    writing.write((char*)&(*item), sizeof(*item));
                }
                else {
                    details->amount += item->itemPrice;
                }
            }
            else {
                writing.write((char*)&(*item), sizeof(*item));
            }
            writing.close();
            // ======================================================================


            string path2 = string(data->userName) + "/" + string(data->userName) + ".txt";
            ifstream readingTxt;
            readingTxt.open(path2, ios :: in);
            ofstream writingTemp;
            writingTemp.open("temp.txt");
            person* temp2 = new person();
            readingTxt.read((char*)&(*temp2), sizeof(*temp2));
            while (!readingTxt.eof()) {
                if (!(isEqual(temp2->name, details->name) || strcmp(temp2->phoneNo, details->phoneNo))) {
                    double finalamount = temp2->amount;
                    finalamount += item->itemPrice;
                    temp2->amount = finalamount;
                }
                writingTemp.write((char*)&(*temp2), sizeof(*temp2));
                readingTxt.read((char*)&(*temp2), sizeof(*temp2));
            }
            writingTemp.close();
            readingTxt.close();

            // ---------------------------------------------------------------------------


            writing.open(path2);
            readingTxt.open("temp.txt", ios::in);
            readingTxt.read((char*)&(*temp2), sizeof(*temp2));
            while (!readingTxt.eof()) {
                writing.write((char*)&(*temp2), sizeof(*temp2));
                readingTxt.read((char*)&(*temp2), sizeof(*temp2));
            }
            writing.close();
            readingTxt.close();

            // ================================================================================
            user* copying = new user();
            writing.open("temp.txt");
            readingTxt.open("userName.txt");

            readingTxt.read((char*)&(*copying), sizeof(*copying));
            while (!readingTxt.eof()) {
                if (!(strcmp(data->userName, copying->userName))) {
                    double finalAmount = copying->amount;
                    finalAmount += item->itemPrice;
                    copying->amount = finalAmount;
                    // data->amount = finalAmount;
                }
                writing.write((char*)&(*copying), sizeof(*copying));
                readingTxt.read((char*)&(*copying), sizeof(*copying));
            }

            writing.close();
            readingTxt.close();

            // --------------------------------------------------------------------------
            
            writing.open("userName.txt");
            readingTxt.open("temp.txt");

            readingTxt.read((char*)&(*copying), sizeof(*copying));
            while (!readingTxt.eof()) {
                writing.write((char*)&(*copying), sizeof(*copying));
                readingTxt.read((char*)&(*copying), sizeof(*copying));
            }
            writing.close();
            readingTxt.close();
            // ==========================================================================
        }
    }
    else if(choice == '2') {
        ifstream reading;
        ofstream writing;
        double amount, copy;
        system("cls");
        cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Amount : ";
        cin >> amount;
        copy = amount;
        string path = string(data->userName) + "/" + string(details->name) + string(details->phoneNo) + ".txt";
        reading.open(path, ios::in);
        writing.open("temp.txt");
        record* item = new record();
        reading.read((char*)&(*item), sizeof(*item));
        // if (reading.eof()) {
        //     cout << "\n\t\t\t\t\t\t\t\t\t\tAmount is grater than Amount to pay\n\n";
        //     cout << "\n\t\t\t\t\t\t\t\t\t\tPress Any Key To Continue...";
        //     char ch = getch();
        //     return;
        // }
        while(!reading.eof()) {
            bool flag = true;
            if (amount > 0){
                double price = item->itemPrice;
                if (price > amount) {
                    price = price - amount;
                    item->itemPrice = price;
                }   
                else {
                    amount -= price;
                    flag = false;
                }
            }
            if (flag) {
                writing.write((char*)&(*item), sizeof(*item));
            }
            reading.read((char*)&(*item), sizeof(*item));
        }
        // if (amount > 0) {
        //     cout << "\n\t\t\t\t\t\t\t\t\t\tAmount is grater than Amount to pay\n\n";
        //     cout << "\n\t\t\t\t\t\t\t\t\t\tPress Any Key To Continue...";
        //     char ch = getch();
        //     return;
        // }
        reading.close();
        writing.close();
        reading.open("temp.txt", ios::in);
        writing.open(path);
        reading.read((char*)&(*item), sizeof(*item));
        while(!reading.eof()) {
            writing.write((char*)&(*item), sizeof(*item));
            reading.read((char*)&(*item), sizeof(*item));
        }
        reading.close();
        writing.close();
        // ------------------------------------------------------------------------------------------
        string path2 = string(data->userName) + "/" + string(data->userName) + ".txt";
        person* personDetails = new person();
        reading.open(path2, ios::in);
        writing.open("temp.txt");
        reading.read((char*)&(*personDetails), sizeof(*personDetails));
        while (!reading.eof()) {
            if (!(isEqual(personDetails->name, details->name) || strcmp(personDetails->phoneNo, details->phoneNo))) {
                double temp = personDetails->amount - copy;
                personDetails->amount = temp;
            }
            writing.write((char*)&(*personDetails), sizeof(*personDetails));
            reading.read((char*)&(*personDetails), sizeof(*personDetails));
        }
        reading.close();
        writing.close();

        reading.open("temp.txt");
        writing.open(path2);

        reading.read((char*)&(*personDetails), sizeof(*personDetails));
        while (!reading.eof()) {
            writing.write((char*)&(*personDetails), sizeof(*personDetails));
            reading.read((char*)&(*personDetails), sizeof(*personDetails));
        }
        reading.close();
        writing.close();
    }
    else return;
    refreshAccount(data);
}

void refreshAccount(user* data) {
    ifstream reading;
    ofstream writing;
    double finalAmount = 0;
    string path = string(data->userName) + "/" + string(data->userName) + ".txt";
    person* details = new person();
    reading.open(path, ios::in);
    reading.read((char*)&(*details), sizeof(*details));
    while (!reading.eof()) {
        double totalAmount = details->amount; 
        if ((!check(data, details))) {
            totalAmount = findTotalAmount(data, details);
            details->amount = totalAmount;
        }
        updateRecord(data, details, totalAmount);
        finalAmount += totalAmount;
        reading.read((char*)&(*details), sizeof(*details));
    }
    reading.close();
    reading.open("userName.txt");
    writing.open("temp.txt");
    user* copy = new user();
    reading.read((char*)&(*copy), sizeof(*copy));
    while(!reading.eof()) {
        if (!strcmp(copy->userName, data->userName)) {
            copy->amount = finalAmount;
            data->amount = finalAmount;
        }
        writing.write((char*)&(*copy), sizeof(*copy));
        reading.read((char*)&(*copy), sizeof(*copy));
    }

    reading.close();
    writing.close();

    reading.open("temp.txt", ios::in);
    writing.open("userName.txt");

    reading.read((char*)&(*copy), sizeof(*copy));
    while (!reading.eof()) {
        writing.write((char*)&(*copy), sizeof(*copy));
        reading.read((char*)&(*copy), sizeof(*copy));
    }

    reading.close();
    writing.close();
}


double findTotalAmount(user* data, person* details) {
    ifstream reading;
    string path = string(data->userName) + "/" + string(details->name) + string(details->phoneNo) + ".txt";
    double currentAmount = 0;
    reading.open(path, ios::in);
    record* item = new record();
    
    reading.read((char*)&(*item), sizeof(*item));
    while (!reading.eof()) {
        currentAmount += item->itemPrice;
        reading.read((char*)&(*item), sizeof(*item));
    }
    reading.close();


    return currentAmount;
}

void updateRecord(user* data, person* details, double finalAmount) {
    ifstream reading;
    ofstream writing;
    string path = string(data->userName) + "/" + string(data->userName) + ".txt";
    reading.open(path, ios::in);
    writing.open("temp.txt");
    person* copy = new person();
    reading.read((char*)&(*copy), sizeof(*copy));
    while (!reading.eof()) {
        if (!(isEqual(details->name, copy->name) || strcmp(details->phoneNo, copy->phoneNo))) {
            copy->amount = finalAmount;        
        }
        writing.write((char*)&(*copy), sizeof(*copy));
        reading.read((char*)&(*copy), sizeof(*copy));
    }

    reading.close();
    writing.close();


    reading.open("temp.txt", ios::in);
    writing.open(path);
    
    reading.read((char*)&(*copy), sizeof(*copy));
    while (!reading.eof()) {
        writing.write((char*)&(*copy), sizeof(*copy));
        reading.read((char*)&(*copy), sizeof(*copy));
    }

}

void displayRecordDetails(user* data, person* details) {
    system("cls");
    cout << "\t\tUserName - " << data->userName << "\t\t Phone No. - " << data -> phoneNumber << " \t\t Amount - "<< details->amount << endl << endl; 
    ifstream reading;
    string path = string(data->userName) + "/" + string(details->name) + string(details->phoneNo) + ".txt";
    record* item = new record();
    reading.open(path, ios::in);
    long int count = 1;
    reading.read((char*)&(*item), sizeof(*item));
    while (!reading.eof()) {
        cout << endl << count++ << ")  Date- " << item->date << "\t Item-Name - " << item->itemName << "\t Item-Quantity - " << item->quantity << "\t Price - Rs" << item->itemPrice << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------------";
        reading.read((char*)&(*item), sizeof(*item));
    }

    cout << "\n\nPress Any Key To Continue...";
    char ch = getch();
}

void displayPersonRecord(user* data) {
    system("cls");
    char choice;
    cout << "\n\n\n\t\t\t\t\t\t    ------------------------------ MENU ------------------------------\n\n";
    cout << "\t\t\t\t\t\t\t********************************************************** \n";
    cout << "\t\t\t\t\t\t\t|                                                        | \n";
    cout << "\t\t\t\t\t\t\t|                    Press 1 To Find By Name             | \n";
    cout << "\t\t\t\t\t\t\t|                                                        | \n";
    cout << "\t\t\t\t\t\t\t|                    Press 2 To Find By Phone Number     | \n";
    cout << "\t\t\t\t\t\t\t|                                                        | \n";
    cout << "\t\t\t\t\t\t\t********************************************************** \n";
    cout << "\n\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
    fflush(stdin);
    while (true) {
        choice = getch();
        if (choice >= '1' && choice <= '2'){
            cout << choice;
            break;
        } 
    }
    if (choice == '1') {
        findByName(data);
    }
    else {
        findByPhoneNumber(data);
    }   
}

void findByName(user* data) {
    system("cls");
    string Name;
    cout << "\n\n\t\t\t\t\t\t\t\t\tEnter Name : ";
    fflush(stdin);
    getline(cin, Name);
    long count = 0;
    string path = string(data->userName) + "/" + string(data->userName) + ".txt";
    ifstream reading(path, ios::in);
    person* details = new person();
    vector<person> temp;
    reading.read((char*)&(*details), sizeof(*details));
    while (!reading.eof()) {
        if (!(isEqual(details->name, Name.c_str()))) {
             cout << "\n\t" << ++count << ")  Name- " << details->name << "\t Phone No. - " << details->phoneNo << "\t Amount - Rs." << details->amount << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------------";
           
            temp.resize(count);
            temp[count-1].insertData(details->name, details->phoneNo, details->amount);
        }
        reading.read((char*)&(*details), sizeof(*details));
    }
    if (count == 0) {
        system("cls");
        cout << "\n\n\n\t\t\tNo Record Found";
        cout << "\n\n\t\t\t\tPress Any Key To Continue...";
        char ch = getch();
        system("cls");
        return;
    }
    else if (count == 1) {
        person* copy = new person();
        copy->copyData(temp[0]);
        displayRecordDetails(data, copy);
    }
    else {
        cout << "\n\n\t\t\t\t\t\t\tFollowing Data Found";
        cout << "\n\n\t\t\t\t\t\t\tEnter Serial Number Or Phone Number To Continue : ";
        string input;
        cin >> input;
        if (input.length() < 10) {
            long long index = (long long)(stod(input));
            if (temp.size() >= index) {
                person* copy = new person();
                copy->copyData(temp[index-1]);
                displayRecordDetails(data, copy);
            }
            else {
                cout << "INVALID";
                char ch = getch();
            }
        }
        else {
            bool check = true;
            for (int i = 0; i < temp.size(); i++) {
                person* copy = new person();
                copy->copyData(temp[i]);
                if (copy->name == Name && copy->phoneNo == input) {
                    displayRecordDetails(data, copy);
                    check = false;
                    return;
                }
            }
            if (check) {
                system("cls");
                cout << "\n\n\n\t\t\tNo Record Found";
                cout << "\n\n\t\t\t\tPress Any Key To Continue...";
                char ch = getch();
                system("cls");
                return;
            }
        }
    }
}

void findByPhoneNumber (user* data) {
    system("cls");
    string PhoneNumber;
    cout << "\n\n\t\t\t\t\t\t\t\t\tEnter PhoneNumber : ";
    cin >> PhoneNumber;
    long count = 0;
    string path = string(data->userName) + "/" + string(data->userName) + ".txt";
    ifstream reading(path, ios::in);
    person* details = new person();
    vector<person> temp;
    reading.read((char*)&(*details), sizeof(*details));
    while (!reading.eof()) {
        if (!strcmp(details->phoneNo, PhoneNumber.c_str())) {
            cout << "\n\t" << ++count << ")  Name- " << details->name << "\t Phone No. - " << details->phoneNo << "\t Amount - Rs." << details->amount << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------------";

            temp.resize(count);
            temp[count-1].insertData(details->name, details->phoneNo, details->amount);
        }
        reading.read((char*)&(*details), sizeof(*details));
    }
    reading.close();
    if (count == 0) {
        system("cls");
        cout << "\n\n\n\t\t\tNo Record Found";
        cout << "\n\n\t\t\t\tPress Any Key To Continue...";
        char ch = getch();
        system("cls");
        return;
    }
    else if (count == 1) {
        person* copy = new person();
        copy->copyData(temp[0]);
        displayRecordDetails(data, copy);
    }
    else {
        cout << "\n\n\t\t\t\t\t\t\tFollowing Data Found";
        cout << "\n\n\t\t\t\t\t\t\tEnter Serial Number Or Name To Continue : ";
        string input;
        fflush(stdin);
        getline (cin, input);
        if (input.length() == 1 && is_digits(input)) {
            long long index = (long long)(stod(input));
            person* copy = new person();
            copy->copyData(temp[index-1]);
            displayRecordDetails(data, copy);
        }
        else {
            bool check = true;
            for (int i = 0; i < temp.size(); i++) {
                person* copy = new person();
                copy->copyData(temp[i]);
                if (!(isEqual(copy->name, input.c_str()) || strcmp(copy->phoneNo, PhoneNumber.c_str()))) {
                    displayRecordDetails(data, copy);
                    check = false;
                    return;
                }
            }
            if (check) {
                system("cls");
                cout << "\n\n\n\t\t\tNo Record Found";
                cout << "\n\n\t\t\t\tPress Any Key To Continue...";
                char ch = getch();
                system("cls");
                return;
            }
        }
    }
}


void printAllKhata(user* data) {
    system("cls");
    ifstream reading;
    person details;
    int count = 0;
    string path = string(data->userName) + "/" +  string(data->userName) + ".txt";
    reading.open(path, ios :: in);
    fflush(stdin);
    reading.read((char*)(&details), sizeof(details));
    while (!reading.eof()) {
        cout << "\n\t" << ++count << ")  Name- " << string(details.name) << "\t Phone No. - " << string(details.phoneNo) << "\t Amount - " << details.amount << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------------";
        reading.read((char*)&(details), sizeof(details));
    }
    reading.close();
    cout << "\n\nPress Any Key To Continue...";
    char ch = getch();
}

bool checkExistance(user* data, person* details) {
    ifstream reading;
    string path = string(data->userName) + "/" + string(data->userName) + ".txt";
    reading.open(path, ios::in);
    person* copy = new person();
    reading.read((char*)&(*copy), sizeof(*copy));
    while (!reading.eof()) {
        if (!(isEqual(details->name, copy->name) || strcmp(details->phoneNo, copy->phoneNo))) {
            reading.close();
            return true;
        }
        reading.read((char*)&(*copy), sizeof(*copy));
    }
    reading.close();

    return false;
}

bool check(user* data, person* details) {
    ifstream reading;
    string path = string(data->userName) + "/" + string(details->name) + string(details->phoneNo) + ".txt";
    reading.open(path);
    record* temp = new record();
    reading.read((char*)&(*temp), sizeof(*temp));
    if (reading.eof()) return true;
    else return false;
}
