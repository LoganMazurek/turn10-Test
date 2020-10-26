#pragma once

class Calculator
{
	public:

		//FUNCTION:
		//Parameters: (a, b, oper)(first number in calculation, second number in calculation, operator)
		//RETURN: returns result of (a operator b)
		inline double Calculate(double a, double b, char oper)
		{
			switch (oper)
			{
			case '+':
				return a + b;
			case '-':
				return a - b;
			case '*':
				return a * b;
			case '/':
				return a / b;
			//TODO: Add more operators here. Create a char 'key' for complex operators if necessary (Example - exponent would be ^)
			default:
				return 0;
			}
		}
};