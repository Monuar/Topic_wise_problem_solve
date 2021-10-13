#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node *createLinkedList(int arr[],int sz)
{
    struct Node *head=NULL, *temp=NULL, *curr=NULL;
    for(int i=0;i<sz;i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            curr=temp;
        }
        else{
            curr->next=temp;
            curr=curr->next;
        }
    }
    return head;
}
void insertNode(struct Node *head,int position,int value)
{
    struct Node *temp=head;
    int counter=0;
    while(temp!=NULL){
        counter++;
        if(counter==position){
            //insert Node
            struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
            newNode->data=value;
            newNode->next=temp->next;
            temp->next=newNode;
        }
        temp=temp->next;
    }
}
void printLinkedList(struct Node *head)
{
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    struct Node *head;
    head=createLinkedList(arr,5);
    printLinkedList(head);
    cout<<endl;
    insertNode(head,3,555);
    printLinkedList(head);
}
