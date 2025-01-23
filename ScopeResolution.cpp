// ScopeResolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Laptop {
private:
    string brand;
    int price;
public:
    Laptop(string B, int p);
    void setBrand(string b);
    void setPrice(int p);
    string getBrand() { return brand; }
    int getPrice() { return price; }
    void displayDetails();
};

int main()
{
    Laptop l1 = Laptop("Lenovo", 23456);
    cout << l1.getBrand() << "  " << l1.getPrice() << endl;

    l1.setBrand("AlienWare");
    l1.setPrice(56743);
    l1.displayDetails();
}

Laptop::Laptop(std::string b=0, int p=0) {
    brand = b;
    price = p;

}
void Laptop::setPrice(int p) {
  price =p;
}
void Laptop::setBrand(string b) {
    brand = b;
}
void Laptop::displayDetails() {
    cout << "My Laptop Brand is: " << brand << " and price is: " << price;
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
