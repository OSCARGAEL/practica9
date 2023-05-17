#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "registros.h"

#define NUM_REGISTROS 20
  
int main ()
{
  
FILE * fp;
struct alumno registro;
long numeroDeRegistro = 20;

 
fp = fopen ("registros.dat", "rb");
  
if (fp == NULL)
{
printf ("Error al abrir el archivo registros.dat\n");
return 1;
    
}
srand (time (NULL));

for (int i = 0; i < NUM_REGISTROS; i++)
    {
      
numeroDeRegistro = rand () % NUM_REGISTROS;

registro = leerRegistro (fp, numeroDeRegistro);
      
printf ("Registro %ld:\n", numeroDeRegistro);
      
printf ("Matricula: %d\n", registro.matricula);
      
printf ("Nombre: %s\n", registro.nombre);
      
printf ("DirecciC3n: %s\n", registro.direccion);
      
printf ("\n");
    
    }
fclose (fp);
  
return 0;

}
