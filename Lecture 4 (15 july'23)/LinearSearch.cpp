#include <iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    int n=5;
    int i;
    int key=4;
    for(i=0;i<n;i++){
        if (a[i]==key){
            cout << "Found" << i;
            break;
        }
    }
    if (i==n){
        cout << "Not Found" ;
    }
    return 0;
}