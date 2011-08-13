app:main.o myprint.o sort.o 
	gcc -Wall main.o myprint.o sort.o  -o app

main.o:main.c common.h print.h
	gcc  -Wall -c main.c -o main.o

myprint.o:myprint.c
	gcc  -Wall -c myprint.c -o myprint.o

sort.o:sort.c
	gcc  -Wall -c sort.c -o sort.o

#myget.o:myget.c
#	gcc -c myget.c -o myget.o

clean:
	-rm -f *.o app 

.PHONY:clean
