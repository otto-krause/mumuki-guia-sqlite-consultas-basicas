#include <stdio.h>
#include <stdarg.h>

char entradas[2][10] = {
  "Hola Juan",
  "Que tal"
};
char salidas[2][30];

int contEntradas=0;
int contSalidas=0;

void scanm(char * textoFormateado, void * destino){
    sscanf(entradas[contEntradas],"%s",destino);
    contEntradas++;
}

void printm(const char * format, ... )
{
  va_list args;
  va_start (args, format);
  vsprintf (salidas[contSalidas],format, args);
  va_end (args);
  contSalidas++;
}
/*
int main()
{
    
    char cad[10] = "holabb";
    char cad2[10];
    
    //sscanf(entradas[1],"%s",cad2);
    
    scanm("%s",cad2);
    scanm("%s",cad2);
    
    printm("%s %d","sandia",12);
    
    printf("%s",cad2);
    printf("%s",salidas[0]);
    return 0;
}
*/