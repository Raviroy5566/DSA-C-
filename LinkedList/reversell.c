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
struct Node* reverseList(struct Node* head) {

    // Initialize three pointers: curr, prev and next
    struct Node *curr = head, *prev = NULL, *next;

    // Traverse all the nodes of Linked List
    while (curr != NULL) {

        // Store next
        next = curr->next;

        // Reverse current node's next pointer
        curr->next = prev;

        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }

    // Return the head of reversed linked list
    return prev;
}

// struct Node* reverseList(struct Node* head) {
//     if (head == NULL || head->next == NULL)
//         return head;

//     // reverse the rest of linked list and put 
//     // the first element at the end
//     struct Node* rest = reverseList(head->next);

//     // Make the current head as last node of 
//     // remaining linked list
//     head->next->next = head;

//     // Update next of current head to NULL
//     head->next = NULL;

//     // Return the reversed linked list
//     return rest;
// }

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
    
    printf("linkedlist : \n");
    lltraversal(head);
    
    printf("reverse linkedlist \n");
     head = reverseList(head);
    lltraversal(head);

}