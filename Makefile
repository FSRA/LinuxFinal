main:main.o my_stack.o my_queue.o my_tree.o my_graph.o my_heap.o
	gcc main.o my_stack.o my_queue.o my_tree.o my_graph.o my_heap.o -o main
main.o:main.c
	gcc -c main.c
my_stack.o:my_stack.c
	gcc -c my_stack.c
my_queue.o:my_queue.c
	gcc -c my_queue.c
my_tree.o:my_tree.c
	gcc -c my_tree.c
my_graph.o:my_graph.c
	gcc -c my_graph.c
my_heap.o:my_heap.c
	gcc -c my_heap.c

clean:
	rm main *.o
