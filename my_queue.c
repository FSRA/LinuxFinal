/*
 * my_queue的实现文件
 */
#include "include/my_queue.h"
#include <stdlib.h>
#include <stdio.h>
/*
#define ElemType int
#define Status int
#define OK 1
#define ERROR 0

typedef struct QNode
{
    ElemType data;
    struct QNode *next;
}QNode;

typedef struct LinkQueue
{
    QNode *front;
    QNode *rear;
}LinkQueue;
*/
Status InitQueue(LinkQueue *q)
{
    q->front=q->rear=(QNode *)malloc(sizeof(QNode));
    if(!q->front)
          return ERROR;
    q->front->next=NULL;
    return OK;
}

Status EnQueue(LinkQueue *q,ElemType e)
{
     QNode *p=(QNode *)malloc(sizeof(QNode));
     if(!p)
           return ERROR;
     p->data=e;
     p->next=NULL;
     q->rear->next=p;//入队操作，从队尾(rear)进入
     q->rear=p;//相当于rear++，q->rear指向下一个位置
               //符合入队操作的基本要求
     return OK;
}

Status DeQueue(LinkQueue *q,ElemType *e)
{
    QNode *p=(QNode *)malloc(sizeof(QNode));
    if(!p)
         return ERROR;

    p=q->front->next;//q指向的是front指针的下一个位置
                     //亦即队首元素
    *e=p->data;
    q->front->next=p->next;//出队操作后，front++
    if(q->rear==p)//判断是否全部出队
          q->rear=q->front;//如果全部出队，则将队列置为空
    return OK;
}

Status Display(LinkQueue *q)
{
    QNode *p;
    p=q->front->next;
    while (p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
    return OK;
}

Status PrintfQueue(LinkQueue *Q)
{
    QNode *p;
     for(p=Q->front->next;p!=NULL;p=p->next)
       {
          printf("%d",p->data);
       }
    return OK;
}
