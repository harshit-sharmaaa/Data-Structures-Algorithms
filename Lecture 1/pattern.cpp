#include <iostream>
using namespace std;

//Pattern-1
// 1
// 23
// 456
// 78910
// 1112131415

int main() {

    int n;
    cout << "Enter rows : " << endl;
    cin >> n ;
    int row=1;
    int t=1;
    while (row <= n){
        int start=1;
        while (start <= row){
            cout << t ;
            start++;
            t++;
        }

        row++;
        cout << endl;
    }
    
    

    return 0;
}
