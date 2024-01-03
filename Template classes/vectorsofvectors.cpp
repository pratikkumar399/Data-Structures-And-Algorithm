#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N; // Uncomment to take input for N
    vector<vector<int>> v;

    int arrr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<string>> v2(3);

    vector<vector<int>> v1(N, vector<int>(N)); // 2d vector of size N x 2 and all the elements are 10

    vector<int> arr1[N]; // Using N for array size

    for (int i = 0; i < N; ++i)
    {
        // vector<int> temp(3);
        // for (auto &val : temp)
        // {
        //     cin >> val;
        // }
        // arr1[i] = temp;

        for (int j = 0; j < N; j++)
        {
            cin >> v1[i][j];
        }
    }
    // [ [], [], [] ];

    cout << "*********************" << endl;

    for (const auto &it : v1)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
