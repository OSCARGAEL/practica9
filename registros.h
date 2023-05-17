#include <stdio.h>

struct alumno
{
  
int matricula;
char nombre[50];
char direccion[50];
 
};

struct alumno leerRegistro (FILE * fp, long numeroDeRegistro);

