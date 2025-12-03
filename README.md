# binary-search-tree-c
Binary Search Tree in C

This project implements a simple Binary Search Tree (BST) in C, including:

Creation of tree nodes

Recursive insertion of values

Recursive search for integer keys

A mathematical function that calculates the number of nodes in a d-ary tree of height h

It serves as a clean and minimal example of data structures and recursion using the C programming language.

🔧 Features
✔ Create a new tree node

Each node contains:

data (integer)

left child pointer

right child pointer

✔ Insert values recursively

Maintains the Binary Search Tree property:

Smaller values go to the left subtree

Greater values go to the right subtree

✔ Search for a value

Efficient recursive search that returns whether a key exists inside the tree.

✔ Calculate theoretical node count

The calculateNodes() function computes the number of nodes in a d-ary tree of height h using recursive expansion.

📁 File Included

binary_search_tree.c

▶️ How to Compile & Run
gcc binary_search_tree.c -o bst
./bst

🧪 Example Output
The number 7 is in the tree.
The number of nodes in a tree with degree 2 and height 3 is: 8

🎓 What This Project Demonstrates

Binary Search Tree fundamentals

Recursive insertion and search

Mathematical recursion

Clean C implementation

Memory-safe dynamic node creation
