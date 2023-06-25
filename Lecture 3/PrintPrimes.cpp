#include <iostream>
using namespace std;

int main() {

    int i,no,n;
    bool prime;
    cout << "enter : ";
    cin >> n;

    for (i = 2; i <= n; i++)
    {
        prime=true;
        for ( no = 2; no < i; no++)
        {
            if (i%no==0){
                prime=false;
            }
        }
        if (prime){
            cout << i <<" ";
        }       
    }   
    return 0;
}