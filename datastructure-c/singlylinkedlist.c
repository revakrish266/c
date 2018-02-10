#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node node_n;
node_n *head,*first,*second,*third,*temp;
int main(void)
{
head=(node_n*)malloc(sizeof(node_n));
first=(node_n*)malloc(sizeof(node_n));
second=(node_n*)malloc(sizeof(node_n));
third=(node_n*)malloc(sizeof(node_n));
head->data=5;
head->next=first;
first->data=10;
first->next=second;
second->data=15;
second->next=third;
third->data=20;
third->next=NULL;
temp=head;
display(temp);
}
void display(node_n *temp)
{
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
