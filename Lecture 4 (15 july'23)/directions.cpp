#include <iostream>
using namespace std;

int main() {

    char ch;
    ch=cin.get();
    int x=0, y=0;
    while (ch!='\n'){
        if (ch=='E'){
            x++;
        }
        else if (ch=='W'){
            x--;
        }
        else if (ch=='N'){
            y++;
        }
        else {
            y--;
        }
        
        ch=cin.get();
    }

    if (x>=0 && y>=0){
        for(int i=0;i<x;i++){
            cout << 'E';
        }
        for(int i=0;i<y;i++){
            cout << 'N';
        }
    }
    else if (x<=0 && y>=0){
        x*=-1;
        for(int i=0;i<y;i++){
            cout << 'N';
        }
        for(int i=0;i<x;i++){
            cout << 'W';
        }
    }
    else if (x<=0 && y<=0){
        x*=-1;
        y*=-1;
        for(int i=0;i<y;i++){
            cout << 'S';
        }
        for(int i=0;i<x;i++){
            cout << 'W';
        }
    }
    else {
        y*=-1;
        for(int i=0;i<x;i++){
            cout << 'E';
        }
        for(int i=0;i<y;i++){
            cout << 'S';
        }
    }
    return 0;
}