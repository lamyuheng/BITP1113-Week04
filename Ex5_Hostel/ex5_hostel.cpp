// Name: Lam Yu Heng    Matric: B032610186

/*
BEGIN
	READ hour (0-23)
	IF hour >= 23 OR < 6 THEN
		Display "Late entry: sign the log book"
		Display "Show your matric card"
	ELSE
		Display "Welcome back"
	Display "Good night"
END
*/

#include <iostream>
using namespace std;

int main()
{
	int hour;

	cout << "Enter hour (0-23): ";
	cin >> hour;

	if (hour >= 23 || hour < 6)
	{
		cout << "Late entry: sign the log book" << endl;
		cout << "Show your matric card" << endl;
	}
	else
	{
		cout << "Welcome back" << endl;
	}

	cout << "Good night" << endl;

	return 0;
}

/*
Result 1:
Enter hour (0-23): 22
Welcome back
Good night

Result 2:
Enter hour (0-23): 23
Late entry: sign the log book
Show your matric card
Good night

Result 3:
Enter hour (0-23): 0
Late entry: sign the log book
Show your matric card
Good night

Result 4:
Enter hour (0-23): 5
Late entry: sign the log book
Show your matric card
Good night

Result 5:
Enter hour (0-23): 6
Welcome back
Good night
*/
