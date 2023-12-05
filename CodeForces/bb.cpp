#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string input;
        cin >> input;

        stack<pair<char, int>> upper;
        stack<pair<char, int>> lower;

        for (int i = 0; i < input.size(); i++)
        {
            char key = input[i]; // Corrected: Added missing variable declaration

            if (key == 'B')
            {
                if (!upper.empty())
                {
                    upper.pop();
                }
            }
            else if (key == 'b')
            {
                if (!lower.empty())
                {
                    lower.pop();
                }
            }
            else if (key >= 'A' && key <= 'Z' && key != 'B') // Corrected: Added missing '&&' in the condition
            {
                upper.push(make_pair(key, i));
            }
            else if (key >= 'a' && key <= 'z')
            {
                lower.push(make_pair(key, i));
            }
        }

        vector<pair<char, int>> result;

        while (!upper.empty())
        {
            result.push_back(upper.top());
            upper.pop();
        }

        while (!lower.empty())
        {
            result.push_back(lower.top());
            lower.pop();
        }

        sort(result.begin(), result.end(), [](const auto &a, const auto &b)
             { return a.second < b.second; });

        for (auto key : result)
        {
            cout << key.first;
        }

        cout << endl;
    }

    return 0;
}
