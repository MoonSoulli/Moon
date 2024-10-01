#include<iostream>

using namespace std;
int x = 16;
int y = 26; 

void exchange(int a, int &b, int c, int &d);
int main() {
    int x, y, z, w;
    x = 5;
    y = 9;
    z = 7;
    w = 15;

    exchange(x, y, z, w);
    cout << "\n x is " << x;
    cout << "\n y is " << y;
    cout << "\n z is " << z;
    cout << "\n w is " << w;
    return 0;
}

void exchange(int a, int &b, int c, int &d){
    int temp = b;
    b = a + x;
    a = temp - y;
    temp = c;
    c = d;
    for (int i = 0; i < 3; i++){
        int a = 10;
        d = temp + a + i;
    }
    d = d - a;    
}