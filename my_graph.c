/*
 * my_graph的实现文件
 */

#include "include/my_graph.h"
#include <stdlib.h>
#include <stdio.h>
/*#define MAXVEX  100                      
#define INFINITY    65535          

typedef struct
{
      char vexs[MAXVEX];            //顶点表
      int  arc[MAXVEX][MAXVEX];         //邻接矩阵，可看作边
      int  numVertexes, numEdges;      //图中当前的顶点数和边数
}Graph;
*/
int visited[100]={0};

void CreateGraph(Graph *g)
{    int i,j,k,w,t;
     printf("Enter vertices, edges, and t (with space in between):");
     scanf("%d %d %d", &(g->numVertexes), &(g->numEdges),&t);
     printf("\n");
     for(i=1;i<=g->numVertexes;i++)
     {
           getchar();
          printf("Enter the %d vertex information vexs[%d]=",i,i);
          scanf("%c",&(g->vexs[i]));
     }
     printf("\n");
     for(i=1;i<=g->numVertexes;i++)
            for(j=1;j<=g->numVertexes;j++)
                if (t>2)    g->arc[i][j] = INFINITY;
                else        g->arc[i][j]=0;
     for(k=1;k<=g->numEdges;k++)
           {
            printf("Enter i j(with space in the middle):");
            scanf("%d %d",&i,&j);
            if(i>g->numVertexes ||j>g->numVertexes)  exit(0);
            if(t>2)
            {
                  printf("Input w:");
                 scanf("%d",&w);
                  g->arc[i][j]=w;
                  if(t==3)  g->arc[j][i]=w;
            }
            else
            {     g->arc[i][j]=1;
                  if (t==1)    g->arc[j][i]=1;
            }
     }
     printf("\n");
     printf("Output adjacency matrix:\n");
     for(i=1;i<=g->numVertexes ;i++)
     {


               for(j=1;j<=g->numVertexes ;j++)
               {
               printf("%8d",g->arc[i][j]);
               if(t>2&&g->arc[i][j]==65535)
                    g->arc[i][j]=0;
                 else if(t>2&&g->arc[i][j]!=65535)
                        g->arc[i][j]=1;
               }
                  printf("\n");
     }
}


void dfs (Graph g,int i)         //广度优先搜索，从顶点i开始遍历
{
       int j;
       printf("%d->",i);         //输出访问顶点
        visited[i]=1;            //全局数组访问标记置1表示已经访问
        for(j=1; j<=g.numVertexes; j++)
               if ((g.arc[i][j]==1)&&(!visited[j]))
                        dfs (g,j);
}


void bfs (Graph g,int i)
{
 int visited[MAXVEX]={0};
      int  q[g.numVertexes+1] ;
      int  f,r,j ;
      f=r=0 ;
      printf("%d->",i);
      visited[i]=1 ;
      r++;
  q[r]=i ;
      while (f<r)
      {    f++; i=q[f] ;
            for (j=1; j<=g.numVertexes; j++)
                   if ((g.arc[i][j]==1)&&(!visited[j]))
                   {    printf("%d->",j);    ;     visited[j]=1 ;     r++; q[r]=j ;  }
       }
}     
