#include <stdio.h>
#include <stdlib.h>

#include "calcfact.h"
//comentario de prueba en fact.c
int main(int argc, char **argv)
{
  int num;
  if (argc!=2)
  {
	printf("uso: %s <numero>\n", argv[0]);
        exit(-1);
  }
  num=atoi(argv[1]);
  printf ("resultado: el factorial de [%d] es [%d].\n", num, calcfact(num));
}
