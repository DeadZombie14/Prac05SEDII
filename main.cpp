#include "header.h"
/*

Se crear� un programa que posiblemente almacene los siguientes datos:
nombre de materia,
c�digo de materia,
nrc,
nombre de profesor,
d�as y horas de impartici�n,
secci�n,
entre otros.


Las operaciones que debe realizar el programa.

- Mostrar un men� para realizar las operaciones.
- Dar de alta un registro. (Una alta por operaci�n)
- Modificar un registro determinado a partir de una b�squeda. (En la operaci�n se puede modificar todo el registro, con excepci�n del identificador.
- Mostrar todos los registros (La muestra no ser� ordenada)
- Mostrar los registros ordenados (No se altera la estructura principal)
- Buscar y mostrar un registro solicitado
- Permitir eliminaci�n temporal.
- Permitir recuperaci�n de un registro eliminado temporalmente.
- Realizar eliminaci�n total (o llamada f�sica). No es posible recuperar el registro.

*/

// TODO Eliminar espacios en blanco de archivo
// TODO warning para cuando no existe un dato (como código de profesor)
// TODO cambiar delimitador al grabar archivo para facilitar la lectura

int main() {
    App app;
    app.leerArchivo();
    app.guardarArchivo();
    app.contarDatos();
    // app.imprimirDatos();

    cout << "Presiona entrar para salir...";
    cin.get();
    return 0;
}