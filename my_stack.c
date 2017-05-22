/*
 * my_stack的实现文件
 */

#include "include/my_stack.h"
#define MAX_SIZE 5

int stack[MAX_SIZE+1] = {0}, // start from index 1
    	top = 0;

int stack_capacity() 
{
	  return MAX_SIZE;
}

int stack_size() 
{
	  return MAX_SIZE - top;
}

int stack_is_empty() 
{
      if ( top == 0 )
       {
        return 1;
        } 
      else 
       {
        return 0;
       }
}
int stack_is_full() 
{
        if ( top == MAX_SIZE ) 
         {
            return 1;
         } 
         else
         {
          return 0;
         }
}

void stack_push(int x)
 {
      if ( stack_is_full() )
       {
          return ;
       } 
      else 
      {
         stack[++top] = x;
      }
}

int stack_pop()
 {
      if ( stack_is_empty() ) 
      {
        return -1;
       } 
       else 
       {
        return stack[top--];
      }
}
