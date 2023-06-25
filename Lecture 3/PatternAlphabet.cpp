#include <iostream>
using namespace std;

int main() {

    int row;
    cout << "Enter Rows : ";
    cin >> row;
    int i=1;
    
   
    while(i<=row){
        int u=1;
        char y='A';
        while (u<=row-i+1){
            cout << y;
            y++;
            u++;
        }
        u--;
        y--;
        while (u>0){
            cout << y;
            y--;
            u--;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}