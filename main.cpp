#include <iostream>

using namespace std;

int main()
{
   int numberGrid[3][2] = {
                            {1,2},
                            {3,4},
                            {5,6}
                         };

    for(int i = 0; i < 3; i++)
        {
        for(int j = 0; j < 2; j++)
        {
                cout << numberGrid[i][j];
        }
        cout << endl << endl;
        }









        //3D Array
    int population [2][3][3]= {
                        {{1,2,3}, {4,5,6}},
                        {{7,8,9}, {10,11,12}}
                        };

    cout << population[1][3][0];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {

            for(int k = 0; k < 3; k++)
                {
                  cout << "\n" << i << " " << j << " " << k;
                }

        }

    }

 cout << endl << endl << endl;
    return 0;
    }
