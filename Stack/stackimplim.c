#include<stdio.h>
#include<stdlib.h>
 struct stack{
      int top;
       int size;
       int *arr;
 };
  int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }else{
        return 0;
    }
  }
  int isFull(struct stack *ptr){
    if (ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;
    }
  }
  void push(struct stack *ptr,int val){
       if(isFull){
        printf("stack overflow ! cannot push %d to the stack\n");
       }else{
        ptr->top++;
        ptr->arr[ptr->top]= val;
       }
  }
  int pop(struct stack *ptr){
    if(isEmpty){
        printf("stack underflow ! cannot pop from the stack\n");
        return -1;
    }else{
        int val = ptr-> arr[ptr->top];
        ptr->top--;
        return val;
    }
  }
  int main(){
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp-> arr=(int*)malloc(sp->size*sizeof(int));
    printf("stack has been created successfuly\n");
    printf("before pushing ,Full : %d\n",isFull);
    printf("before pushing , Empty : %d\n",isEmpty);
    push(sp, 22);
    push(sp, 32);
    push(sp, 20);
    push(sp, 40);
     return 0;
  }
 