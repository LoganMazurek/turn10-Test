#pragma once

#include "Input.h"

//Set all char to null
InputHandler::InputHandler()
{
	myCalc = new Calculator();
	int i;
	for (i = 0; i < NUM_VALUES; i++)
	{
		values[i] = 0;
	}
	for (i = 0; i < MAX_USERNAME_SIZE; i++)
	{
		username[i] = '\0';
	}
	for (i = 0; i < MAX_OPERATOR_SIZE; i++)
	{
		operatorName[i] = '\0';
	}
}

//THIS FUNCTION ASSUMES THAT CORRECT INPUT IS GIVEN WITH THE SPECIFIED FORMAT
void InputHandler::TakeInput()
{
	std::cout << "Enter a command using this format: [Username] [OPERATION] [Value1] [Value2];\n";
	std::cin >> username;
	if (strcmp(username, "EXIT") == 0) //EXIT CONDITION
	{
		exit(0);
	}
	std::cin >>operatorName;
	for (int i = 0; i < NUM_VALUES; i++)
	{
		std::cin >> values[i];
	}
}


char InputHandler::ConvertOperation(char* op)
{
	if (strcmp(op, "SUM") == 0)
	{
		return '+';
	}
	else if (strcmp(op, "SUBTRACT") == 0)
	{
		return '-';
	}
	else if (strcmp(op, "MULTIPLY") == 0)
	{
		return '*';
	}
	else if (strcmp(op, "DIVIDE") == 0)
	{
		return '/';
	}
	//TODO: ADD MORE KEYS FOR MORE OPERATIONS HERE
}

void InputHandler::PrintResult()
{
	char opSymbol = ConvertOperation(operatorName);
	std::cout << username << '-' << operatorName << '-' << values[0] << opSymbol << values[1] << '=' << myCalc->Calculate(values[0], values[1], opSymbol) << '\n';
	std::cin.clear();
	std::cin.sync();
}
