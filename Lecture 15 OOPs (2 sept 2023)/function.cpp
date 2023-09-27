#include <iostream>
#include <cstring>
using namespace std;

class Car
{
public:
    // Data-Members:name,price,model,seats
    char name[100];
    int price;
    int model;
    int seats;

    void print()
    {
        cout << "Name : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "Model : " << model << endl;
        cout << "Seats : " << seats << endl
             << endl;
    }

    // We have 4 default functions in a class
    // 1.Constructor:ek object ko create krne ke liye iski need pdti hai
    // 2.Copy Constructor
    // 3.Copy Assignment Constructor
    // 4.Deconstructor

    // CONSTRUCTOR ----> Ek function he hai,jisse object ceate ho pata hai
    // 1. Default Contructor
    Car()
    {
        cout << "Inside a constructor" << endl;
    }

    // 2. Parameterized Constructor
    Car(char *n, int p, int m, int s)
    {
        strcpy(name, n);
        price = p;
        model = m;
        seats = s;
    }
};
////////////////////////BLUEPRINT///////////////////////////

int main()
{
    Car A; // We will call default constructor
    strcpy(A.name, "BMW");
    A.price = 100;
    A.model = 2020;
    A.seats = 4;

    Car B; // We will call default constructor
    strcpy(B.name, "Audi");
    B.price = 150;
    B.model = 2021;
    B.seats = 2;

    A.print();
    B.print();

    // Car C("Maruti", 200, 2019, 4);  it will give warning
    // C.print();

    // to remove warning
    char x[] = "Maruti";
    Car D(x, 200, 2019, 4);
    D.print();

    return 0;
}