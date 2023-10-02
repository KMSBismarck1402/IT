#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    int i,N,x;
    cin >> N;
    node *h = NULL;
    for(i=0;i<N;i++)
    {
        cin >> x;
        p->next = new node;
        p=p->next;
        p->data=x;
        p->next=NULL;
     /*   p->data = x;
        p->next = h;
        h = p;
        cout<< h << " "<< h->data << " " << h->next << "\n"; */
    }
    p =h;
  //  node *p = h;
    while(p!=NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << "\n";
    return 0;
}
