result:clean main.o my_stack.o
	gcc main.o my_stack.o -o result
main.o:main.c
	gcc -c main.c
my_stack.o:my_stack.c
	gcc -c my_stack.c

clean:
	if [ -e result ]; then rm result; fi
	if [ -e main.o ]; then rm main.o; fi
	if [ -e my_stack.o ]; then rm my_stack.o; fi