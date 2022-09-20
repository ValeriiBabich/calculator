#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Min (double a, double b)
{
	return a - b;
}

int Calculator::Del (double a, double b)
{
	return a / b;
}
