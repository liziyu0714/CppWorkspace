#include <bits/stdc++.h>
using namespace std;

struct node
{
    int id;
    node *next, *pre;
};

void left_insert(node *a, node *b)
{
    if(a->pre == NULL)
    {
        a->pre = b , b->next = a , b->pre = NULL;
        return;
    }
    node *before_a = a->pre;
    a->pre = b, b->next = a;
    before_a->next = b, b->pre = a;
}

void right_insert(node *a , node *b)
{
    if(a->next == NULL)
    {
        a->next = b , b->pre = a , b->next =NULL;
        return;
    }
    node *after_a = a->next;
    after_a->pre = b , b->next = after_a;
    a->next = b , b->pre = a;
}

node* get_front(node* p)
{
    while(p -> pre != NULL)
        p = p->pre;
    return p;
}

node* find(node *head , int id )
{
    node* p = head;
    while(p -> next != NULL)
    {
        if(p -> next -> id == id)
            return p -> next;
        p = p -> next; 
    }
    return NULL;
}

int main()
{
    // freopen("line.in" , "r" , stdin);
    // freopen("line.out" , "w" , stdout);
    node *head = new(node);
    node *p = head;
    node *first = new(node);
    first ->pre =NULL , head ->next = first , first->next = NULL , first->id = 1;
    int n ;
    cin >> n;
    for(int i = 2 ; i <= n ; i ++)
    {
        int k , tp;
        cin >> k >> tp;
        node *tmp = new(node);
        tmp -> id = i , tmp ->pre =NULL , tmp ->next = NULL;
        p = find(head,k);
        if(tp == 0) left_insert(p,tmp);
        else right_insert(p,tmp);
        head = get_front(p);
    }
    cout << endl;
    // fclose(stdin);
    // fclose(stdout);
}