#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    int n,num,largest=INT_MIN;
    cin >>n;
    int i=1;
    while(i <= n){
        
        cin >> num;
        if (num > largest){
            largest=num;
        }
        i+=1;
    } 
    cout << endl;
    cout << "Largest number : " << largest;

    return 0;
}