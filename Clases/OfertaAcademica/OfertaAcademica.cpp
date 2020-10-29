#include "OfertaAcademica.h"

OfertaAcademica::OfertaAcademica(long nrc_, char st_, string departamento_, string area_, string clave_, string materia_, int hrsTeoria_, 
        int hrsLab_, string seccion_, int creditos_, int cupo_, int ocup_, int disp_, int ini_, int fin_, string diasSem_, string edif_, 
        string aula_, string profesor_, long codigoProfesor_, string fechaInicio_, string fechaFin_, string nivel_) {
        nrc = nrc_;
        st = st_;
        departamento = departamento_;
        area = area_;
        clave = clave_;
        materia = materia_;
        hrsTeoria = hrsTeoria_;
        hrsLab = hrsLab_;
        seccion = seccion_;
        creditos = creditos_;
        cupo = cupo_;
        ocup = ocup_;
        disp = disp_;
        ini = ini_;
        fin = fin_;
        diasSem = diasSem_;
        edif = edif_;
        aula = aula_;
        profesor = profesor_;
        codigoProfesor = codigoProfesor_;
        fechaInicio = fechaInicio_;
        fechaFin = fechaFin_;
        nivel = nivel_;
}

void OfertaAcademica::imprimirDatos(void) {
    cout << "NRC :" << nrc << endl;
    cout << "ST :" << st << endl;
    cout << "DEPARTAMENTO :" << departamento << endl;
    cout << "AREA :" << area << endl;
    cout << "CLAVE :" << clave << endl;
    cout << "MATERIA :" << materia << endl;
    cout << "HRS_TEORIA :" << hrsTeoria << endl;
    cout << "HRS_LAB :" << hrsLab << endl;
    cout << "SECCION :" << seccion << endl;
    cout << "CREDITOS :" << creditos << endl;
    cout << "CUPO :" << cupo << endl;
    cout << "OCUP :" << ocup << endl;
    cout << "DISP :" << disp << endl;
    cout << "INI :" << ini << endl;
    cout << "FIN :" << fin << endl;
    cout << "DIAS_SEM :" << diasSem << endl;
    cout << "EDIF :" << edif << endl;
    cout << "AULA :" << aula << endl;
    cout << "PROFESOR :" << profesor << endl;
    cout << "CODIGO PROFESOR :" << codigoProfesor << endl;
    cout << "FECHA_INICIO :" << fechaInicio << endl;
    cout << "FECHA_FIN :" << fechaFin << endl;
    cout << "NIVEL :" << nivel << endl;
}

void OfertaAcademica::modificarArchivo(fstream *archivo) {
    *archivo << nrc << ",";
    *archivo << st << ",";
    *archivo << departamento << ",";
    *archivo << area << ",";
    *archivo << clave << ",";
    *archivo << materia << ",";
    *archivo << hrsTeoria << ",";
    *archivo << hrsLab << ",";
    *archivo << seccion << ",";
    *archivo << creditos << ",";
    *archivo << cupo << ",";
    *archivo << ocup << ",";
    *archivo << disp << ",";
    *archivo << ini << ",";
    *archivo << fin << ",";
    *archivo << diasSem << ","; // < -------
    *archivo << edif << ",";
    *archivo << aula << ",";
    *archivo << profesor << "(" << codigoProfesor << ")" << ","; // < -------
    *archivo << fechaInicio << ",";
    *archivo << fechaFin << ",";
    *archivo << nivel << "\n";// < -------
}

OfertaAcademica::~OfertaAcademica() {
}
