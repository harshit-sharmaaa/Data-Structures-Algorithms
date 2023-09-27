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
};
////////////////////////BLUEPRINT///////////////////////////

int main()
{
    Car C;
    strcpy(C.name, "BMW");
    // C.name[0]='B';
    // C.name[1]='M';
    // C.name[2]='W';
    // C.name[3]='\0';
    C.price = 100;
    C.model = 2020;
    C.seats = 4;

    cout << "Name : " << C.name << endl;
    cout << "Price : " << C.price << endl;
    cout << "Model : " << C.model << endl;
    cout << "Seats : " << C.seats << endl;

    return 0;
}