#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *createLinkedList(int arr[],int sz)
{
    struct Node *head=NULL, *temp=NULL, *current=NULL;
    for(int i=0;i<sz;i++){
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL){
            head=temp;
            current=temp;

        }
        else{
            current->next=temp;
            current=current->next;
        }
    }
    return head;
}
void reverseLinkedList(struct Node *head)
{
    struct Node *prev=NULL, *current=head, *next=NULL;
    while(current!=NULL){
        //store next
        next=current->next;
        //reverse link
        current->next=prev;
        //propagate
        prev=current;
        current=next;
    }
    head=prev;
    while(prev!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"NULL"<<endl;

}
int main()
{
    int arr[]={1,2,3,4,5};
    struct Node *head;
    head=createLinkedList(arr,5);
    struct Node *newHead=head;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
    //reverse a singly linked list
    reverseLinkedList(newHead);

}
