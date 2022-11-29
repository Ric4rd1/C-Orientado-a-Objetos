#include <string>
#include <iostream>

using namespace std;

class Magic {
    private:
        string name;
        string effect;
        int quantity;
    public:
        //Constructor
        Magic(string _name, string _effect, int _quantity) {
            name = _name;
            effect = _effect;
            quantity = _quantity;
        }
        //Getters
        string getName() {
            return name;
        }
        string getEffect() {
            return effect;
        }
        int getQuantity() {
            return quantity;
        }
        //Setters
        void setName(string _name) {
            name = _name;
        }
        void setEffect(string _effect) {
            effect = _effect;
        }
        void setQuantity(int _quantity) {
            quantity = _quantity;
        }
        //Methods
        void showMagic() {
            cout << "Name: " << name << endl;
            cout << "Effect: " << effect << endl;
            cout << "Quantity: " << quantity << endl;
        }  
};
