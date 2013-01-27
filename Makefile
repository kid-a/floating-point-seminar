CC=g++

print:
	$(CC) float_printing.c -o float_print

run-print:
	./float_print

vector-sum:
	$(CC) float_vector_sum.cc -lgsl -lgslcblas -o float_vector_sum

run-vector-sum:
	./float_vector_sum