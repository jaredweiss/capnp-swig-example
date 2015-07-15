#!/usr/bin/env python
from distutils.core import setup
from Cython.Build import cythonize

setup(
    name="{'imports': [], 'filename': 'cpp_to_py'}",
    ext_modules=cythonize('cpp_to_py.pyx', language="c++")
)