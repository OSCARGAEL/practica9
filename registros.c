#include <stdio.h>
#include "registros.h"

struct alumno leerRegistro (FILE * fp, long numeroDeRegistro)
{
  
struct alumno registro;
 
fseek (fp, numeroDeRegistro * sizeof (struct alumno), SEEK_SET);
fread (&registro, sizeof (struct alumno), 1, fp);
  
return registro;
}
