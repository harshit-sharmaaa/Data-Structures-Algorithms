#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    float ans=1;
    float inc=1;
    int current_precision=1;
    while (current_precision <=4){
        while (ans*ans<=n){
            ans+=inc;
        }
        ans=ans-inc;
        inc=inc/10;
        current_precision++;
    }
    cout << ans;
    return 0;
}