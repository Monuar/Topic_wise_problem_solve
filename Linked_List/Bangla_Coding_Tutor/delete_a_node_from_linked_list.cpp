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
struct Node *deleteANode(struct Node *head,int value)
{
    struct Node *dummy=(struct Node*)malloc(sizeof(struct Node));
    dummy->next=head;
    struct Node *temp=dummy;
    while(temp->next!=NULL){
        if(temp->next->data==value){
            //delete
            temp->next=temp->next->next;
            break;
        }
        else{
            temp=temp->next;
        }
    }
    return dummy->next;
}
void printLinkedList(struct Node *head)
{
    struct Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
int main()
{
    int arr[]={1,2,3,4,5,6};
    struct Node *head=
    head=createLinkedList(arr,6);
    printLinkedList(head);
    cout<<endl;
    struct Node *temp=deleteANode(head,6);
    printLinkedList(temp);
}
