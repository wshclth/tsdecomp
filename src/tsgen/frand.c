#include <tsgen/frand.h>

double
randf()
{
  return (rand() - RAND_HALF) / RAND_HALF;
}
