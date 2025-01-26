#include <iostream>
using namespace std;

class Bike {
public:
    string brand;

protected:
    string material;

private:
    int engineCapacity;

    void fun() {
        brand = "";
        material = "";
        engineCapacity = 0;
        cout << "Bike private method fun() called!" << endl;
    }
};

class DuplicateBike : public Bike { 
public:
    void fun() {
        brand = "Yamaha"; 
        material = "Steel"; 
        cout << "DuplicateBike fun() called!" << endl;
        cout << "Brand: " << brand << ", Material: " << material << endl;
    }
};

int main() {
    DuplicateBike d;
    d.fun(); 
    d.brand = "Honda";
    cout << "Brand set from main: " << d.brand << endl;

    return 0;
}
