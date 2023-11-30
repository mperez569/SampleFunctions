#include <iostream>
using namespace std;

//Passes by reference. The address of the x variable is the parameter, not the whole object (value in this case)
void MyFunction(int &x) 
{
    x = 100;
}

void ReferenceSwap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

//Passes by Pointers
void PointerSwap(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}

int main()
{
    cout << "=====Pass by Reference=====" << endl;
    int z = 10;
    cout << "The value of x is = " << z << endl;
    MyFunction(z);
    cout << "The new value of x is = " << z << endl << endl;

    int x = 45, y = 35;
    cout << "Before passing by reference" << endl;
    cout << "Var X = " << x << ", Var Y = " << y << endl;
    ReferenceSwap(x, y);
    cout << "After passing by reference" << endl;
    cout << "Var X = " << x << ", Var Y = " << y << endl << endl;

    //-------------------------------------------
    cout << "=====Pass by Pointer=====" << endl;
    int a = 45, b = 35;
    cout << "Before Passing to the function" << endl;
    cout << "Var A = " << a << ", Var B = " << b << endl;

    PointerSwap(&a, &b);
    cout << "After Passing to the function" << endl;
    cout << "Var A = " << a << ", Var B = " << b << endl;
} 