#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<char>> recoverMatrix(int m, int n, const vector<char> &targets, const vector<int> &columnIndices, const vector<int> &rowPointers)
{
    vector<vector<char>> reconstructedMatrix(m, vector<char>(n, 'z'));
    unordered_map<char, int> targetIndices;

    // Map targets to their indices
    for (int i = 0; i < targets.size(); i++)
    {
        targetIndices[targets[i]] = i;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = rowPointers[i]; j < rowPointers[i + 1]; j++)
        {
            int col = columnIndices[j];
            char target = targets[j];
            reconstructedMatrix[i][col] = target;
        }
    }

    return reconstructedMatrix;
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<char> targets(n);
    for (int i = 0; i < n; i++)
    {
        cin >> targets[i];
    }

    vector<int> columnIndices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> columnIndices[i];
    }

    vector<int> rowPointers(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> rowPointers[i];
    }

    vector<vector<char>> reconstructedMatrix = recoverMatrix(m, n, targets, columnIndices, rowPointers);

    for (int i = 0; i < reconstructedMatrix.size(); i++)
    {
        for (int j = 0; j < reconstructedMatrix[0].size(); j++)
        {
            cout << reconstructedMatrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
