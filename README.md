# Linuxfinal
/* 22920152203891 LiuYifan */

    Hi,teacher! Here is an example for testing，If you have any question about this project,please contact me~ 
    Thank the teacher for the patience of a semester to help me solve the problems, and the grade of this course is very 
    important to me,Hope you could give me a satisfactory grade（*＾-＾*）
    My email：1169659587@qq.com
    My phone：18859278702
  
    fsra@fsra-VirtualBox:~$ git clone https://GitHub.com/FSRA/Linuxfinal.git
    /*
    Cloning into 'Linuxfinal'...
    remote: Counting objects: 193, done.
    remote: Compressing objects: 100% (21/21), done.
    remote: Total 193 (delta 10), reused 0 (delta 0), pack-reused 172
    Receiving objects: 100% (193/193), 24.87 KiB | 0 bytes/s, done.
    Resolving deltas: 100% (111/111), done.
    Checking connectivity... done.
    */
    fsra@fsra-VirtualBox:~$ cd Linuxfinal
    fsra@fsra-VirtualBox:~/Linuxfinal$ ls
    /*
    include  Makefile    my_heap.c   my_stack.c
    main.c   my_graph.c  my_queue.c  my_tree.c
    */
    fsra@fsra-VirtualBox:~/Linuxfinal$ make
    /*
    gcc -c main.c
    gcc -c my_stack.c
    gcc -c my_queue.c
    gcc -c my_tree.c
    gcc -c my_graph.c
    gcc -c my_heap.c
    gcc main.o my_stack.o my_queue.o my_tree.o my_graph.o my_heap.o -o main
    */

    fsra@fsra-VirtualBox:~/Linuxfinal$ ./main
    Select the data structure to verify
    Stack：1	 Queue：2	 Tree：3	 Graph：4	 Heap：5
    
    1 
    Enter the five elements in the stack and verify the nature of the stack FILO：
    2 3 7 9 1
    1	9	7	3	2	
    //Here continue inputing ./main,and choose the other numbers.
    
    2
    Enter the five elements in the queue and verify the nature of the stack FIFO：
    2 3 7 8 1
    The elements in the queue are
    2 3 7 8 1 
    The first element to DeQueue is
    2
    The remaining sequence is
    3 7 8 1
    
    3
    It is used to implement the pre order of the binary tree, the in order, and the post order traversal, and the depth of the tree and the number of leaf nodes of the tree
    Please enter the value of the first node, -1 for no leaves:
    2
    Enter the left child node of  2 5
    Enter the left child node of  5 1
    Enter the left child node of  1 3
    Enter the left child node of  3 -1
    Enter the right child of  3 7
    Enter the left child node of  7 -1
    Enter the right child of  7 8
    Enter the left child node of  8 9
    Enter the left child node of  9 -1
    Enter the right child of  9 -1
    Enter the right child of  8 -1
    Enter the right child of  1 -1
    Enter the right child of  5 -1
    Enter the right child of  2 -1
    The pre order traverses the binary tree:
    2 5 1 3 7 8 9 
    The in order traverses the binary tree:
    3 7 9 8 1 5 2 
    The post order traverses the binary tree:
    9 8 7 3 1 5 2 
    The deepth of the binary tree:7
    
    4
    It is used to finish the BFS and DFS for the undirected graph,directed graph,the weighted undirected graph and the weighted directed graph
    t is of 1~4,respectively are the undirected graph,directed graph,the weighted undirected graph and the weighted directed graph:
    Enter vertices, edges, and t (with space in between):5 3 1

    Enter the 1 vertex information vexs[1]=1
    Enter the 2 vertex information vexs[2]=2
    Enter the 3 vertex information vexs[3]=3
    Enter the 4 vertex information vexs[4]=4
    Enter the 5 vertex information vexs[5]=5

    Enter i j(with space in the middle):1 2
    Enter i j(with space in the middle):1 3
    Enter i j(with space in the middle):2 3

    Output adjacency matrix:
           0       1       1       0       0
           1       0       1       0       0
           1       1       0       0       0
           0       0       0       0       0
           0       0       0       0       0

    Please enter the i:1

    The dfs is：1->2->3->finish
    The bfs is：1->2->3->finish
    
    5
    Please input 5 datas of the heap sorting:
    98137
    After the heap sorting：
    1 3 7 8 9 

