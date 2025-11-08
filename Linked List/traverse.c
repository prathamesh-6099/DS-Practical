#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void LinkTraversal( struct Node *ptr){
    while(ptr!=NULL){
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}
int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in the heap
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    //Linked first and second nodes
    head->data=31;
    head->next=second;

    //Linked second node to third node
    second->data=23;
    second->next=third;

    //Linked third node to fourth node
    third->data=42;
    third->next=fourth;

    //terminate the list at fourth node 
    fourth->data=35;
    fourth->next=NULL;

    LinkTraversal(head);

}