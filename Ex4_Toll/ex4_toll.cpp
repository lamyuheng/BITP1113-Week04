// Name: Lam Yu Heng    Matric: B032610186

/*
Cal Poly Pseudocode:
READ balance, toll
IF balance >= toll THEN
	SET balance = balance - toll
	DISPLAY "Gate open"
	DISPLAY balance
ELSE
	DISPLAY "Insufficient funds. Please reload."
	DISPLAY toll-balance
ENDIF
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double balance, toll;

	cout << "Enter card balance (RM): ";
	cin >> balance;

	cout << "Enter toll amount (RM): ";
	cin >> toll;

	cout << fixed << setprecision(2);

	if (balance >= toll)
	{
		balance -= toll;
		cout << "Gate open" << endl;
		cout << "New balance: RM " << balance << endl;
	}
	else
	{
		cout << "Insufficient funds. Please reload." << endl;
		cout << "Shortfall: RM " << toll - balance << endl;
	}

	return 0;
}

/*
Result 1:
Enter card balance (RM): 10.00
Enter toll amount (RM): 5.30
Gate open
New balance: RM 4.70

Result 2:
Enter card balance (RM): 5.30
Enter toll amount (RM): 5.30
Gate open
New balance: RM 0.00

Result 3:
Enter card balance (RM): 5.29
Enter toll amount (RM): 5.30
Insufficient funds. Please reload.
Shortfall: RM 0.01

Result 4:
Enter card balance (RM): 0.00
Enter toll amount (RM): 2.10
Insufficient funds. Please reload.
Shortfall: RM 2.10
*/