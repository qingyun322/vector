# vector
simple vector operations in C++ and wrap in. python using pybind11

<!-- ABOUT THE PROJECT -->
## About The Project
This project implements a simple weighted sum of three vectors in c++ and wrap in python using pybind11

### How to use
1. Clone the repo
   ```sh
   git clone https://github.com/qingyun322/vector
   ```
2. Create the conda enviroment
   ```sh
   conda env create -f environment.yml
   ```
3. Activate the conda enviroment
   ```sh
   conda activate vector
   ```
4. build the c++ module
   ```sh
   python setup.py build_ext -i
   ```
5. Verify the correctness of our implementation
   ```sh
   python test.py
   ```
