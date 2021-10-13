#include<bits/stdc++.h>
using namespace std;
struct Node{
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
        if(head==NULL){
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
void insertAtBeginning(struct Node *head,int data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;
    struct Node *newhead=temp;
    struct Node *current=newhead;

    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }


}

void printLinkedList(struct Node *head)
{
    struct Node *current=head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current=current->next;
    }

}
void insertAtTheEnd(struct Node *head,int data)
{
    struct Node *newhead=head;
    while(head->next!=NULL){
        head=head->next;
    }
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    head->next=temp;
    printLinkedList(newhead);
}
int main()
{
    int arr[]={1,2,3,4,5};
    struct Node *head;
    struct Node *temp;
    head=createLinkedList(arr,5);
    temp=head;
    printLinkedList(head);
    cout<<endl;
    //Insert at the Beginning

    insertAtBeginning(head,0);
    cout<<endl;
    //Insert at the End
    insertAtTheEnd(temp,20);
}
