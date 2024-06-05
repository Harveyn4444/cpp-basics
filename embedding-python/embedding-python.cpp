// #include <iostream>

// #define PY_SSIZE_T_CLEAN

// #include </Library/Frameworks/Python.framework/Versions/3.8/include/python3.8/Python.h>

//#include </usr/local/opt/python@3.8>
//#include<-I/Library/Frameworks/Python.framework/Versions/3.8/include/python3.8/Python/Python.h>
//#include<embedding-python/embedding-python.py>


// int main(int argc, char const *argv[]){
//     wchar_t *program = Py_DecodeLocale(argv[0], NULL)
//     if (program == NULL){
//         fprintf(stderr, "Error");
//         exit(1);
//     }

//     Py_SetProgramName(program);

//     Py_Initialize();

//     if (Py_FinalizeEx() < 0){
//         exit(120)
//     }

//     PyMem_RawFree(program);

//     return 0;
// }
#include "initconfig.h"

#include </Library/Frameworks/Python.framework/Versions/3.8/include/python3.8/Python.h>
#include <iostream>

int main(int argc, char *argv[]) {
    // Initialize the Python Interpreter
    Py_Initialize();

    // Execute a simple Python script
    PyRun_SimpleString("print('Hello from Python!')");

    // Finalize the Python Interpreter
    Py_Finalize();

    return 0;
}

