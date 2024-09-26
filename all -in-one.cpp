#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 20;
    if (x > 5) {
        if (y > 15) {
            cout << "x is greater than 5 and y is greater than 15";
        } else {
            cout << "x is greater than 5 but y is not greater than 15";
        }
    } else {
        cout << "x is not greater than 5";
    }
}