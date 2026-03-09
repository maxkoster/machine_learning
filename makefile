CC=gcc
CFLAGS=-I. -Wall -lm

mlmake: main.o lib/ml_toolbox.o ../c_linalg/lib/linalg.o
	$(CC) -o ml_toolbox main.o lib/ml_toolbox.o ../c_linalg/lib/linalg.o $(CFLAGS)