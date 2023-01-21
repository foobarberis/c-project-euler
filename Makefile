CC := clang
# CFLAGS := -Wunused-variable -Wno-implicit-int -Wno-return-type -pedantic -ansi
CFLAGS := -o0 -Wall -Wextra -pedantic -Wformat=2 -Wunused-variable -Wno-implicit-int -Wno-return-type
LIB := f.c
BIN := exe/

.PHONY: all clean

all:
	$(CC) $(CFLAGS) 1.c $(LIB) -o $(BIN)1.exe && \
	$(CC) $(CFLAGS) 2.c $(LIB) -o $(BIN)2.exe && \
	$(CC) $(CFLAGS) 3.c $(LIB) -o $(BIN)3.exe && \
	$(CC) $(CFLAGS) 4.c $(LIB) -o $(BIN)4.exe && \
	$(CC) $(CFLAGS) 5.c $(LIB) -o $(BIN)5.exe && \
	$(CC) $(CFLAGS) 6.c $(LIB) -o $(BIN)6.exe && \
	$(CC) $(CFLAGS) 7.c $(LIB) -o $(BIN)7.exe && \
	$(CC) $(CFLAGS) 8.c $(LIB) -o $(BIN)8.exe

clean:
	rm exe/*
