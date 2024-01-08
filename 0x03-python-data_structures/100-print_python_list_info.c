#include <stdlib.h>
#include <stdio.h>
#include <Python.h>
#include <object.h>  // Include the object.h header

/**
 * print_python_list_info - function that prints some basic
 * info about Python lists
 * @p: python list
 */
void print_python_list_info(PyObject *p)
{
    int elem;

    printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));
    printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);

    for (elem = 0; elem < Py_SIZE(p); elem++) {
        PyObject *item = PyList_GetItem(p, elem);

        if (item != NULL)
            printf("Element %d: %s\n", elem, Py_TYPE(item)->tp_name);
        else
            printf("Element %d: (error retrieving item)\n", elem);
    }
}
