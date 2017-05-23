#ifndef _MY_GRAPH_H
#define _MY_GRAPH_H

#define MAXVEX  100                      
#define INFINITY    65535          

typedef struct
{
      char vexs[MAXVEX];            //顶点表
      int  arc[MAXVEX][MAXVEX];         //邻接矩阵，可看作边
      int  numVertexes, numEdges;      //图中当前的顶点数和边数
}Graph;

void CreateGraph(Graph *g);
void dfs (Graph g,int i);
void bfs (Graph g,int i);

#endif //_MY_GRAPH_H
