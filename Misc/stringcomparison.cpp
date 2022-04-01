#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "abz";
    string b = "Abc";

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);


    // for(char x : a){
    //     cout<<x<<" "<<endl;
    // }

    if (a == b)
    {
        cout << "Same string" << endl;
    }
    else if (a > b)
    {
        for(int i = 0; i < a.size(); i++){
            if(a[i] > b[i]){
                cout<<a[i]<<endl ;
            }
        }
    }
    else
    {
        cout << "B is greater than a " << endl;
    }
    return 0;
}