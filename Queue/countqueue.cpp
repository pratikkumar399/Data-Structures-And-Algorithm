#include<iostream>
#include <queue>
using namespace std;
  
int main()
{
    int count = 0, n, element;
    cout<<"How many Number of elements you want to enter :";
    cin>>n;
    
    queue<int> Q ;
    for (int i=0;i<n;i++)
    {
       cin>>element;
        Q.push(element);
    }
    
    if(Q.empty()) {
       cout<<"you have entered no element"<<endl;
   }
    
    while (!Q.empty()) {
        Q.pop();
        count++;
    }
    cout <<"THE COUNT IS :" <<" "<<count<<endl;
}