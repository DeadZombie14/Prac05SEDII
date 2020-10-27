#include "App.h"

App::App(/* args */) {
}

void App::leerArchivo(void) {
    cout << "|--- Cargango desde archivo "<<RUTA_ARCHIVO<<" ---|" << endl;
    auto start = high_resolution_clock::now();
    string linea, elemento;
    vector<string> datos;
    archivo.open(RUTA_ARCHIVO,std::ios::in);

    /***
    Variables de almacenamiento de datos temporal.
    ***/
    long nrc;
    char st;
    string departamento, area, clave, materia, seccion, edif, aula, profesor, diasSem, fechaInicio, fechaFin, nivel;
    int hrsTeoria, hrsLab, creditos, cupo, ocup, disp, ini, fin;

    while(!archivo.eof()) {
        getline(archivo, linea);
        if (linea.compare("") != 0){ // Si la linea no esta vacia
            stringstream s(linea);
            while(getline(s, elemento, ',')) {
                    datos.push_back(elemento);
            }
            stringstream nrc_(datos[0]);
            nrc_ >> nrc;
            st = datos[1].at(0);
            departamento = datos[2];
            area = datos[3];
            clave = datos[4];
            materia = datos[5];
            stringstream hrsTeoria_(datos[6]);
            hrsTeoria_ >> hrsTeoria;
            stringstream hrsLab_(datos[7]);
            hrsLab_ >> hrsLab;
            seccion = datos[8];
            stringstream creditos_(datos[9]);
            creditos_ >> creditos;
            stringstream cupo_(datos[10]);
            cupo_ >> cupo;
            stringstream ocup_(datos[11]);
            ocup_ >> ocup;
            stringstream disp_(datos[12]);
            disp_ >> disp;
            stringstream ini_(datos[13]);
            ini_ >> ini;
            stringstream fin_(datos[14]);
            fin_ >> fin;
            diasSem = datos[15] + "," +  datos[16] + "," + datos[17] + "," + datos[18] + "," + datos[19] + "," + datos[20];
            edif = datos[21];
            aula = datos[22];
            profesor = datos[23] + ", "+ datos[24];
            fechaInicio = datos[25];
            fechaFin = datos[26];
            nivel = datos[27] + datos[28];
            // TODO nivel
            // Solucion: ignorar una cant precisa de comas
            OfertaAcademica temp(nrc, st, departamento, area, clave, materia, hrsTeoria, 
            hrsLab, seccion, creditos, cupo, ocup, disp, ini, fin, diasSem, edif, 
            aula, profesor, fechaInicio, fechaFin);
            datosOferta.push_back(temp);
            datos.clear();
        }
    }
    archivo.close();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "|--- Archivo cargado! Tiempo: " << duration.count() << "ms ---|" << endl;
}
void App::guardarArchivo(void) {
    cout << "|--- Guardando archivo: "<<RUTA_ARCHIVO_SALIDA<<" ---|" << endl;
    auto start = high_resolution_clock::now(); 
    archivo.open(RUTA_ARCHIVO_SALIDA,std::ios::out);
    for(auto oferta : datosOferta) {
        oferta.modificarArchivo(&archivo);
    }
    archivo.close();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "|--- Archivo guardado! Tiempo: " << duration.count() << "ms ---|" << endl;
}
void App::buscar(void) {

}

void App::contarDatos(void) {
    int tam = datosOferta.size();
    cout << tam << endl;
}
void App::imprimirDatos(void) {
    for(auto oferta : datosOferta) {
        oferta.imprimirDatos();
    }
}

App::~App() {
}