#include <iostream>
using namespace std;

int main() {

    int n,i=1,o=1;
    cin >> n;

    while(i<=n){
        int t=1;
        while(t<=i){
            cout << o;
            o++;
            t++;
        }
        
        i++;
        cout << endl;
    }
    

    return 0;
}