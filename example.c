//
// Created by Administrator on 2019/2/26.
//
#include "example.h"

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}