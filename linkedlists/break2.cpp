#include <iostream>
using namespace std;
float Percent(float []);

int main()
{
    float marks[10][6]={0};
    int x;
    cout<<"Enter the number of students : ";
    cin>>x;
    cout<<"Enter the marks of students: \n";
    for(int i=0;i<x;i++)
    {
        cout<<"Enter the marks obtained by student "<<i<<" :"<<endl;
        cout<<"\tSub-1 = ";
        cin>>marks[i][0];
        
        cout<<"\tSub-2 = ";
        cin>>marks[i][1];
        
        cout<<"\tSubj-3 = ";
        cin>>marks[i][2];
        
        cout<<"\tSubj-4 = ";
        cin>>marks[i][3];
        
        cout<<"\tSubj-5 = ";
        cin>>marks[i][4];
        
        cout<<"\tSubj-6 = ";
        cin>>marks[i][5];
    }
    cout<<"-----------------------------------------------------------";
    cout<<"\n St.No.   Sub-1   Sub-2   Sub-3   Sub-4   Sub-5   Sub-6  ";
    cout<<"Percentage\n"<<endl;
    for(int j=0;j<x;j++)
    {
        cout<<" "<<j+1;
        cout<<"\t"<<marks[j][0];
        cout<<"\t"<<marks[j][1];
        cout<<"\t"<<marks[j][2];
        cout<<"\t"<<marks[j][3];
        cout<<"\t"<<marks[j][4];
        cout<<"\t"<<marks[j][5];
        cout<<"\t"<<Percent(marks[j]);
        cout<<"\t"<<endl;
    }
    cout<<"\n";
    
    return 0;
}
float Percent(float marks[])
{
    float sum=0;
    for(int count=0;count<6;count++)
    sum+=marks[count];
    return sum/6;
}
