#include<iostream>

#define PY_SSIZE_T_CLEAN

//#include<python.h>
#include<I/Library/Frameworks/Python.framework/Versions/3.8/include/python3.8 -I/Library/Frameworks/Python.framework/Versions/3.8/include/python3.8>
//#include<embedding-python/embedding-python.py>


int main(int argc, char const *argv[]){
    wchar_t *program = Py_DecodeLocale(argv[0], NULL)
    if(program == NULL){
        fprintf(stderr, "Error");
        exit(1);
    }

    Py_SetProgramName(program);

    Py_Initialize();

    return 0;
}
