main: main.o dict.o
  gcc  -o dict  main.o dict.o
main.o: main.c
  gcc  -c main.c
dict.o: dict.c
  gcc -c dict.c 
clean:
  rm -f *.o dict
