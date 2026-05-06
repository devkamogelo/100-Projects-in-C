app:	main.o dynamicArray.o menu.o
	gcc main.o dynamicArray.o menu.o -o app && clear
main.o:	main.c dynamicArray.h menu.h
	gcc -c main.c
dynamicArray.o:	dynamicArray.c dynamicArray.h
	gcc -c dynamicArray.c
menu.o:	menu.c menu.h
	gcc -c menu.c
clean:
	rm -f *.o app && clear