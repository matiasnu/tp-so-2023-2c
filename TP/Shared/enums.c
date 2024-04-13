#include "Headers/enums.h"

const char* nombre_opcode(op_code opcode)
{
    switch (opcode)
    {
        // Kernel a CPU
        case SOLICITUD_EJECUTAR_PROCESO: return "'SOLICITUD_EJECUTAR_PROCESO'";
        case SOLICITUD_INTERRUMPIR_PROCESO: return "'SOLICITUD_INTERRUMPIR_PROCESO'";
        case RESPUESTA_DEVOLVER_PROCESO_POR_SER_INTERRUMPIDO: return "'RESPUESTA_DEVOLVER_PROCESO_POR_SER_INTERRUMPIDO'";
        case RESPUESTA_DEVOLVER_PROCESO_POR_CORRECTA_FINALIZACION: return "'RESPUESTA_DEVOLVER_PROCESO_POR_CORRECTA_FINALIZACION'";
        case RESPUESTA_DEVOLVER_PROCESO_POR_SLEEP: return "'RESPUESTA_DEVOLVER_PROCESO_POR_SLEEP'";
        case RESPUESTA_DEVOLVER_PROCESO_POR_WAIT: return "'RESPUESTA_DEVOLVER_PROCESO_POR_WAIT'";
        case RESPUESTA_DEVOLVER_PROCESO_POR_SIGNAL: return "'RESPUESTA_DEVOLVER_PROCESO_POR_SIGNAL'";
        case RESPUESTA_DEVOLVER_PROCESO_POR_ERROR: return "'RESPUESTA_DEVOLVER_PROCESO_POR_ERROR'";
        case RESPUESTA_DEVOLVER_PROCESO_POR_PAGEFAULT: return "'RESPUESTA_DEVOLVER_PROCESO_POR_PAGEFAULT'";
        case RESPUESTA_DEVOLVER_PROCESO_POR_OPERACION_FILESYSTEM: return "'RESPUESTA_DEVOLVER_PROCESO_POR_OPERACION_FILESYSTEM'";

        // Kernel a Memoria
        case SOLICITUD_INICIAR_PROCESO_MEMORIA: return "'SOLICITUD_INICIAR_PROCESO_MEMORIA'";
        case SOLICITUD_FINALIZAR_PROCESO_MEMORIA: return "'SOLICITUD_FINALIZAR_PROCESO_MEMORIA'";
        case SOLICITUD_CARGAR_PAGINA_EN_MEMORIA: return "'SOLICITUD_CARGAR_PAGINA_EN_MEMORIA'";

        // Kernel a Filesystem
        case SOLICITUD_ABRIR_ARCHIVO_FS: return "'SOLICITUD_ABRIR_ARCHIVO_FS'";
        case SOLICITUD_CREAR_ARCHIVO_FS: return "'SOLICITUD_CREAR_ARCHIVO_FS'";
        case SOLICITUD_TRUNCAR_ARCHIVO_FS: return "'SOLICITUD_TRUNCAR_ARCHIVO_FS'";
        case SOLICITUD_LEER_ARCHIVO_FS: return "'SOLICITUD_LEER_ARCHIVO_FS'";
        case SOLICITUD_ESCRIBIR_ARCHIVO_FS: return "'SOLICITUD_ESCRIBIR_ARCHIVO_FS'";

        // CPU a Kernel
        case RESPUESTA_EJECUTAR_PROCESO: return "'RESPUESTA_EJECUTAR_PROCESO'";
        case RESPUESTA_INTERRUMPIR_PROCESO: return "'RESPUESTA_INTERRUMPIR_PROCESO'";
        case SOLICITUD_DEVOLVER_PROCESO_POR_SER_INTERRUMPIDO: return "'SOLICITUD_DEVOLVER_PROCESO_POR_SER_INTERRUMPIDO'";
        case SOLICITUD_DEVOLVER_PROCESO_POR_CORRECTA_FINALIZACION: return "'SOLICITUD_DEVOLVER_PROCESO_POR_CORRECTA_FINALIZACION'";
        case SOLICITUD_DEVOLVER_PROCESO_POR_SLEEP: return "'SOLICITUD_DEVOLVER_PROCESO_POR_SLEEP'";
        case SOLICITUD_DEVOLVER_PROCESO_POR_WAIT: return "'SOLICITUD_DEVOLVER_PROCESO_POR_WAIT'";
        case SOLICITUD_DEVOLVER_PROCESO_POR_SIGNAL: return "'SOLICITUD_DEVOLVER_PROCESO_POR_SIGNAL'";
        case SOLICITUD_DEVOLVER_PROCESO_POR_ERROR: return "'SOLICITUD_DEVOLVER_PROCESO_POR_ERROR'";
        case SOLICITUD_DEVOLVER_PROCESO_POR_PAGEFAULT: return "'SOLICITUD_DEVOLVER_PROCESO_POR_PAGEFAULT'";
        case SOLICITUD_DEVOLVER_PROCESO_POR_OPERACION_FILESYSTEM: return "'SOLICITUD_DEVOLVER_PROCESO_POR_OPERACION_FILESYSTEM'";

        // CPU a Memoria
        case SOLICITUD_PEDIR_INSTRUCCION_A_MEMORIA: return "'SOLICITUD_PEDIR_INSTRUCCION_A_MEMORIA'";
        case SOLICITUD_PEDIR_INFO_DE_MEMORIA_INICIAL_PARA_CPU: return "'SOLICITUD_PEDIR_INFO_DE_MEMORIA_INICIAL_PARA_CPU'";
        case SOLICITUD_PEDIR_NUMERO_DE_MARCO_A_MEMORIA: return "'SOLICITUD_PEDIR_NUMERO_DE_MARCO_A_MEMORIA'";
        case SOLICITUD_LEER_VALOR_EN_MEMORIA: return "'SOLICITUD_LEER_VALOR_EN_MEMORIA'";
        case SOLICITUD_ESCRIBIR_VALOR_EN_MEMORIA: return "'SOLICITUD_ESCRIBIR_VALOR_EN_MEMORIA'";

        // Memoria a Kernel
        case RESPUESTA_INICIAR_PROCESO_MEMORIA: return "'RESPUESTA_INICIAR_PROCESO_MEMORIA'";
        case RESPUESTA_FINALIZAR_PROCESO_MEMORIA: return "'RESPUESTA_FINALIZAR_PROCESO_MEMORIA'";
        case RESPUESTA_CARGAR_PAGINA_EN_MEMORIA: return "'RESPUESTA_CARGAR_PAGINA_EN_MEMORIA'";

        // Memoria a CPU
        case RESPUESTA_PEDIR_INSTRUCCION_A_MEMORIA: return "'RESPUESTA_PEDIR_INSTRUCCION_A_MEMORIA'";
        case RESPUESTA_PEDIR_INFO_DE_MEMORIA_INICIAL_PARA_CPU: return "'RESPUESTA_PEDIR_INFO_DE_MEMORIA_INICIAL_PARA_CPU'";
        case RESPUESTA_NUMERO_DE_MARCO_A_CPU: return "'RESPUESTA_NUMERO_DE_MARCO_A_CPU'";
        case RESPUESTA_LEER_VALOR_EN_MEMORIA: return "'RESPUESTA_LEER_VALOR_EN_MEMORIA'";
        case RESPUESTA_ESCRIBIR_VALOR_EN_MEMORIA: return "'RESPUESTA_ESCRIBIR_VALOR_EN_MEMORIA'";

        // Memoria a Filesystem
        case SOLICITUD_PEDIR_BLOQUES_A_FILESYSTEM: return "'SOLICITUD_PEDIR_BLOQUES_A_FILESYSTEM'";
        case SOLICITUD_LIBERAR_BLOQUES_EN_FILESYSTEM: return "'SOLICITUD_LIBERAR_BLOQUES_EN_FILESYSTEM'";
        case SOLICITUD_LEER_PAGINA_EN_SWAP: return "'SOLICITUD_LEER_PAGINA_EN_SWAP'";
        case SOLICITUD_ESCRIBIR_PAGINA_EN_SWAP: return "'SOLICITUD_ESCRIBIR_PAGINA_EN_SWAP'";
        case RESPUESTA_ESCRIBIR_BLOQUE_EN_MEMORIA: return "'RESPUESTA_ESCRIBIR_BLOQUE_EN_MEMORIA'";
        case RESPUESTA_LEER_MARCO_DE_MEMORIA: return "'RESPUESTA_LEER_MARCO_DE_MEMORIA'";

        // Fileystem a Kernel
        case RESPUESTA_ABRIR_ARCHIVO_FS: return "'RESPUESTA_ABRIR_ARCHIVO_FS'";
        case RESPUESTA_CREAR_ARCHIVO_FS: return "'RESPUESTA_CREAR_ARCHIVO_FS'";
        case RESPUESTA_TRUNCAR_ARCHIVO_FS: return "'RESPUESTA_TRUNCAR_ARCHIVO_FS'";
        case RESPUESTA_LEER_ARCHIVO_FS: return "'RESPUESTA_LEER_ARCHIVO_FS'";
        case RESPUESTA_ESCRIBIR_ARCHIVO_FS: return "'RESPUESTA_ESCRIBIR_ARCHIVO_FS'";

        // Filesystem a Memoria
        case SOLICITUD_ESCRIBIR_BLOQUE_EN_MEMORIA: return "'SOLICITUD_ESCRIBIR_BLOQUE_EN_MEMORIA'";
        case SOLICITUD_LEER_MARCO_DE_MEMORIA: return "'SOLICITUD_LEER_MARCO_DE_MEMORIA'";
        case RESPUESTA_PEDIR_BLOQUES_A_FILESYSTEM: return "'RESPUESTA_PEDIR_BLOQUES_A_FILESYSTEM'";
        case RESPUESTA_LEER_PAGINA_EN_SWAP: return "'RESPUESTA_LEER_PAGINA_EN_SWAP'";
        case RESPUESTA_ESCRIBIR_PAGINA_EN_SWAP: return "'RESPUESTA_ESCRIBIR_PAGINA_EN_SWAP'";
        case RESPUESTA_LIBERAR_BLOQUES_EN_FILESYSTEM: return "'RESPUESTA_LIBERAR_BLOQUES_EN_FILESYSTEM'";

        // ERROR
        default: return "NOMBRE DE OPCODE DESCONOCIDO";
    }
}