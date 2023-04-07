# Using RandomIntGen.cpp
In your terminal:
```shell
g++ RandomIntGen.cpp
./a.out
```
- Input the number of random ints you want created (10000 to 50000 is good)
- A text file containing the random unsorted ints will be generated in the same directory
- Move this text file to be in the same directory as the sorting algorithm being tested or vice-versa.

# Using gprof for C++ programs
For this example I will use the MergeSort.cpp program. You must compile the program and run it for the gmon.out file to generate. In your terminal:
```shell
g++ -pg MergeSort.cpp
./a.out
gprof ./a.out
```
The profile will be displayed in the terminal when complete.

# Using cProfile for Python programs
For this example I will use the MergeSort.py program. In your terminal:
```shell
python -m cProfile MergeSort.py
```
The profile will be displayed in the terminal when complete.