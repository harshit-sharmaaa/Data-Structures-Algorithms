#include <iostream>
using namespace std;

int main() {
    int n,i,g;
    cout << "Enter rows : ";
    cin >> n;
    
    int digits = 1;
     
    for( i=1;i <= n;i++ ){
        if( i%2 == 0 ){
            digits=0;
        }
        else{
            digits=1;
        }
        
        for ( g=1;g<=i;g++ )
        {
            cout << digits << " ";
            digits=1-digits;
            
        }
        cout << endl;
        
    }
    return 0;
}