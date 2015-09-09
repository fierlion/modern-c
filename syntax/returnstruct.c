#include <stdio.h>

typedef struct {
  double base;
  double square;
  double cube;
} powers;

// structures get copied
// on exit, a copy of the local auto-allocated out is made,
// then the local copy is destroyed.
powers get_power(double in){
  powers out = {
    .base = in,
    .square = in*in,
    .cube = in*in*in
  };
  return out;
}

// arrays get aliased
// on exit, a copy of the pointer to out is made,
// but the data is local and will be destroyed (free())
// on function exit, so the pointer points to bad data.
int *get_evens_bad(int count){
  int out[count];
  for (int i=0; i<count; i++) {
    out[i] = 2*i;
  }
  return out;  //this is bad
}

powers get_evens_good(int count) {
  powers out = {
    
  }
}

int main() {
  powers threes = get_power(3);
  printf("%d\n", &(threes.base));
  int *bad_evens = get_evens_bad(3);
  // powers good_evens =
  printf("threes: %g\t%g\t%g\n", threes.base, threes.square, threes.cube);
  printf("bad evens: %i\t%i\t%i\n", bad_evens[0], bad_evens[1], bad_evens[2]);
  // printf("good evens: %g\t%g\t%g\n", good_evens.base, good_evens.square, good_evens.cube);
}
