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

  // change to d1 doesn't affect d2--d2 is a copy
  d1.b = 24;
  assert(d1.b==24);
  assert(d2.b==1);
  // but the copy of the pointer still points to the original data
  d1.efg[0] = 523;
  assert(d2.efg[0]==523);

  // so if your struct contains no pointers there is no need for
  // a struct copy function.
}
