#include <iostream>
using namespace std;

//Passes by reference. The address of the x variable is the parameter, not the whole object (value in this case)
void MyFunction(int &x) 
{
    x = 100;
}

//Passes by Pointers
void Swap(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}

int main()
{
    int x = 10;
    cout << "The value of x is = " << x << endl;

    MyFunction(x);
    cout << "The new value of x is = " << x << endl << endl;

    int a = 45, b = 35;
    cout << "Before Passing to the function" << endl;
    cout << "Var A = " << a << ", Var B = " << b << endl;

    Swap(&a, &b);
    cout << "After Passing to the function" << endl;
    cout << "Var A = " << a << ", Var B = " << b << endl;
} 