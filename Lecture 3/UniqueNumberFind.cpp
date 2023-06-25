#include <iostream>
using namespace std;

int main() {

    int n,no,ans=0;
    cout << "Enter : ";
    cin >>n;
    int i=1;
    while (i<=n){
        cout << "Enter number : ";
        cin >> no;
        ans=ans ^ no;
        i++;
    }

    cout <<"Unique Number ---->"<< ans <<endl;

    return 0;
}