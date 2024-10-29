#include<stdio.h>

int main( )
{
  FILE *fp;
  char ch;
  int pqtdecar = 0;
  int space = 0;
  int tabs = 0;
  int newline = 0;


  fp = fopen ( "arquivo1.txt", "r" );
  while ( 1 )
  {
    ch = fgetc(fp);
    if(ch==EOF)
      break;
    pqtdecar++;
  } 
  fclose ( fp );
  printf("Quantidade de Caracteres: %d \n",pqtdecar);
  return 0;
}
