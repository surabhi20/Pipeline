// Application.cpp : Defines the exported functions for the DLL.
//
#include <iostream>
#include "framework.h"
#include "Application.h"


CoolClass::CoolClass(void)
{
}

int CoolClass::Calc(int a, int b)
{
    if (a == b)
    {
        std::cout <<"If a equals b, return twice of a" << std::endl;
        return 2 * a;
    }
    else
    {
        std::cout <<"If a is not equal to b, return a+b" << std::endl;
        return a + b;
    }
    
}
