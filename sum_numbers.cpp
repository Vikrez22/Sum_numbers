#include <iostream>
using namespace std;

int main()
{
    double total = 0, inputNumber;
    
    cout << "Enter five numbers to calculate their sum:" << endl;

    for (int i = 1; i <= 5; ++i) {
        cout << "Enter number " << i << ": ";
        cin >> inputNumber;
        total += inputNumber;
    }

    cout << "The total sum of the five numbers is: " << total << endl;

    return 0;
}
