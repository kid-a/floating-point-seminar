CC=gcc
C++=g++

print:
	$(CC) float_printing.c -o float_print

run-print:
	./float_print