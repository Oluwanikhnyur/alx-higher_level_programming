#!/usr/bin/python3


def magic_calculation_102(a, b):
    """Match bytecode provided by Holberton School."""
    from magic_calculation_102 import add, sub

    if a < b:
        c = add(a, b)
        for i in range(4, 7):
            c = add(c, i)
        return c

    else:
        return (sub(a, b))
