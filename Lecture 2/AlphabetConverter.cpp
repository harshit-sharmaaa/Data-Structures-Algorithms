#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an Alphabet : ";
    cin >> ch;
    int asciiCode= ch;
    int changed;
    char converted;
    
    if (asciiCode >=65 && asciiCode <=90){
        changed=asciiCode+32;
        converted=changed;
        cout << converted;       
    }

    else if (asciiCode >=97 && asciiCode <=122){
        changed=asciiCode-32;
        converted=changed;
        cout << converted;
    }
    else{
        cout << "not an alphabet";
    }

    return 0;
}