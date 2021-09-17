#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* link;
};
struct node* head;
void print()
{
    struct node* temp=(struct node*)malloc(sizeof(struct node*));
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
    temp->link=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        struct node* t;
        t=head;
        while(t->link!=NULL){
            t=t->link;
        }
        t->link=temp;
    }

}
void deleteNode(int position)
{
    if(position==1){
        struct node* temp;
        temp=head;
        head=head->link;
        free(temp);
    }
    else{
        struct node* temp1;
        temp1=head;
        for(int i=1;i<=position-2;i++){
            temp1=temp1->link;
        }
        struct node*temp2;
        temp2=temp1->link;
        temp1->link=temp2->link;
        free(temp2);
    }
}
int main()
{
    head=NULL;
    insert(10);
    insert(4);
    insert(3);
    insert(1);
    print();
    cout<<endl;
    deleteNode(1);
    print();
}
