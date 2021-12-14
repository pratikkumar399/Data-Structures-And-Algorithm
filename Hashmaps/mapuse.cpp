#include <bits/stdc++.h>
using namespace std;

int main()
{
      unordered_map<string, int> usemap;
      // unordered map uses hashtable for implementation with a time complexity of O(1).

      pair<string, int> p("abc", 1);
      // to insert
      usemap.insert(p);
      usemap["def"] = 1;
      

      // find or access
      cout << usemap["abc"] << endl; // inserts 0 as default and returns 0 if the key is not present in the unordered_map

      cout << usemap.at("abc") << endl; // gives key not found error if the element is not present in the map

      return 0;

}