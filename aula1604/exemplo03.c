#include <stdio.h>

int main (){
  


  for (int i = 1; i <= 10; i++)
  {
    printf("TABUADA DO %d\n", i);
    for (int j = 1; j <= 10; j++)
    {
      printf("[%3d * %3d = %3d]\n", i, j, i*j);
    }
    printf("\n");
    
  }
  

  return 0;
}