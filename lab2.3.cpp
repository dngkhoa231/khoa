// lab2.33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
    float a, b, c, denta;
    cout << "Nhap a, b, c vao phuong trinh bac 2 ax^2 +bx+ c=0\n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Phuong tring vo so nghiem";
            }
            else { cout << "Phuong trinh vo nghiem"; }
        }
        else { cout << "Phuong trinh co mot nghiem duy nhat"; }
    }
    else {
        denta = b * b - a * c;
        if (denta > 0) {
            cout << "Phuong trinh co hai nghiem";
        }
        else if (denta = 0) {
            cout << " Phuong trinh co mot nghiem";
        }
        else { cout << "Phuong trinh vo nghiem"; }
    }
    return 0;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
