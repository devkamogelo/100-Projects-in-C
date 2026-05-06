app:	main.o atoi.o itoa.o 
		gcc main.o atoi.o itoa.o -o app -lm && clear
main.o:	main.c atoi.h
		gcc -c main.c
atoi.o: atoi.c atoi.h
		gcc -c atoi.c
itoa.o: itoa.c itoa.h
		gcc -c itoa.c
clean:	
		rm -f *.o app && clear