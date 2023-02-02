#include <bits/stdc++.h>
#include "loginSignup.h"
#include "printIndexPage.h"
using namespace std;

int main () {
    ofstream myFile("userName.txt", ios::app);
    if(myFile.fail()){
        cout << "Error Found";
        return 0;
    }
    while (true) {
        char choice;
        printIndexPage();  
        while (true) {
            choice = getch();
            if (choice >= '1' && choice <= '3') {
                cout << choice;
                break;
            }
        }
        if (choice == '1') {
            bool result = verifyLogin();
            if (!result) {
                system("cls");
                system("COLOR F0");
                cout << "\n\n\t\t\t\t\t\t\t\t\t";
                cout << "--> Invalid Id Password <--\n";
                cout << "\n\n\t\t\t\t\t\t\t\t\t";
                cout << "Enter Any Key To Continue... ";
                char ch = getch();
            }
        } 
        else if (choice == '2') signup();
        else if (choice == '3') forgotIdPassword();
        else {
            system("cls");
            cout << "Invalid Choice";
        }
    }
}