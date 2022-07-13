# Temporary Array Solution (#1)

- ### O(n) - time complexity
- ### O(k) - space

## This solution:

1. Creates a temporary array with a size equal to the number of elements to be rotated.
2. Copies the elements, which will be moved to the beginning, from the input array to a temporary array.
3. Shifts the elements from the beginning of the input array by the desired number of positions using **memmove**.
4. Copies the contents of the temporary array to the beginning of the resulting array.