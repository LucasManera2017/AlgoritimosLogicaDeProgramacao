#include <stdio.h>

int main (void) {

  for (int i = 1; i < 11; i++)
  { if (i == 5)  continue;
    printf("%d\n", i);
  }

    return 0;
}