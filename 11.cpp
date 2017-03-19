#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << left << setw(50) << right << setw(34) << "QUARTERLY PROFITS\n";
	cout << left << setw(40) << right << setw(20) << "January - March" << right << setw(8) << "$" << right << setw(12) << "13310.67" << endl;
	cout << left << setw(40) << right << setw(20) << "April - June" << right << setw(8) << "$" << right << setw(12) << "266325.72" << endl;
	
	return 0;
}