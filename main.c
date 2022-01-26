#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
  int tabuada = 0;
  printf ("\nDigite a tabuada que você deseja: \n\t\t\t\n>>> ");
  scanf ("%d", &tabuada);

  for (int x = 1; x <= 10; ++x)
    {

      printf ("%dx%d = %d\n", x, tabuada, x * tabuada);
    }

  return 0;
}

