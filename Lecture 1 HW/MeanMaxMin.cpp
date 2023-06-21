#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of entries : " ;
    cin >> n;
    int i=1;
    int max=INT_MIN;
    int min=INT_MAX;
    int sum=0;

    while (i<=n){
        int num;
        cin >> num;
        sum+=num;
        if (num > max){
            max=num;
        }
        if (num < min){
            min=num;
        }
        i++;
    }
    cout << "Largest number : " << max <<endl;
    cout << "Lowest number : " << min <<endl;
    cout << "Mean : " << sum/n <<endl;
    return 0;
}