#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "Before Swap" << a << b;
    a = a + b; 
    b = a - b;
    a = a - b;
    cout << "\n";
    cout << "After Swap " << "a: "<< a << " b "<< b;
    return 0;
}