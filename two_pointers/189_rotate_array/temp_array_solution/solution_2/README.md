# Temporary Array Solution (#2)

- ### O(n) - time complexity
- ### O(n) - space

## This solution:

1. Creates a temporary array with a size equal to the number of input elements.
2. Copies the elements, which will be moved to the beginning, from the input array to a temporary array.
3. Copies the elements, which will be shifted to the end, from the input array to a temporary array.
4. Replaces the contents of the input array with the contents of the temporary array.