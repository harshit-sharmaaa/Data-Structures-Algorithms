// Pattern 2
//      1
//     232
//    34543
//   4567654
//  567898765   

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number : ";
    int n;
    cin >> n;
    int row=1;
    while (row<=n){
        int space=1;
        int S=n-row;
        while (space <=S){
            cout << " ";
            space++;
        }
        int t=row;
        int y=1;
        while (y<=row){
            cout << t;
            t++;
            y++;
        }
        int u=2*row-2;
        int o=1;
        while (o<=row-1){
            cout << u;
            u--;
            o++;
        }
        row++;
        cout << endl;
    }

    return 0;
}