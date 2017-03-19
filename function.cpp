#include <iostream>
#include <iomanip>
#include <string>
#include "bookstore.h"

using namespace std;

void getProfit(double profit_array[])
{
	for(int i = 0; i < 12; i++)
	{
		cout << "Enter the profit for month" << i + 1 << ": $\n";
		cin >> profit_array[i];
		while(profit_array[i] < 0)
		{
			cout << "I'm sorry, you must enter a profit greater than zero.\n";
			cin >> profit_array[i];
		}
	}
}

void getQuarterly(double profit_array[], double quarter_array[])
{	
	quarter_array[0] = profit_array[0] + profit_array[1] + profit_array[2];
	quarter_array[1] = profit_array[3] + profit_array[4] + profit_array[5];
	quarter_array[2] = profit_array[6] + profit_array[7] + profit_array[8];
	quarter_array[3] = profit_array[9] + profit_array[10] + profit_array[11];
		
	
	cout << "---------------------------------------------------------------------------------\n\n";
	cout << left << setw(50) << right << setw(34) << "QUARTERLY PROFITS\n";
	cout << left << setw(40) << right << setw(20) << "January - March" << right << setw(8) << "$" << right << setw(12) << setprecision(2) << fixed << showpoint << quarter_array[0] << endl;
	cout << left << setw(40) << right << setw(20) << "April - June" << right << setw(8) << "$" << right << setw(12) << setprecision(2) << fixed << showpoint << quarter_array[1] << endl;
	cout << left << setw(40) << right << setw(20) << "July - September" << right << setw(8) << "$" << right << setw(12) << setprecision(2) << fixed << showpoint << quarter_array[2] << endl;
	cout << left << setw(40) << right << setw(20) << "October - December" << right << setw(8) << "$" << right << setw(12) << setprecision(2) << fixed << showpoint << quarter_array[3] << endl;
	
	cout << "---------------------------------------------------------------------------------\n";
	cout << "---------------------------------------------------------------------------------\n";
}

double getTotal(double profit_array[])
{
	double total = 0;
	
	for(int i = 0; i < 12; i++)
		total += profit_array[i];
	
	return total;
}

double getMax(double profit_array[], string month[], string& max_name)
{
	double max = profit_array[0];
	
	for(int i = 0; i < 12; i++)
	{
		if(profit_array[i] > max)
		{
			max = profit_array[i];
			max_name = month[i];
		}
	}
	
	return max;
}

double getMin(double profit_array[], string month[], string& min_name)
{
	double min = profit_array[0];
	
	for(int i = 0; i < 12; i++)
	{
		if(profit_array[i] < min)
		{
			min = profit_array[i];
			min_name = month[i];
		}
	}
	
	return min;
}