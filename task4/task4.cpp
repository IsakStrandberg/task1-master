// task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap_sort(int** a, int** b, int** c, bool sort)//aaaaaaaaaaaaaaaaaaaaaa
{
    if (sort == true) {//very long probably unessecary if statement lists 
        if (a < b && a < c) {//to check wich of the 3 numbers are higher or lower
            cout << *a << ", ";//than eachoter, very bad if i have more than 3 numbers
            if (b < c) {
                cout << *b << ", ";
                cout << *c << "\n";
            }
            else if (c < b) {
                cout << *c << ", ";
                cout << *b << "\n";
            }
            return;
        }

        else if (b < a && b < c) {
            *a = *b;
            cout << a << ", ";
            if (a < c) {
                *c = *a;

                cout << b << ", ";
                cout << c << "\n";
            }
            else if (c < a) {
                cout << c << ", ";
                cout << a << "\n";
            }
            return;
        }

        else if (c < a && c < b) {
            cout << c << ", ";
            if (a < b) {
                cout << a << ", ";
                cout << b << "\n";
            }
            else if (b < a) {
                cout << b << ", ";
                cout << a << "\n";
            }
            return;
        }
    }

    if (sort == false) {
        if (a > b && a > c) {
            cout << a << ", ";
            if (b > c) {
                cout << b << ", ";
                cout << c << "\n";
            }
            else if (c > b) {
                cout << c << ", ";
                cout << b << "\n";
            }
        }

        else if (b > a && b > c) {
            cout << b << ", ";
            if (a > c) {
                cout << a << ", ";
                cout << c << "\n";
            }
            else if (c > a) {
                cout << c << ", ";
                cout << a << "\n";
            }
        }

        else if (c > a && c > b) {
            cout << c << ", ";
            if (a > b) {
                cout << a << ", ";
                cout << b << "\n";
            }
            else if (b > a) {
                cout << b << ", ";
                cout << a << "\n";
            }
        }
    }
}

int main()
{
    int a = 7, b = 6, c = 1;
    int* p1 = &a, * p2 = &b, * p3 = &c;
    swap_sort(&p1, &p2, &p3, true);//didnt know if i had to rename it but i did
    cout << *p1 << " " << *p2 << " " << *p3;    // Points "1 6 7"

    system("pause");
    return 0;
}