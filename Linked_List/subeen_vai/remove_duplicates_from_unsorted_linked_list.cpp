#include<bits/stdc++.h>
using namespace std;
struct Node
{
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
struct Node *removeDuplicate(struct Node *head)
{
    struct Node *curr=head;
    struct Node *prev=NULL;
    set<int>s;
    while(curr!=NULL){
        if(s.find(curr->data)!=s.end()){
            prev->next=curr->next;
            delete(curr);
        }
        else{
            prev=curr;
            s.insert(curr->data);
        }
        curr=prev->next;
    }
    return head;
};
void print(struct Node *head)
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
    int arr[]={1,2,3,4,4,5,5,6};
    struct Node *head;
    head=createLinkedList(arr,8);
    print(head);
    cout<<endl;
    struct Node *newHead;
    newHead=removeDuplicate(head);
    print(newHead);

}
