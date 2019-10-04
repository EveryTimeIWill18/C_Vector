"""
load_c_vector.py
~~~~~~~~~~~~~~~~
Demo of using ctypes to read in C structures.
"""
import os
import struct
import ctypes
import numpy as np



# Load the shared library into c types.
# NOTE: assumes that your shared library is in the same directory as your python script
#libc = ctypes.CDLL("./c_vector.so")
proj_path = os.path.abspath(os.path.dirname(__file__))
c_lib = ctypes.cdll.LoadLibrary(os.path.join(proj_path, "./c_vector.so"))

class C_Vector(ctypes.Structure):
    """Declares the c_vector struct in Python."""
    _fields_ = [
        ("size", ctypes.c_int),
        ("position", ctypes.c_int),
        ("data_array", ctypes.POINTER(ctypes.c_double))
    ]

# C methods to create the C vector
initialize_data = c_lib.init_data
insert_data = c_lib.insert
get_vec_size = c_lib.get_size

c_vec = C_Vector()
c_vec=initialize_data(c_vec, ctypes.c_int(10))
print(c_vec)
#size = get_vec_size(c_vec)
