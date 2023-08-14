#include <iostream>
using namespace std;
#include <climits>

int main()
{
    int a[]={-1,-2,-3,-4,-5};
    int n=5;
    int lar=INT_MIN;
    for(int i=0;i<n;i++){
        if (a[i]>lar){
            lar=a[i];
        }
    }
    cout << "Largest:" << lar;
    return 0;
}