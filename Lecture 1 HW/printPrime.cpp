//this program will print prime from 2 to n

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number";
    cin >> n;
    int i=2;
    while (i<=n){
        int t=2;
        int prime=1;
        while (t<i){
            if (i%t==0){
                prime=0;
                break;               
            }            
            t++;
        }
        if (prime){
            cout << i;
        }        
        i++;
        cout << " ";
    }
    return 0;
}
