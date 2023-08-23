#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "\n\n Welcome to the demo for arrays and strings!\n\n";

    int myNumber[12];

    myNumber[0] = 11;
    myNumber[1] = 2;
    myNumber[2] = 333;
    myNumber[11] = 11111111;


    for (int i = 0; i < 12; i++) {
    cout << "\n\n" << i << " " << myNumber[i];
    }



    return 0;
}



