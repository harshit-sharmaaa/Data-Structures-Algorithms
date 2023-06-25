#include <iostream>
using namespace std;

int main() {

    int ld, num;
    int ans = 0;
    cout << "Enter a number : ";
    cin >> num;
    while ( num > 0 ){
        ld = num % 10;
        num/=10;
        ans = ans*10 + ld;
    }

    cout << "Reversed : " <<ans;

    return 0;
}