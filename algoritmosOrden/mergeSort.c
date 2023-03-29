// Example visualization of the merge sort algorithm:
//
//          [38, 27, 43, 3, 9, 82, 10]
//                     /   \
//       [38, 27, 43, 3]   [9, 82, 10]
//        /         |         |      \
//   [38, 27]    [43, 3]   [9, 82]   [10]
//    /   |      /    |    /    \      |
// [38]  [27]  [43]  [3]  [9]   [82]  [10]
//    \  /       \   /     \     /     |
//   [27, 38]    [3, 43]   [9, 82]    [10]
//       \         /          \        /
//     [3, 27, 38, 43]        [9, 10, 82]
//           \                  /
//          [3, 9, 10, 27, 38, 43, 82]
//
// The array is first broken up into progressively smaller unsorted portions of
// the array, and once we have "sub-arrays" of 1 element they are by definition
// sorted arrays.  From here the "sorted arrays" are merged together until we 
// arrive at the complete sorted array.
//


#include <stdio.h>

void mergeSort(int a[], int n){

}

void mergeSortRecursion(int a[], int n);
void mergeSortedArray(int a[], int n);



int main(int argc, char const *argv[])
{
    int arr[] = {9,7,8,6,4,2,5,1,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);


    return 0;
}
