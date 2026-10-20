// Name: Lam Yu Heng    Matric: B032610186

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int daysLate;
	double fine = 0.0; // Bug Fix 1: Initialize fine

    cout << "Days late: ";
    cin >> daysLate;

    if (daysLate > 0)  // Bug Fix 2: Remove the extra semicolon
    {
        fine = daysLate * 0.50; // Bug Fix 3: Use braces to control the fine calculation
    }

	if (daysLate == 0) // Bug Fix 4: Use == for comparison instead of =
    {
        cout << "Returned on time. No fine." << endl;
    }

	if (daysLate >= 14) // Bug Fix 5: Use >= to include 14 days
    {
        cout << "Membership suspended." << endl;
        cout << "Contact the library counter." << endl;
    }

	cout << fixed << setprecision(2); // Bug Fix 6: Set precision for fine output
    cout << "Fine: RM" << fine << endl;

    return 0;
}

/*
Result 1:
Days late: 0
Returned on time. No fine.
Fine: RM0.00

Result 2:
Days late: 1
Fine: RM0.50

Result 3:
Days late: 13
Fine: RM6.50

Result 4:
Days late: 14
Membership suspended.
Contact the library counter.
Fine: RM7.00

Result 5:
Days late: 15
Membership suspended.
Contact the library counter.
Fine: RM7.50
*/