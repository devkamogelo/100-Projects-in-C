app:	main.o menu.o queue.o
	gcc main.o menu.o queue.o -o app
main.o:	main.c menu.h queue.h
	gcc -c main.c
menu.o: menu.c menu.h
	gcc -c menu.c
queue.o:	queue.c queue.h
	gcc -c queue.c
clean:	
	rm -f *.o app