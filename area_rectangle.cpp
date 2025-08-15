#include <iostream>
using namespace std;
int main()
{
    float length, breadth, area;
    cout << "Enter the length of rectangle: ";
    cin >> length;
    cout << "Enter the breadth of rectangle: ";
    cin >> breadth;
    area = length * breadth ;
    cout << "Area of the rectangle is "<<area;
    return 0;
}