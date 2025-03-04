#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void lltraversal(struct Node*ptr){
    while (ptr!=NULL)
    { printf("element = %d\n",ptr->data);
        ptr=ptr->next;
    
    }
    
}
int getMiddle(struct Node* head){
    struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;
while (fast_ptr!=NULL && fast_ptr->next!=NULL)
{ fast_ptr= fast_ptr->next->next;
    slow_ptr=slow_ptr->next;
} return slow_ptr->data;

}
int main (){

    struct Node * head = (struct Node *)malloc (sizeof(struct Node));
    struct Node * second = (struct Node *)malloc (sizeof(struct Node));
    struct Node * third = (struct Node *)malloc (sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc (sizeof(struct Node));
    struct Node * fiveth = (struct Node *)malloc (sizeof(struct Node));

    head->data = 5;
    head->next= second;
    second->data=6;
    second->next=third;
    third->data=7;
    third->next=fourth;
    fourth->data= 8;
    fourth->next= fiveth;
    fiveth->data=9;
    fiveth->next=NULL;
  
    // printf("linked list \n");
    // lltraversal(head);
    printf ("middle :%d",getMiddle(head));
    // lltraversal(head);
}