#include <bits/stdc++.h>
using namespace std;

bool checkPassword(string str) {
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

bool email(string str) {
    if (!strstr(str.c_str(), ".com")) return false;
    int pos = -1;
    for (int i = 0; i < str.length(); i++) {
        if (pos != -1 && str[i] == '@') return false;  
        if (str[i] == '@') {
            pos = i;
        }
    }
    if (str.find(".com") != string::npos) {
        int pos2 = str.find(".com");
        if (pos2 > pos && pos > 0) return true;
    }
    return false;
}

bool phoneNumber(string str) {
    if (str[0] == '+') {
        int pos = 0;
        while (str[pos] != ' ') pos++;
        if (str.length() - pos - 1 >= 10) return true;
    }

    else {
        if (str.length() >= 10) return true;
    }

    return false;
}

bool isEqual(string str, string str2) {
    int len = str.length();
    int len2 = str2.length();
    if (len != len2) return true;

    for (int i = 0; i < len; i++) {
        if ((str[i] == str2[i]) || (char(str[i] + 32) == str2[i]) || (char(str[i] - 32) == str2[i])) {
            continue;
        }
        return true;
    }

    return false;
}

bool is_digits(const string &str)
{
    return std::all_of(str.begin(), str.end(), ::isdigit); 
}

