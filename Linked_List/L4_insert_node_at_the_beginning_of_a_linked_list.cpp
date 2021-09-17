#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* link;
};
struct node* head;
void print()
{
    struct node* temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}
void insert(int value)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=value;
    temp->link=head;
    head=temp;
}
int main()
{
   head=NULL;
   insert(1);
   insert(3);
   insert(4);
   print();
}
