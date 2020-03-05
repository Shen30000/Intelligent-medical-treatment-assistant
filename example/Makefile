CC=gcc
runfile:add.o sub.o multi.o div.o
	$(CC) -o runfile add.o sub.o multi.o div.o run.o
add.o:add.c
	$(CC) -c add.c -o add.o
sub.o:sub.c
	$(CC) -c sub.c -o sub.o
multi.o:multi.c
	$(CC) -c multi.c -o multi.o
div.o:div.c
	$(CC) -c div.c -o div.o
run.o:run.c
	$(CC) -c run.c -o run.o
clean:
	rm *.o runfile