#include<string>
using namespace std;

class Cliente {
    private:
        string nombre;
        float cargo;
        int antiguedad = 0;

        
    public:
        //Constructor
        Cliente(string _nombre, float _cargo, int _antiguedad){
            nombre = _nombre;
            cargo = _cargo;
            antiguedad = _antiguedad;
        }
        //Setters
        void setCargo(float _cargo){
            cargo = _cargo;
        }       
        //Getters
        string getNombre(){
            return nombre;
        }
        float getCargo(){
            return cargo;
        }
        int getAntiguedad(){
            return antiguedad;
        }
        float descuento(float ant){
            int descuento;
            if (ant >= 1){
                descuento = 10;
            }
            else if (ant > 5){
                descuento = 15;
            }
            return descuento;
        }
       
};

