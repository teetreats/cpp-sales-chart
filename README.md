# cpp-sales-chart
A C++ console application example that takes daily sales inputs across six retail stores and renders a text-based ASCII bar chart where each asterisk represents $50
## Overview
The program prompts the user to enter daily revenue for 6 different store locations. It calculates the scaled units and prints an asterisk-based chart to the terminal, where each `*` corresponds to $50 in sales.

## Features
- Interactive standard input (`cin`) for 6 individual stores
- Automatic scaling based on a fixed $50 interval
- Formatted console output rendering horizontal bar charts

## Build & Run

### Prerequisites
- A C++ compiler (e.g., `g++`, `clang++`, or MSVC)

### Compile
```bash
g++ -o sales_chart main.cpp
