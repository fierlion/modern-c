#include <assert.h>

typedef struct {
  int a;
  int b;
  double c;
  double d;
  int *efg;
} demo_s;

int main () {
  demo_s d1 = {.b=1, .c=2, .d=3, .efg=(int[]){4,5,6}};
  demo_s d2 = d1;

  assert(d1.b==1);
  assert(d2.efg[0]==4);
}
