# Arrays

Organize items sequentially, one after in memory. This allows for fast lookups, but slow inserts and deletes. It is the most common data structure in programming. It has the least amount of rules. It has the least footprint in memory among data structures.

| Actions | Big O |
| --- | --- |
| lookup | O(1) |
| push | O(1) |
| pop | O(1) |
| insert | O(n) |
| delete | O(n) |

## Operations

```c
buffer = char[4];
buffer[0] = 'a';
buffer[1] = 'b';
buffer[2] = 'c';
buffer[3] = 'd';
printf("%c", buffer[2]); // c
```

- *lookup*: With the index, retrieve the value at that index. This is a constant time operation, O(1).
- *push*: Add an item to the end of the array. This is a constant time operation, O(1).
- *pop*: Remove the last item from the array. This is a constant time operation, O(1).
- *insert*: Add an item at a specific index. This is a linear time operation, O(n). If I add an item at the beginning of the array, I have to shift all the items to the right.
- *delete*: Remove an item at a specific index. This is a linear time operation, O(n). If I remove an item at the beginning of the array, I have to shift all the items to the left.

We can conclude that lookup, push and pop operations are well suited for arrays. Insert and delete operations will have a larger footprint.

## Static arrays

If we know ahead of time that we will have 4 items, we can create a static array of size 4. This is a fixed size array. We can't add more items to it. We can't remove items from it. We can't change the size of it. We can't change the type of it. 

## Dynamic arrays

If we don't know ahead of time how many items we will have, we can create a dynamic array. This is a resizable array. We can add items to it. We can remove items from it. We can change the size of it. We can change the type of it. We will use dynamic memory allocation to create a dynamic array.