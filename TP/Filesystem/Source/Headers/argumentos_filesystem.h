#ifndef ARGUMENTOS_FILESYSTEM_H
#define ARGUMENTOS_FILESYSTEM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <commons/log.h>

#include "../../../Shared/Headers/utilidades_argumentos.h"

#define CANTIDAD_ARGUMENTOS_ESPERADOS 1
#define INDICE_ARGUMENTO_RUTA_ARCHIVO_CONFIGURACION 1
#define NOMBRE_ARGUMENTO_RUTA_ARCHIVO_CONFIGURACION "ruta archivo de configuracion"

typedef struct
{
	char *ruta_archivo_configuracion;
} t_argumentos_filesystem;

t_argumentos_filesystem *leer_argumentos(t_log *logger, int cantidad_argumentos_recibidos, char **argumentos);
void destruir_argumentos(t_argumentos_filesystem *argumentos_filesystem);

#endif /* ARGUMENTOS_FILESYSTEM_H */