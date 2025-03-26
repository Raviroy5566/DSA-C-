#include<stdio.h>
#include<stdlib.h>
struct Node
{    int data;
    struct Node *next;
    struct Node* prev;
    /* data */
};
//  void cr(int data){
//     struct Node * ptr= (struct stack *)malloc(sizeof(struct Node));
//          ptr->data= data;
//          ptr->next = NULL;
//          ptr->prev= NULL;
//          return ptr;
//   }
void forwordtraversal( struct Node *ptr){
    while (ptr!=NULL)
    {
        printf("element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}
void backwordtraversal( struct Node * ptr){
    while (ptr!= NULL)
    {
        printf("element : %d\n",ptr->prev);
        ptr = ptr->prev;

    }
    
}

int main(){
    struct Node * head = (struct Node* )malloc ( sizeof( struct Node));
    struct Node* second = ( struct Node * )malloc ( sizeof ( struct Node));
    struct Node * third  = ( struct Node * )malloc ( sizeof( struct Node));
       head->data = 5;
       second->data=7;
       third->data= 9;
    head->next =second;
    second-> next= third;
    second->prev= head;
    third->prev= second;
    third->next=NULL;
     printf( " forword traversal\n ");
    forwordtraversal(head);

}