#include <iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    for (int i=n;i>0;i--){
        cout << i;
    }
    return 0;
}