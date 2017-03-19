#include <iostream>
#include <iomanip>
#include <string>
#include "bookstore.h"
#include "function.cpp"

using namespace std;

int main()
{
	string month[12] = {"January", "Feburary", "March",
						"April", "May", "June", 
						"July", "August", "September", 
						"October", "November", "December"};
	double profit_array[12];
	double quarter_array[4];
	double total = 0;
	double average = 0;
	double max, min;
	string max_month, min_month;
	char userChoice;
	
	cout << "Welcome to Flourish and Blotts Bookstore!\n";
	
	while(userChoice == 'Y' || userChoice == 'y')
	{
		getProfit(profit_array);
		total = getTotal(profit_array);
		average = total / 12;
		max = getMax(profit_array, month, max_month);
		min = getMin(profit_array, month, min_month);
	
		cout << "-------------------------------------------------------------\n";
		cout << "-------------------------------------------------------------\n";
		cout << left << setw(40) << right << setw(20) << "TOTAL PROFITS FOR YEAR:" << right << setw(8) << "$" << right << setw(12) << setprecision(2) << fixed << showpoint << total << endl;
		cout << left << setw(40) << right << setw(20) << "YEARLY AVERAGE PROFIT:" << right << setw(8) << "$" << right << setw(12) << setprecision(2) << fixed << showpoint << average << endl;
		cout << left << setw(40) << right << setw(20) << "MONTH WITH LARGEST PROFIT:" << right << setw(12) << max << "totaling $" << setprecision(2) << fixed << showpoint << max_month << endl;
		cout << left << setw(40) << right << setw(20) << "MONTH WITH SMALLEST PROFIT:" << right << setw(12) << min << "totaling $" << setprecision(2) << fixed << showpoint << min_month << endl;
	
		getQuarterly(profit_array, quarter_array);
		
		cout << "Would you like to run the program again? (Y/N)\n";
		cin >> userChoice;
	}
	
	return 0;
}