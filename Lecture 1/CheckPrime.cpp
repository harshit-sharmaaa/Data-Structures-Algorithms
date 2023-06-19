#include <iostream>
using namespace std;

int main() {

    int n,i=2;
    cin >> n;
    while (i<n){
        if (n%i==0){
            cout << "not prime" << endl;
            return 0;
        }
        i+=1;
    }
    cout << "prime";

    return 0;
}