## BST(Binary Search Tree)

- small to large number.
- for every node ``left`` small to `right` large node.
- not insert the duplicate value in BST.
- complexity for search `O(h)` in BST ; `h= height`.
- when search in array it should must `sorted` but not need in BST.
- complexity for search in `O(h) | NlogN | N^2`
- possible Array `to` BST.


# Heap Binary tree

- `complete Binary Tree`: fileup left to right of 2nd last level in every tree.
- `Perfect Binary Tree` :  same complete but all level should fileup.
-  left-side Index of tree: `left_index = parent_index*2 + 1`
-  right-side Index of tree: `right_index = parent_index*2 + 1`
-  parent from left_child :
-  parent from right_child :

#### HEAP ::
-  heap is type : `max heap` and ` min heap`.
-  max heap = (large to small)
-  min heap = (small to large)
-  insert_max_heap = `O(logN)`


### Priority 
- it is better than array when sort data many time
- maximum priority = `priority_queue<int> pq`
- minimum priority =  ` priority_queue<int,vector<int>,greater<int>> min_pq;`
- queue have front() and back() but priority have `top()` 
 
#### custom compare create in Priority
- create a `cmp` name class for custom compare 
- must name `operator` syntax
- must use `()()` in operator function

### STL Map

- for 1 core data we have to define the size for `frequency array`.(so tough)
- For this use `STL Map`. count anydataType int,string , anySize.
- take memory based size 
- array must use int in key `user[100]` but map can take string like `user['roll']=20`.
- Map structure `map_name[key]= value`
- Map insert => `Log(N)` and print N number is `NlogN`
- worse complexity to insert and print than array.


## STL Set Data Type 

- remove duplicate value like BST.
- used InOrder travelsar for Sorted in BST.
- `set<int>s;` is set.
- can't `reverse` set directly but can by using vector.
- for inset => `logN`. 
- maintain a `balanced BST` in Map.
- never height more logN in Set.
