#include<string>
using namespace std;

class Computadora {
    private:
        string gpu;
        string cpu;
        int psu;
        int ram; //Gb
        int almacenamiento; //Gb
        
    public:
        //Constructor
        Computadora(string _gpu, string _cpu, int _psu, int _ram, int _almacenamiento){
            gpu = _gpu;
            cpu = cpu;
            psu = _psu;
            ram = _ram;
            almacenamiento = _almacenamiento;
        
        }
        //Setters
        void setGpu(string _gpu){
            gpu = _gpu;
        }
        void setCpu (string _cpu){
            cpu = _cpu;
        }
        void setPsu(int _psu){
            psu = _psu;
        }
        void setRam(int _ram){
            ram = _ram;
        }
        void setAlmacenamiento(int _almacenamiento){
            almacenamiento = _almacenamiento;
        }
        //Getters
        string getGpu(){
            return gpu;
        }
        string getCpu(){
            return cpu;
        }
        int getPsu(){
            return psu;
        }
        int getRam(){
            return ram;
        }
        int getAlmacenamiento(){
            return almacenamiento;
        }
        
       
};

