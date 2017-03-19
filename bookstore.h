#if !defined BOOKSTORE_H
#define BOOKSTORE_H
#include <string>
#include "function.cpp"

void getProfit(double profit_array[]);
void getQuarterly(double profit_array[]);
double getTotal(double profit_array[]);
double getMax(double profit_array[], string month[], string& max_name);
double getMin(double profit_array[], string month[], string& min_name);

#endif
