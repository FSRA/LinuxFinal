#include <stdio.h>
#include <stdlib.h>

#include "include/my_stack.h"
#include "include/my_queue.h"
#include "include/my_tree.h"
#include "include/my_graph.h"
#include "include/my_heap.h"

int main() 
{
      int key;

      int x;                                //the element declaration of the stack
      
      int i,n=5;
      ElemType e,de;
      LinkQueue *q=(LinkQueue *)malloc(sizeof(QNode));
      if(!q)
             return ERROR ;
       InitQueue(q);                    //the element declaration of the queue
       
       BiTree T;
       int deepth,number=0;           //the element declaration of the tree
       
       int visited[MAXVEX]={0};   //the element declaration of the graph
       
        int num[] = {98, 48, 777, 63, 57, 433, 23, 1112, 1};////the element declaration of the heap
       
        
      printf("Select the data structure to verify\n");
      printf("Stack：1\tQueue：2\tTree：3\tGraph：4\tHeap：5\n");
      scanf("%d",&key);
      
      switch(i)
      {
            case 1:
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
                   break;
                   
                         case 2:
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
                     break;
                     
                           case 3:
              {
                     printf("It is used to implement the pre order of the binary tree, the in order, and the post order traversal, and the depth of the tree and the number of leaf nodes of the tree\n");
                     printf("Please enter the value of the first node, -1 for no leaves:\n");
                     CreateBiTree(&T);
                      printf("The pre order traverses the binary tree:\n");
                      TraverseBiTree(T);
                      printf("\n");
                      printf("The in order traverses the binary tree:\n");
                      InOrderBiTree(T);
                      printf("\n");
                      printf("The post order traverses the binary tree:\n");
                      PostOrderBiTree(T);
                      printf("\n");
                      deepth=TreeDeep(T);
                      printf("The deepth of the binary tree:%d",deepth);
                      printf("\n");
                      Leafcount(T,number);
                      printf("The number of the leaves:%d",number);
                      printf("\n");
             }
                break;
                
            case 4:
             { 
                   printf("It is used to finish the BFS and DFS for the undirected graph,directed graph,the weighted undirected graph and the weighted directed graph\n");
                   printf("t is of 1~4,respectively are the undirected graph,directed graph,the weighted undirected graph and the weighted directed graph:\n");
                   CreateGraph(&g);
                   printf("\nPlease enter the i:");
                    scanf("%d",&i);
                    printf("\nThe dfs is：");
                    dfs (g,i);
                    printf("finish\n");
                    printf("The bfs is：");
                    bfs (g,i);
                    printf("finish\n");
                }
                  break;
                  
            case 5:
             {
                 printf("The data of the heap sorting:\n");
                 for(i = 0; i < sizeof(num)/sizeof(int); i++)
                  {
                      printf("%d ", num[i]);
                  }
                  printf("\n");
                  HeapSort(num, sizeof(num)/sizeof(int));
                  printf("After the heap sorting：\n");
                  for(i = 0; i < sizeof(num)/sizeof(int); i++)
                  {
                      printf("%d ", num[i]);
                  }
                  printf("\n");
             }
             break;
      }
         return 0;
}
