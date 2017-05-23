result:clean main.o my_stack.o my_queue.o my_tree.o my_graph.o my_heap.o
	gcc main.o my_stack.o my_queue.o my_tree.o my_graph.o my_heap.o-o result
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
	if [ -e result ]; then rm result; fi
	if [ -e main.o ]; then rm main.o; fi
	if [ -e my_stack.o ]; then rm my_stack.o; fi
	if [ -e my_queue.o ]; then rm my_queue.o; fi
	if [ -e my_tree.o ]; then rm my_tree.o; fi
	if [ -e my_graph.o ]; then rm my_graph.o; fi
clean:
        if [ -e my_heap.o ]; then rm my_heap.o; fi
