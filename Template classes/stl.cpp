#include <bits/stdc++.h>
using namespace std;

struct node
{
    int size;
    int start;
    int end;
};

// max size of array in global declarations
// max size of 10^7 -> int, double , char outside int main()
//    for boolean data type the max array size is 10^7 outside main

int main()
{

    //  10 to the power 6 is the maximum size of an array inside main of data type int and double

    // max size of 10^6 -> int, double , char
    int array1[1000000];

    //    for boolean data type the max array size is 10^7

    bool arr1[10000000];

    array<int, 5> arr;
    arr.fill(10);

    // to access any element in the array

    arr.at(2);
    //  iterators
    // begin(),  end() , rbegin() , rend() ;

    for (int i = 0; i < 5; i++)
    {
        cout << arr.at(i) << endl;
    }

    array<int, 4> lem = {1, 2, 3, 4};

    // for(auto it : lem.begin(); it != lem.end(); it++){
    //       cout<<*it<<endl;
    // }

    for (auto it : lem)
    {
        cout << it << " " << endl;
    }

    string a = " snkkfdk";

    for (auto it : a)
    {
        cout << it << " " << endl;
    }

    // for size of the array
    cout << lem.size() << endl;

    // fornt element of the array and
    cout << lem.front() << endl; // arr.at(0) ;

    // back elememt of the array

    cout << lem.back() << endl; //arr.at(arr.size()-1) ;

    // <<<<<<<<<<--------------------------->>>>>>>>>>>>>>>>>>>>>*******

    // vector

    // int arr[50];

    vector<int> array2; //-> {}
    cout << array2.size() << endl;

    // the moment the array size becomes greater than the maximum size it throws an error known as segmentation fault

    // segmentation fault if you push back 10^7 times then this error comes up as the array size gets bigger than the maximum size

    array2.push_back(0); // {0}
    array2.push_back(1); //{0,1}
    cout << array2.size() << endl;
    array2.pop_back();             //{0}   pops out the topmost element
    cout << array2.size() << endl; // prints 1

    array2.clear(); // --> erase all elements at once {}

    vector<int> vec1(4, 0);  //{0,0,0,0} // 0makes a vector or dynamic array with 4 elements and intial value as 0
    vector<int> vec2(4, 10); //{10,10,10,10} makes 4 elemetns in the array with initial value 10

    // copy one vector into another vector

    vector<int> vec3(vec2.begin(), vec2.end()); // ->  [)
    vector<int> vec4(vec2);

    vector<int> pratik;

    pratik.push_back(1);

    // pratik.emplace_back(1) ; emplace_back takes lesser time then push back
    pratik.push_back(2);
    // the average time complexity of the push back function is O(1)
    pratik.push_back(3);
    pratik.push_back(4);
    pratik.push_back(5); //-> {1,2,3,4,5}

    // the following code prints 1 and 2 and  3 is excluded from the list
    vector<int> pratik1(pratik.begin(), pratik.begin() + 2);

    // lower bound , upper bound

    // swap swap(v1,v2)

    // begin() , end() , rbegin() , rend()

    //to define 2d vector

    vector<vector<int>> vec12;

    vector<int> ankit;

    ankit.push_back(1);
    ankit.push_back(2);

    vector<int> ankit2;

    ankit2.push_back(10);
    ankit2.push_back(20);

    vector<int> ankit3;

    ankit3.push_back(19);
    ankit3.push_back(21);
    ankit3.push_back(25);

    vec12.push_back(ankit);
    vec12.push_back(ankit2);
    vec12.push_back(ankit3);

    // it is vector itself
    // to access the 2d vector array the following loop will help us
    // method 1
    for (auto it : vec12)
    {
        for (auto it2 : it)
        {
            cout << it2 << " ";
        }
        cout << endl;
    }

    // method-2
    for (int i = 0; i < vec12.size(); i++)
    {
        for (int j = 0; j < vec12[i].size(); j++)
        {
            cout << vec12[i][j] << " ";
        }
        cout << endl;
    }

    // define 10* 20
    // vector<vector<int>> vec12(10 ,vector<int> (20,0)) ;

    vector<int> arra[4];
    arra[0].push_back(1);

    // 3d vector

    vector<vector<vector<int>>> vect(10, vector<vector<int>>(20, vector<int>(30, 0)));

    for (auto it : vect)
    {
        for (auto it2 : it)
        {
            for (auto it3 : it2)
            {
                cout << it3 << " ";
            }
            cout << endl;
        }

        // given n elements tell me the number of unique elements

        int arrrr[] = {2, 3, 4, 5, 5}; // unique elements = {2,3,4}

        set<int> st;

        //     elements in the set are arranged in ascending order

        //  we cannot access the elements of the set like array elements
        // we can access them using set.begin();

        int n;

        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.insert(x);

            // insert operation takes log(n)  time where n is the size of the set
            // so if the size of the set is 3 then the time taken is log(3);
        }
        st.erase(5); //st.erase(key) //deletes the key element from the set
        //st-> {2,3,4}
        // erase functionality
        // log n

        st.erase(st.begin()); // st.erase(iterator) // s-> {3,4}

        st.erase(st.begin(), st.end()); //st.erase(startiterator , enditerator)

        // set will only stores unique element
        // we cannot insert an element in the set if the element already exists in the set and
        // the set always returns 0  if the element is not present in the set and returns 1 i.e true if the element is present in the set

        // if there is a requirement to store duplicate elements then we can use the stl function multiset

        set<int> st = {1, 5, 7, 8};

        set<int> set1(st.begin(), st.end());
        auto itt = st.find(7); //log n //itt will be the iterator to 7

        auto ittt = st.find(9); // ittt will point tot st.end()
        st.count(1);

        st.emplace(6); //alternative of st.insert() but faster
        cout << st.size() << endl;

        for (auto it = st.begin(); it != st.end(); it++)
        {
            cout << *it << " " << endl;
        }

        for (auto it : st)
        {
            cout << it << endl;
        }

        // the following code prints the largest element in the set 
        auto itt  = st.end() ; itt-- ;
        cout<<*itt<<endl;
        auto itt1  = st.find(2) ; 
        if(itt1 == st.end() ){
            cout<<"X is not found " <<endl ;
        }

        st.erase(st.begin(), st.end()); // makes sure the entire set is deleted
        set<node> st;

        //  the function find(x)  returns an iterraror thar point  to n elements whose valye is x . Howeveer if the set doesnt contain x , the iterator will be end  ;



        unordered_set<int> st; // elements will be stored in any order

        st.insert(1);
        st.insert(2);
        st.insert(3);

        // average time complexity is constant in nature i.e. O(1) for unordered set , and the worst case is linear in size ,O(set size)
        // if the elements are not required to be stored in ascending order then remember to use the unordered set  otherwise use the ordered set
        // if there occurs a time limit error(tle) then switch to set from the unordered set

        multiset<int> ms;

        ms.insert(1);

        ms.insert(2);
        ms.insert(2);
        ms.insert(3);
        ms.insert(4); // ms.emplace(4)

        //multiset helps to insert all the elements in the sorted order
        // unline set multiset contains duplicate elements also
        // to erase all the instances use the erase tool
        ms.erase(2); //all the instances of 2 will be erased

        auto it12 = ms.find(1); // returns an iterator pointing to the first elements of 1 ;

        ms.clear(); //deletes all the set

        ms.erase(ms.begin(), ms.end()); // log n in size

        // multisets are typically  used with binary search trees
        for (auto it123 = ms.begin(); it123 != st.end(); it123++)
        {
            cout << *it123 << endl;
        }

        for (auto it123 : ms)
        {
            cout << it123 << endl;
        } //
        // to erase a particular instances use the follwing syntax a
        ms.erase(ms.find(2)); //this will find the instances of 2 and delete them from the set of

        string a = "pratik";
        string b = a + a; // concatenates the string a with itself and stores in the b string therefore the result is pratikpratik

        b[5] = 'v';        // this line adds v at the fifth position of the string
        cout << b << endl; // the otuput is prativkpratik

        // the function substr(k, x)  returns the substring that begins at position k  and has length x , and the function find(t) finds the position of the first occurence of a substring t ;
        string c = b.substr(3, 4);
        cout << c << endl; // the output is tivk

        cout << b << endl;

        //  a map is  a generalized array that takes key value pairs
        //  the keys in the map are  not consecutive and they can be of any data type
        map<string, int> m;
        m["pratik"] = 1;
        m["hello"] = 2;

        map<string, int> m;

        cout << m["helo"] << endl;
        //     the function count checks if a key exist in the map
        if (m.count("helo"))
        {
            cout << "the key exists in the map " << endl;
        }

        //  the follwoing key prints all the keys and values in a map
        for (auto x : m)
        {
            cout << x.first << " " << x.second << endl;
        }

        // code to sort , reverse and reshuflle the elements in the random order

        //  the structured map implementation  is based on a balanced binary tree nd the accessing time of the elements in the map is O (log n );

        //  the structure unordered set uses hashing and the elements takes o(1)  time on average for accessing the elements

        //  if the key is requested anf the map doesnt conatain it , the key is addes to the map with a default value

        vector<int> v;
        sort(v.begin(), v.end());
        reverse(v.begin() , v.end()) ;
        random_shuffle(v.begin() , v.end()) ;


        // the usage of bistset to represent arrays helps us in saving a lot of memeory 
        bitset<10>  s(string("0010011010")) ;
        cout<<s.count() <<endl ;

        // the following code shows examples of using bit operatrions 

        bitset<10> a(string("0010110110")) ;
        bitset<10> b(string("1011011000")) ;

        // cout<<(a & b) << endl ;
        // cout<<(a|b) <<endl ;
        return 0;
    }
}