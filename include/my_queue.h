#ifndef _MY_QUEUE_H
#define _MY_QUEUE_H

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

Status InitQueue(LinkQueue *q)
Status EnQueue(LinkQueue *q,ElemType e)
Status DeQueue(LinkQueue *q,ElemType *e)
Status Display(LinkQueue *q)
Status PrintfQueue(LinkQueue *Q)

#endif //_MY_QUEUE_H
