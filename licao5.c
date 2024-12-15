#include <stdio.h>

int main() {
  int i, a, primo;

  printf("Numeros primos entre 1 e 101:\n");

  for (i = 2; i <= 101; i++){
    primo = 1; 
    for (a = 2; a * a <= i; a++){
      if (i % a == 0){
        primo = 0;   
      }
    }
    if (primo){
      printf("%d ", i);
    }
  }
}
