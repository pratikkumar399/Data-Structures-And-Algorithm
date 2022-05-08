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
        string str;
        int n;
        cin >> n;
        cin >> str;

        int result = 0;
        vector<int> vec;
        int count = 1; //
        for (int i = 1; i < n; i++)
        {
            if (str[i] == str[i - 1])
            {
                count++;
            }
            else
            {
                vec.push_back(count);
                count = 1;
            }
        }

        vec.push_back(count);
        for(int i = 0 ; i < vec.size(); i++){
            if(vec[i] % 2 != 0 ){
                result++ ;
                vec[i+1]-- ;

            }
        }

        cout<<result << endl;   
    }

    return 0;
}