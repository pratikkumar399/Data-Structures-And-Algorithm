#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        char a, b;
        cin >> a >> b;

        int answer1 = int(a - 96);
        int answer2 = int(b - 96);
        int sol ;
        if(answer2<= answer1){
            sol =  26 * (answer1 - 1) + (answer2 -answer1)  +1;
        }
        else{
            sol = 26 * (answer1 - 1) + (answer2 -answer1)  ;
        }
        cout<<sol<<endl;
    }

    return 0;
}