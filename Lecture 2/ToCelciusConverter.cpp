#include <iostream>
using namespace std;

int main() {
    int initial, final, step;
    cout << "initial : ";
    cin >> initial ;
    cout << "final : ";
    cin >> final ;
    cout << "step : ";
    cin >> step ;
    
    float cel;

    while(initial<=final){
        cel=(5/9.0)*(initial-32);
        cout << initial << " " << cel << endl;
        initial+=step;
    }
    return 0;
}