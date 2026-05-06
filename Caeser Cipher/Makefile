app:	main.o handleString.o menu.o
		gcc main.o handleString.o menu.o -o app && clear
main.o:	main.c handleString.h
		gcc -c main.c
encryptString.o:	handleString.c handleString.h
		gcc -c handleString.c
menu.o:	menu.c
		gcc -c menu.c
clean:
		rm -f *.o app