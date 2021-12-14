#include <bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *prev;
    struct Node *next;
    int data;
} *first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    int i;

    first = new Node;
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)

    {
        /* code */
        t = new Node ;
        t->data = A[i] ;
        t->next = last->next ;
        last->next = t ;
        last = t ;
}
}

void insert(struct Node *p, int index , int x ){
     struct Node *t ;
     int i ;
     if(index< 0 || index > length){
         return ;
      }
     if (index ==  0 ){
         t = new Node ;
         t->data = x;
         t->prev =NULL; 
         t->next = first ;
         first ->prev = t ;
         first = t ;

         
     }
     else{
         for (i = 0 ; i< index -1 ; i++ ){
              p= p-> next ;
         }
              t = new Node ;

              t->data= x ;
              
     }



}



void display(struct Node *p){
    while(p != NULL){
        cout<<p->data<<" "  ;
        p = p->next ; 
    }
    cout<<endl ;
}

int length(struct Node *p){
    int len = 0 ;
    while(p){
        len++ ;
        p = p->next ;

    }
    return len  ;
}

int main()
{
   int a[] = {10 , 30 , 50 , 70 , 90} ;
   create(a ,5) ; 
   
   cout << "Length is " << length(first) << endl ;
   display(first) ;
    return 0;
}