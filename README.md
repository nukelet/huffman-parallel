# Parallel Huffman

This is an attempt at parallelizing Huffman Encoding using OpenMP.

## Repository Structure

This repository contains two folders:

* data: which contains the input samples;
* src: which contains the code, for both the parallel and serial implementations.
  * Inside this folder, you'll also find some auxiliary code we used to implement the encoding process.
* include: contains the headers for our data structures

We also have a CMake file on the root of our repository, to make it easier to build everything.

## Getting Started

To get started, clone this repository to your local machine using the following command:

```sh
git clone https://github.com/mc970-1s23/final-project-parallelizing-gzip
```

Once the repository is cloned, you can compile the code with the following commands:

```bash
mkdir build && cd build
cmake ..
```
