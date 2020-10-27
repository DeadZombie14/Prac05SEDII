#include "../clases.h"
#if !defined(OFERTA_H)
#define OFERTA_H

//NRC,ST,DEPARTAMENTO,AREA,CLAVE,MATERIA,HRS_TEORIA,HRS_LAB,SECC,CRED,CUPO,OCUP,DISP,INI,FIN,L,M,I,J,V,S,EDIF,AULA,PROFESOR,FECHA INICIO,FECHA FIN,NIVEL
class OfertaAcademica {
    private:
        long nrc;
        char st;
        string departamento, area, clave, materia, seccion, edif, aula, profesor, diasSem, fechaInicio, fechaFin, nivel;
        int hrsTeoria, hrsLab, creditos, cupo, ocup, disp, ini, fin;
    public:
        OfertaAcademica(long nrc_, char st_, string departamento_, string area_, string clave_, string materia_, int hrsTeoria_, 
        int hrsLab_, string seccion_, int creditos_, int cupo_, int ocup_, int disp_, int ini_, int fin_, string diasSem_, string edif_, 
        string aula_, string profesor_, string fechaInicio_, string fechaFin_);
        void imprimirDatos(void);
        void modificarArchivo(fstream *archivo);
        ~OfertaAcademica();
};

#endif // OFERTA_H
