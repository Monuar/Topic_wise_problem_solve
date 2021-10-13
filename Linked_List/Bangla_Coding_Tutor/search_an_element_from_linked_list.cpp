#include<bits/stdc++.h>
using namespace std;
struct Node{
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
int searchInLinkedList(struct Node *head,int n)
{
    int index=1;
    while(head!=NULL){
        if(head->data==n) return index;
        index++;
        head=head->next;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    struct Node *head;
    head=createLinkedList(arr,7);
    cout<<searchInLinkedList(head,10)<<endl;
}
