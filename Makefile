CFLAGS = -O
CC = g++
OBJDIR=objects

count-areas: main.o counter.o imagereader.o
	  $(CC) $(CFLAGS) -o count-areas objects/main.o objects/counter.o objects/imagereader.o && mv count-areas bin

main.o: src/main.cpp
		$(CC) $(CFLAGS) -c src/main.cpp && mv main.o objects
counter.o: src/counter.cpp
		$(CC) $(CFLAGS) -c src/counter.cpp && mv counter.o objects
imagereader.o: src/imagereader.cpp
		$(CC) $(CFLAGS) -c src/imagereader.cpp && mv imagereader.o objects

clean: 
	  rm -rf core *.o

