#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data ;
    node *next;
};

int main()
{
    node* head = new(node);
    head->next = NULL;
    int n;
    cin >> n;
    node *p;
    for(int i = 0 ; i < n ; i ++)
    {
        node *tmp = new(node);
        cin >> tmp->data;
        p = head;
        while(p -> next != NULL && p -> next -> data < tmp -> data)
            p = p -> next;
        tmp -> next = p -> next;
        p -> next = tmp;  
    }
    p = head;
    while(p -> next != NULL)
    {
        cout << p -> next -> data << " ";
        p = p -> next;
    }
    cout << endl;
    return 0;
}