//
// Created by Administrator on 2019/2/26.
//

#include <stdio.h>
#include <Python.h>

int main (int argc, char *argv[])
{
    Py_Initialize();
    PyRun_SimpleString("print 'hello world'");
    Py_Finalize();
    return 0;
}