CC = gcc
BIN = bin/
SRC = src/
INCLUDES = include/
EXEC = k_means

#CFLAGS = -O2
CFLAGS = -O3
#CFLAGS = -funroll-loops -O2
#CFLAGS = -funroll-loops -O3
#CFLAGS =  -ftree-vectorize -msse4 -O2
#CFLAGS =  -ftree-vectorize -msse4 -O3

.DEFAULT_GOAL = k_means

k_means: $(SRC)k_means.c $(BIN)utils.o
	$(CC) $(CFLAGS) $(SRC)k_means.c $(BIN)utils.o -o $(BIN)$(EXEC) -lm

$(BIN)utils.o: $(SRC)utils.c $(INCLUDES)utils.h
	$(CC) $(CFLAGS) -c $(SRC)utils.c -o $(BIN)utils.o

clean:
	rm -r bin/*

run:
	./$(BIN)$(EXEC)
