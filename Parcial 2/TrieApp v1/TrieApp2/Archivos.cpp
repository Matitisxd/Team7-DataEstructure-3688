#ifndef ARCHIVOS_H_INCLUDED
#define ARCHIVOS_H_INCLUDED
class Archivos{
	private:
		
		
		
	public:
		void abrir();
		void leer();
};

void leer(string nombreArchivo){

    ifstream archivo;
    string texto;
    archivo.open(nombreArchivo,ios::in);
    if(archivo.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
     while(!archivo.eof()){
        getline(archivo,texto);
        cout << endl << texto << endl;
     }
    archivo.close();
}
#endif // ARCHIVOS_H_INCLUDED
