#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
struct Node *createLinkedList(int arr[],int sz)
{
    struct Node *head=NULL,*temp=NULL,*curr=NULL;
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
bool checkPalindrome(struct Node *head)
{
    struct Node *slow=head,*fast=head,*curr=head,*prev=NULL;
    while(fast&&fast->next)
    {
        curr=slow;
        slow=slow->next;
        fast=fast->next->next;
        curr->next=prev;
        prev=curr;
    }
    if(fast!=NULL) slow=slow->next;
    while(prev!=NULL)
    {
        if(prev->data==slow->data) return false;
        prev=prev->next;
        slow=slow->next;
    }
    return true;
};
void print(struct Node *head)
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    struct Node *head;
    head=createLinkedList(arr,5);
    print(head);
    cout<<endl;
    bool flag=checkPalindrome(head);
    cout<<flag<<endl;
}
