#include <stdio.h>
#include <gsl/gsl_blas.h>

#define VEC_SIZE 10000

int main ()
{
  float result_naive;
  float result_gsl;
  
  // create a vector
  gsl_vector * vector = gsl_vector_alloc(VEC_SIZE);
  
  for (int index = 0; index < VEC_SIZE; ++index)
    {
      gsl_vector_set (vector, index, 0.1);
      //printf ("%4.20f\n", gsl_vector_get (vector, index));
    }
  
  // compute the sum, naive version
  result_naive = 0.0;
  
  for (int index = 0; index < VEC_SIZE; ++index)
    result_naive += gsl_vector_get (vector, index);
  
  // compute the sum, with gsl
  result_gsl = gsl_blas_dasum(vector);
  
  printf("\n");
  printf("Naive result: %4.20f\n", result_naive);
  printf("GSL result  : %4.20f\n", result_gsl);

  return 0;
}
