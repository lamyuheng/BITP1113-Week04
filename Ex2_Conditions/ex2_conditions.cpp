//Name: Lam Yu Heng     Matric: B032610186

/*
Prediction:
1
1
0
1
1
*/

#include <iostream>
using namespace std;

int main()
{
    int battery = 15, charging = 0;

    cout << (battery < 20) << endl;
    cout << (battery < 20 && !charging) << endl;
    cout << (battery == 100 || charging) << endl;
    cout << (battery >= 0 && battery <= 100) << endl;
    cout << (0 <= battery <= 100) << endl;

    return 0;
}

/*
Real Output:
1
1
0
1
1
*/