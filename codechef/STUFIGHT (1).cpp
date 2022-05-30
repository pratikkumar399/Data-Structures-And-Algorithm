#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int f=0;
	    long long int n,i,max=-1;
	    cin>>n;
	    long long int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==max)
	        f=1;
	        if(a[i]>max)
	        {
	            max=a[i];
	            f=0;
	        }
	    }
	    if(f==0)
	    cout<<"peace:)"<<endl;
	    else cout<<"fight:("<<endl;
	}
	return 0;
}
