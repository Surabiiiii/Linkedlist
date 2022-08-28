#include <iostream>
using namespace std;
// Length of Linkedlist
int length(Node *head)
{
   int count=0;
    Node*temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
// print ith node
void printIthNode(Node *head, int i)
{
    //Write your code here
    if(head==NULL)
        return;
    int l=length(head);
    if(i>l)
        return;
    Node*temp=head;
    for(int n=0;n<i;n++)
    {if(temp->next!=NULL)
        temp=temp->next;
    else
     break;}
    cout<<temp->data;
}
// Delete a node of linkedlist
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    if(head==NULL)
        return head;
    int l=length(head);
    if(pos>l)
        return head;
    Node*temp=head;
    if(pos==0)
    {
        head=head->next;
        return head;
    }
    for(int i=0;i<pos-1;i++)
    {
        if(temp->next!=NULL)
        temp=temp->next;
        else
            break;
    }
    temp->next=temp->next->next;
    return head;
}
// insert Node in a linked list
Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    if(head==NULL)
        return head;
    if(i==0)
    {
        Node*newnode=new Node(data);
        newnode->next=head;
        head=newnode;
    }
    
    head->next=insertNode(head->next,i-1,data);
 return head;
}
// Find a Node in Linked list
int find(Node*head,int n,int pos)
{
    if(head==NULL)
        return -1;
    if(head->data==n)
    {
        return pos;
    }
    else
    {
        return find(head->next,n,pos+1);}
    
}
int findNode(Node *head, int n){
return find(head,n,0);   
}
