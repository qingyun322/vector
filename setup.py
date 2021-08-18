import os, sys
from distutils.core import setup, Extension
from distutils import sysconfig

cpp_args = ['-std=c++11']

ext_modules = [
    Extension(
    'wrap',
        ['simpleVecOp.cpp', 'wrap.cpp'],
        include_dirs=['pybind11/include', './eigen-3.3.9'],
    language='c++',
    extra_compile_args = cpp_args,
    ),
]

setup(
    name='wrap',
    version='0.0.1',
    author='Qingyun Wang',
    author_email='qingyun322@gmail.com',
    description='Simple vector operations',
    ext_modules=ext_modules,
)
