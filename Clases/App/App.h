#include "../clases.h"
#if !defined(APP_H)
#define APP_H

class App
{
    private:
        /* data */
        fstream archivo;
        // TODO cambiar a arbol binario
        vector<OfertaAcademica> datosOferta;
    public:
        App(/* args */);
        void leerArchivo(void);
        void guardarArchivo(void);
        void imprimirDatos(void);
        void buscar(void);
        void contarDatos(void);
        ~App();
};

#endif // APP_H
