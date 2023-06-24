#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an Alphabet : ";
    cin >> ch;
    int asciiCode= ch;
    if (asciiCode >=65 && asciiCode <=90){
        cout << "UpperCase";
    }

    else if (asciiCode >=97 && asciiCode <=122){
        cout << "LowerCase";
    }
    else{
        cout << "not an alphabet";
    }

    return 0;
}