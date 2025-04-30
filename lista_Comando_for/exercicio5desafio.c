#include <stdio.h>


int main () {
  int proximo = 0, primeiro = 0, segundo = 1; 

  for (int i = 0; i < 15; i++)
  {
    printf("%d ", primeiro);
        proximo = primeiro + segundo; //2 // 3 // 5
        primeiro = segundo; //1 // 2 // 3
        segundo = proximo; // 2 // 3 // 5 
  }
  
  return 0; 
}