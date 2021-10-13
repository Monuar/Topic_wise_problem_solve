#include<bits/stdc++.h>
using namespace std;
struct Node {
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
int getmiddle(struct Node *head)
{
    int cnt=0;
    struct Node *temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    int mid=cnt/2;
    for(int i=0;i<cnt;i++){
        if(i==mid) return head->data;
        else head=head->next;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    struct Node *head;
    head=createLinkedList(arr,6);
    int mid=getmiddle(head);
    cout<<mid<<endl;

}
