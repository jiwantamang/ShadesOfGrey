CFLAGS = -O
CC = g++
OBJDIR=objects

count-areas: main.o counter.o imagereader.o commandProcessor.o
	  $(CC) $(CFLAGS) -o count-areas objects/main.o objects/counter.o objects/imagereader.o  objects/commandProcessor.o && mv count-areas bin 

main.o: src/main.cpp
		$(CC) $(CFLAGS) -c src/main.cpp && mv main.o objects
counter.o: lib/counter.cpp
		$(CC) $(CFLAGS) -c lib/counter.cpp && mv counter.o objects
imagereader.o: lib/imagereader.cpp
		$(CC) $(CFLAGS) -c lib/imagereader.cpp && mv imagereader.o objects

commandProcessor.o: lib/commandProcessor.cpp
		$(CC) $(CFLAGS) -c lib/commandProcessor.cpp && mv commandProcessor.o objects

clean: 
	  rm -rf core *.o

