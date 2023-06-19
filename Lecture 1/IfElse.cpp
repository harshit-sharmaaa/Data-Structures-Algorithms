#include <iostream>
using namespace std;

int main() {
    int a;
    cin >>a;

    if (a<=10){
        cout << "Hello";
    }
    else if(a>10 && a<=30){
        cout << "Hello world";
    }
    else{
        cout << "Welcome to coding blocks";
    }
    return 0;
}