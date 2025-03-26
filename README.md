# Data Structures and Algorithms Library

A C++ library implementing fundamental **data structures** and **algorithms**, designed for benchmarking, testing, and educational purposes.

## Features
✅ Implementation of essential **data structures**:
- Linked List (`linked_list.h`)
- Stack (`stack.h`)
- Queue (`queue.h`)
- Tree (`tree.h`)
- Graph (`graph.h`)

✅ Implementation of key **algorithms**:
- Sorting (`sorting.h`)
- Searching (`searching.h`)
- Graph Algorithms (`graph_algorithms.h`)
- Dynamic Programming (`dp.h`)

✅ Benchmarking tools to measure algorithm performance (`benchmark_graph.cpp`, `benchmark_sorting.cpp`).

✅ Test cases for validation (`test_graph.cpp`, `test_linked_list.cpp`).

---

## Folder Structure
```
📂 C++-DSA_Library/
├── algorithms/  *(Algorithm implementations)*
│   ├── dp.h
│   ├── graph_algorithms.h
│   ├── searching.h
│   ├── sorting.h
│  
├── data_structure/  *(Data structure implementations)*
│   ├── graph.h
│   ├── linked_list.h
│   ├── queue.h
│   ├── stack.h
│   ├── tree.h
│  
├── benchmarks/  *(Performance testing scripts)*
│   ├── benchmark_graph.cpp
│   ├── benchmark_sorting.cpp
│  
├── tests/  *(Unit tests for validation)*
│   ├── test_graph.cpp
│   ├── test_linked_list.cpp
│  
├── main.cpp  *(Main entry point for testing)*
├── makefile  *(Build automation script)*
├── .gitignore  *(Ignored files for Git)*
├── README.md  *(Project documentation)*
```

---

## Installation & Compilation
### Using Makefile (Recommended)
```sh
make
./main
```
### Manual Compilation
```sh
g++ -o main main.cpp -I ./C++-DSA_Library
./main
```

---

## How to Use
Include the necessary headers in your C++ program:
```cpp
#include "data_structure/graph.h"
#include "algorithms/sorting.h"
```
Then, create objects and call functions as needed.

---

## Testing & Benchmarking
Run unit tests:
```sh
g++ -o test_graph tests/test_graph.cpp -I ./C++-DSA_Library
./test_graph
```
Run sorting benchmark:
```sh
g++ -o benchmark benchmarks/benchmark_sorting.cpp -I ./C++-DSA_Library
./benchmark
```

---

## Contributing
Feel free to submit **pull requests** or **report issues**. Contributions are welcome!

---

## License
📜 **MIT License** – Free to use and modify.
