# Data Structures and Algorithms (DSA)

## Course Overview
A comprehensive journey through fundamental data structures and algorithms implemented in C++.

## Weekly Topics

### [Week 1: Time & Space Complexity](./Week-1(TimeSpace@Complexity)/README.md)
- Big O Notation
- STL Basics (Vector, List)
- Binary Search Implementation
- Prefix Sum Queries

### [Week 2: Singly Linked List](./week-2(singly_linked_list)/README.md)
- Node Creation and Traversal
- Insertion Operations
  ```cpp
  void insert_at_tail(Node* &head, int val);
  void insert_at_head(Node* &head, int val);
  void insert_at_position(Node* head, int pos, int val);
  ```
- Deletion Operations
- Sorting Linked List

### [Week 3: Doubly Linked List](./week-3(doubly)/README.md)
- Doubly Node Implementation
- Bidirectional Traversal
- Reverse Operations
- Palindrome Check

### [Week 4: Stack & Queue](./week-4(Stack)/README.md)
#### Stack Operations
```cpp
class Stack {
    void push(int val);    // O(1)
    void pop();            // O(1)
    int top();             // O(1)
    bool empty();          // O(1)
};
```
- Stack using Array/List
- Valid Parentheses
- Special Queries

### [Week 5: Binary Tree](./week-5(Binary-Tree)/README.md)
- Tree Traversals
  - Preorder, Inorder, Postorder
  - Level Order (BFS)
- Binary Tree Operations
  ```cpp
  Node* input_tree();      // Level order input
  int count_leaf_nodes(Node* root);
  bool is_perfect_binary_tree(Node* root);
  ```

### [Week 6: Binary Search Tree](./week-6(Biner-search)/README.md)
- BST Properties
- Search Operation: O(log n)
- Insertion & Deletion
- Heap Implementation
  - Max Heap
  - Priority Queue

## Problem Patterns

### 1. Array/String Operations
- Duplicate Removal
- Range Queries
- Prefix Sums

### 2. Tree Problems
- Leaf Node Operations
- Tree Validation
- Path Finding

### 3. Stack/Queue Applications
- Parentheses Matching
- Queue Implementation
- Special Data Structure Design

## Best Practices
- Always check edge cases
- Consider time complexity
- Use appropriate data structure
- Handle memory properly

## Common Pitfalls
- Memory leaks in linked structures
- Not handling edge cases
- Incorrect recursion base case
- Stack overflow in deep recursion

## Resources
- [HackerRank Profile](https://www.hackerrank.com/profile/sarwarasik)
- CodeForces Contests
- Module Practice Questions


