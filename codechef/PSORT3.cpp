#include <iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
#define ull unsigned long long int
bool conditionSort(const pair<ull, ull> &x, const pair<ull, ull> &y)
{
 if (x.second == y.second)
 return (x.first < y.first);
 else
 return (x.second > y.second);
}
int main()
{
 ull size, i, j;
 cin >> size;
 vector<pair<ull, ull>> vect;
 ull a[size], b[size];
 for (i = 0; i < size; i++)
 {
 cin >> a[i];
 }
 for (i = 0; i < size; i++)
 {
 cin >> b[i];
 }
 for (i = 0; i < size; i++)
 {
 vect.push_back(make_pair(a[i], b[i]));
 }
 sort(vect.begin(), vect.end(), conditionSort);
 for (i = 0; i < size; i++)
 {
 cout << vect[i].first << " " << vect[i].second << " ";
 }
}