#include <iostream>
using namespace std;

int main(){
    int a[]={4,3,2,0,1};
    int n=sizeof(a)/sizeof(int);
    for (int j=1;j<n;j++){
        int handPicked=a[j];
        int i=j-1;
        while(i>=0 && handPicked<a[i]){
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=handPicked;
        
    }
    for(int i=0;i<n;++i){
        cout << a[i]<< " ";
    }


    return 0;
}