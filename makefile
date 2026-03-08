mlmake: main.c lib/ml_toolbox.c
	gcc -o ml_toolbox main.c lib/ml_toolbox.c -I. -Wall -lm