// CarInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Car {
private:
    int seatCapacity;
    float horsePower;
    int cc;

public:
    Car(int s=0, float h=0, int c=0) {
        seatCapacity = s;
        horsePower = h;
        cc = c;
    }

    int getSeatCapacity(){
        return seatCapacity;
    }
    void setSeatCapacity(int s) {
      seatCapacity = s;
    }

    float getHorsePower() {
        return horsePower;
    }
    void setHorsePower(int h) {
         horsePower = h;
    }

    int getCc(){
        return cc;
    }
    void setCc(int c) {
         cc = c;
    }

    void carDisplay() {
        cout << "Car have seat capacity of " << seatCapacity << " and its Horse Power is " << horsePower << " and cc is: " << cc << endl;
    }
};

class Brand : public Car {
private:
    string brand;

public:
    Brand(string b ="", int s = 0, float h = 0, int c = 0) :Car(s,h,c){
        brand = b;
        
    }
    string setBrand() {
        return brand;
    }
    void getBrand(string b) {
        brand = b;
    }

    void brandDisplay() {
        cout << "Brand is: " << brand << endl;
    }
    void displayDetails() {
        carDisplay();
        brandDisplay();
    }
};


int main()
{
    Brand b1("BMW");
    b1.setSeatCapacity(7);
    b1.setHorsePower(1952.7);
    b1.setCc(1230);
   
    b1.displayDetails();

    Brand b2 = Brand("Benz", 8, 1634.22f, 1200);
    b2.displayDetails();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
