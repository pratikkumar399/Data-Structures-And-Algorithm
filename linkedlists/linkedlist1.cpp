#include<bits/stdc++.h>
// #include<stdlib.h> 
using namespace std ;

struct Node {
    int data ;
    struct Node *next ;
}*first ;

void create(int A[] , int n ) {
    int i ;
    struct Node *t , *last ;
    first =  new Node ;
    first->data = A[0] ;
    first->next = NULL ;
    last = first ;

    for(i  = 1 ; i <n ; i++) {
        t = new Node ;
        t->data = A[i] ;
        t->next = NULL ;
        last->next =  t ;
        last = t ;
    }
}

int count(struct Node *p) {
    int count = 0 ;
    while(p != NULL) {
        count++ ;
        p = p->next ;
    }

    return count ;
}

void display(Node *p ) {
    while( p !=  NULL) {
        cout<<p->data << " " ;
         p = p->next ;
    }
}


int main(){
    int arr[] = {2,3,4,5,6} ;

    create(arr , 5) ;
    display (first) ;  
    count(first);
    return 0;
}