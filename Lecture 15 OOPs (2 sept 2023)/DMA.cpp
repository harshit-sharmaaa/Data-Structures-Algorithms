#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
    int price;

public:
    // Data-Members:name,price,model,seats
    char *name;
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
        name = NULL;
    }

    Car(char *n, int p, int m, int s)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        price = p;
        model = m;
        seats = s;
    }

    Car(Car &X)
    {
        name = new char[strlen(X.name) + 1];
        strcpy(name, X.name);
        price = X.price;
        model = X.model;
        seats = X.seats;
    }

    void operator=(Car &X)
    {
        if (name != NULL)
        {
            delete[] name;
        }
        name = new char[strlen(X.name) + 1];
        strcpy(name, X.name);
        price = X.price;
        model = X.model;
        seats = X.seats;
    }
    // GETTER AND SETTER

    void setPrice(int p)
    {
        price = p;
    }
    int getPrice()
    {
        return price;
    }
    void setName(char *n)
    {
        if (name != NULL)
        {
            delete[] name;
        }
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }
};
////////////////////////BLUEPRINT///////////////////////////

int main()
{
    Car A; // We will call default constructor
    A.setName("BMW");
    A.setPrice(100);
    A.model = 2020;
    A.seats = 4;

    Car B; // We will call default constructor
    B.setName("Audi");
    B.setPrice(200);
    B.model = 2021;
    B.seats = 2;

    char x[] = "Maruti";
    Car C(x, 200, 2019, 4);

    A.print();
    B.print();
    // C.print();
    // D.print();

    return 0;
}