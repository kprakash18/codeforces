# Competitive Programming Setup

This folder is configured for C++17 competitive programming in VS Code.

## Requirements

Install a C++ compiler and the Microsoft **C/C++** VS Code extension. On macOS,
the compiler can be installed with:

```bash
xcode-select --install
```

Verify the compiler:

```bash
g++ --version
```

## Workflow

1. Put the solution in [`main.cpp`](./main.cpp).
2. Put local test input in [`input.txt`](./input.txt).
3. Use **Terminal → Run Build Task** to compile.
4. Use **Terminal → Run Task → C++: Run with input.txt** to compile and run.

The executable is generated as `solution` and is ignored by the editor workflow.
The run task redirects `input.txt` to standard input, matching Codeforces
behavior.
