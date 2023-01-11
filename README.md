# Project Description

The goal of this project is resolve tasks of Binary Tree.

## General Concepts

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree
* Team work
* Github contribution

# Data Structure

The following data structures and types for binary trees is used in the project.

### Basic Binary Tree

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## Compilation

All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`

## Test

The following [function](https://github.com/hs-hq/0x1C.c) can be used to print the Binary Tree for test purpose.

## Authors

Carol Diane Hernandez [CarolDianeHA](https://github.com/CarolDianeHA)

Abigail Castro Figueroa [AbigailCastroFigueroa](https://github.com/AbigailCastroFigueroa)