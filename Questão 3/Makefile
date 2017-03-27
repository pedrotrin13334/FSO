main: main.o crescente.o decrescente.o
	gcc $(CFLAGS) -o main main.o crescente.o decrescente.o
main.o: main.c crescente.h decrescente.h
	gcc $(CFLAGS) -c main.c
crescente.o: crescente.c crescente.h
	gcc $(CFLAGS) -c crescente.c
decrescente.o: decrescente.c decrescente.h
	gcc $(CFLAGS) -c decrescente.c
clean:
	rm -f *.o main
