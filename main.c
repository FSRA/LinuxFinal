#include <stdio.h>
#include <stdlib.h>

#include "include/my_stack.h"
#include "include/my_queue.h"
#include "include/my_tree.h"
#include "include/my_graph.h"
#include "include/my_heap.h"

int main(void) 
{
	int key;

	int x;                              //the element declaration of the stack
	
	int i,n=5;
  ElemType e,de;
  LinkQueue *q=(LinkQueue *)malloc(sizeof(QNode));
  if(!q)
         return ERROR;
   InitQueue(q);                //the element declaration of the queue
    
	printf("Select the data structure to verify\n");
	printf("Stack：1\tQueue：2\tTree：3\tGraph：4\tHeap：5\n");
	scanf("%d",&key);
	
	switch(i)
	{
	   case 1：
               {    printf("Enter the five elements in the stack and verify the nature of the stack FILO：\n");
                    while ( ! stack_is_full() )
                      {
                          scanf("%d", &x);
                          stack_push(x);
                      }
                      while ( !stack_is_empty() ) 
                      {
                            x = stack_pop();
                            printf("%d\t", x);
                      }
                     printf("\n");
               }
               break；
      case 2：
               { 
                    printf("Enter the five elements in the queue and verify the nature of the stack FIFO：\n");
                    for(i=0;i<n;++i)
                      {
                          scanf("%d",&e);
                          EnQueue(q,e);
                      }
                     printf("The elements in the queue are\n");
                     Display(q);
                     printf("The first element to DeQueue is\n");
                     DeQueue(q,&de);
                     printf("%d\n",de);
                     printf("The remaining sequence is\n");
                     Display(q);
                     free(q);
                 }
                 break；
       case 3:
       
                    
 
      
               return 0;
}
