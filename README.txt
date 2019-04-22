The source code contains two main functions, one for the Bubble Sort Algorithm and one for the Selection Sort Algorithm. 
The selectionSort() function originally needs the inclusion of <cstdlib> so as to be able to use the swap() method to sort 
the elements of the array. The three final lines of code of the selectionSort() method are the implementation of the swap()
method and so no inclusion was needed. Both functions use as a parameter the physical address (pointer) of the first element 
of an Array. The address of an array is the same as the first element in it but the rest of them have different addresses. So,
the functions should still work the same if we pass them an Array as parameter without involving pointer or any element at a 
specific position.  
