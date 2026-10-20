// Name: Lam Yu Heng     Matric: B032610186

/*
Cal Poly Pseudocode:
READ weight
SET fee = 8.00
IF weight > 2.0 THEN
	SET fee =  fee + 5.00
	Display "Heavy parcel: RM5.00 surcharge added"
ENDIF
Display fee
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double weight, fee = 8.00;

	cout << "Enter the weight of the parcel (in kg): ";
	cin >> weight;

	if (weight > 2.0)
	{
		fee += 5.00;
		cout << "Heavy parcel: RM5.00 surcharge added" << endl;
	}

	cout << fixed << setprecision(2);
	cout << "Total fee: RM" << fee << endl;

	return 0;
}

/*
Result 1:
Enter the weight of the parcel (in kg): 1.5
Total fee: RM8.00

Result 2:
Enter the weight of the parcel (in kg): 2.0
Total fee: RM8.00

Result 3:
Enter the weight of the parcel (in kg): 2.1
Heavy parcel: RM5.00 surcharge added
Total fee: RM13.00

Result 4:
Enter the weight of the parcel (in kg): 7.25
Heavy parcel: RM5.00 surcharge added
Total fee: RM13.00
*/
