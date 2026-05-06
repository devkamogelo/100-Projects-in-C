game:	main.o randomNum.o
		gcc main.o randomNum.o -o game
main.o:	main.c randomNum.h
		gcc -c main.c
randomNum.o:	randomNum.c randomNum.h
		gcc -c randomNum.c
clean:
		rm -f *.o game