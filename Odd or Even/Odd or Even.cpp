#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;  //This creates a variable to hold a number
    cout << "Enter an interger: ";
    cin >> num;  

    if (num % 2 == 0) { // Used to find if number is even
        cout << num << " is an even number" << endl;
    }
    else {  // Used if number is odd
        cout << num << " is an odd number" << endl;
    }
}


