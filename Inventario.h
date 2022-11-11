#include<string>
using namespace std;

class Inventario {
    private:
        string articulo;
        int fila;
        int columna;

        
    public:
        //Constructor
        Inventario(string art, int _fila, int _columna){
            articulo = art;
            fila = _fila;
            columna = _columna;
        }
        //Setters
        void setArticulo(string art){
            articulo = art;
        }
        void setFila(int fil){
            fila = fil;
        }
        void setColumna(int col){
            columna = col;
        }
        //Getters
        string getArticulo(){
            return articulo;
        }
        int ubicacion(){
            //int ubi[2] = fila, columna;
            return 0;
        }
};

