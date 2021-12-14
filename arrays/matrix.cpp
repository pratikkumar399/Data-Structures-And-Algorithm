#include <iostream>

using namespace std;

 int main()

{

  int n,i;

  cout<<"size of the array";

  cin>>n;

 

  int a[n],b[n],c[n*2];

 cout<<"Array A "<<endl;

  for(i=0;i<n;i++)

  {

    cout<<"a[ "<<i<<" ] = ";

    cin>>a[i];

  }

  cout<<"Array B "<<endl;

  for(i=0;i<n;i++)

  {

    cout<<"b[ "<<i<<" ] = ";

    cin>>b[i];

  } //Concatenate A and B in C Lang

  for(i=0;i<n;i++)

  {

    c[i]=a[i];

    c[n*2-(n-i)]=b[i];

  }

 

  //Result of the merge

  cout<<"C = [ ";

  for(i=0;i<2*n;i++)

    cout<<c[i]<<" ";

  cout<<" ] ";

  return 0;

}