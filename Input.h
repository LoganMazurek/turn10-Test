#pragma once

//INCLUDES
#include <string>
#include <iostream>
#include <cstdlib>

#include "defines.h"
#include "Calculator.h"



class InputHandler
{
public:

	//Change this as needed when the input changes, or make it a struct if it gets more complex
	char username[MAX_USERNAME_SIZE];
	char operatorName[MAX_OPERATOR_SIZE];
	double values[NUM_VALUES];
	//
	Calculator* myCalc;
	
	InputHandler();
	void TakeInput(); //FUTURE: Can be overriden in a child class
	//TODO: Add more methods here for processing different kinds of input
	char ConvertOperation(char* op); //FUTURE: Can be overriden in a child class
	void PrintResult(); //FUTURE: Can be overriden in a child class
};