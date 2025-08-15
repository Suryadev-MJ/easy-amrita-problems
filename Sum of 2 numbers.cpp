#include <iostream>
using namespace std;
int main()
{
    int num1 , num2, sum;
    cout << "Enter the first number . ";        // Asking the first number from user //
    cin >> num1;        // Input of the first number //            
    cout << "Enter the second number . ";       // Asking the second number from user // 
    cin >> num2;        // Input of the second number //
    sum = num1 + num2;        // Taking the sum of num1 and num2  //
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum ;      // Printing the sum of num1 and num2 //
    
    return 0;
}