// Turn10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//INCLUDES
#include "Input.h"


int main()
{
    InputHandler myHandler;
    while (1)
    {
        myHandler.TakeInput();
        myHandler.ConvertOperation(myHandler.operatorName);
        myHandler.PrintResult();
    }
    return 0;
}