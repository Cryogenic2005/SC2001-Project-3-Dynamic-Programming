# SC2001 Project 2

This is the repository for the third project of NTU's SC2001 ALGORITHM DESIGN AND ANALYSIS.

Team Members:
- Le Nguyen Bao Huy
- Loke Yongen, Gabriel
- Madhumita Thiruppathi
- Manikandan Yuvana

## About the program

This program implements a solution to the Knapsack problem using dynamic programming techniques.

## Compilation

To compile the project, change the working directory to this project's root. 

Run the following command on the command line:

Windows:

```
    g++ -g -std=c++17 main.cpp src\*.cpp -I include -o bin\Knapsack.exe
```

Linux:

```
    g++ -g -std=c++17 main.cpp src/*.cpp -I include -o bin/Knapsack
```

## Running the program

Execute the program by calling it through the command line. The program accepts up to five optional arguments:

Windows:

```
    .\bin\Knapsack.exe <PATH_TO_DATA> [CAPACITY_1] [CAPACITY_2] [CAPACITY_3] ...
```

Linux & MacOS:

```
    ./bin/Knapsack <PATH_TO_DATA> [CAPACITY_1] [CAPACITY_2] [CAPACITY_3] ...
```

Arguments:
- <PATH_TO_DATA>: Path to file storing input data
- [CAPACITY_1] [CAPACITY_2] ... : Knapsack capacities, program will return corresponding max values