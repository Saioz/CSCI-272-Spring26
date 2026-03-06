#include <iostream>
using namespace std;

class Car {
    private:
        string brand = "mercedes";
        string model = "fancy_model";
        int year = 2048;
    public:
        ~Car () {

            cout << "this object was destroyed :(" << endl;
        }
        Car() {
            
        }
        Car(string b, string m, int y) {
            b = brand;
            m = model;
            y = year;
            
            
        }
        Car(const Car& other) {
            
            brand = other.brand;
            model = other.model;
            year = other.year;
            
            
            
        }
    
        void startEngine() {
            cout << "Starting the engine of car {brand:" << brand << "|model:" << model << "}" << endl;
            
        }
        void accelerate() {
            cout << "Accelerating the car {brand:" << brand << "|model:" << model << "}" << endl;
        }
        void specs() {
            cout << "Your brand is: " << brand << "\n"<< "Your model is: " << model << "\n" << "model year is: " << year << endl;
        }
    
};
