<h1 align="center"><font color="#ff0000">Data Structures and Algorithm</font></h1>
<h2 align="left">About</h2>
<p>
Data structures are fundamental components of computer science that allow for the organization and storage of data in a way that facilitates efficient access and modification. They are essential for designing and implementing algorithms and play a crucial role in the efficiency of software.</p>
<p>
  Here are some common data structures:
</p>
<p>
 <b>1. Arrays:</b> A collection of elements stored in contiguous memory locations, with each element accessible by its index.<br>

<br><b>2. Linked Lists:</b> A linear collection of elements, where each element points to the next one in the sequence.<br>

<br><b>3. Stacks:</b> A Last In, First Out (LIFO) data structure, where elements are added and removed from the same end, known as the "top."<br>

<br><b>4. Queues:</b> A First In, First Out (FIFO) data structure, where elements are added at the rear and removed from the front.<br>

<br><b>5. Trees:</b> Hierarchical data structures with a root element and branches, where each node has a parent and zero or more children.<br>

<br><b>6. Graphs:</b> A collection of nodes connected by edges, allowing for more complex relationships between elements.<br>

<br><b>7. Hash Tables:</b> A data structure that maps keys to values, providing efficient data retrieval based on the key.<br>

<br><b>8. Heaps:</b> A specialized tree-based data structure that satisfies the heap property, often used for priority queues.<br>

<br><b>9. Trie:</b> A tree-like data structure used to store a dynamic set or associative array where the keys are usually strings.<br>

<br><b>10. Sets and Maps:</b> Collections that store unique elements, where a set only contains elements, and a map associates keys with values.<br>
</p>
<p>
<h2>Array:</h2>
<b>Definition:</b> An array is a collection of elements, each identified by an index or a key.<br>
  
<b>Structure:</b> Elements are stored in contiguous memory locations.<br>

<b>Indexing:</b> Elements are accessed using their index (starting from 0 in many programming languages).<br>

<b>Size:</b> Fixed size in most languages (static arrays), or dynamic size (dynamic arrays).<br>

<h3>Advantages:</h3>
  <li>  <b>  Random Access:</b> Constant time access to any element using its index.<br></li>
  <li>  <b>  Memory Efficiency:</b> Contiguous memory allocation allows for efficient use of cache.<br></li>

<h3>Disadvantages:</h3>
  <li>  <b>Fixed Size:</b> Static arrays have a fixed size, making it challenging to change the size dynamically.<br></li>
  <li>  <b>Insertion/Deletion:</b> Can be inefficient since elements may need to be shifted when inserting or deleting elements.<br></li>

<h3>Use Cases:</h3>
  <li>  Storing and accessing a collection of elements with constant-time random access requirements.<br></li>
  <li>  Implementing mathematical matrices, vectors, etc.<br></li>
  <li>  Efficient storage of elements when the size is known and doesn't change frequently.</li><br>

<p>Arrays are a fundamental and versatile data structure used in various algorithms and applications. While they offer constant-time access to elements, their fixed size can be limiting in some scenarios, leading to the use of dynamic arrays or other data structures like linked lists when flexibility in size is required.<br></p>

<h3>Basic operations in the Arrays</h3>
<p><li>Insertion</li>
<li>Deletion</li> 
<li>Searching</li> 
<li>Display</li> 
<li>Traverse and</li>
<li>Update.</li></p>
<!-- Insertion section -->
<h3 align="center"><font size="5" color="red">Insertion</font></h3>
<p><font size="3">To insert an element at a specific position in an array, you can use the following general approach:</font><br>

<br>1. Create a new array with a size one greater than the original array.<br>
2. Copy the elements from the original array to the new array up to the desired position.<br>
3. Insert the new element at the desired position in the new array.<br>
4. Copy the remaining elements from the original array to the new array.<br>
<div align="center">
    <a>
      <img width="700" height="480" src="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/assets/128937137/e4faa692-49d0-4dbf-b9c7-63d35a30dc2d" alt="telegram-app--v1"/>
    </a>
  </div>
   
<font size="5">Here's an example in cpp (C++):  <a href="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/blob/main/Array/Insertion_sort.cpp"><b> <font color="red"> Code </font></b></a> <font size="0.5">(Click on Code and Display the program)</font>
</font>
<br></p>
<p>
  </p>
<p>
  <font size="5"><b>Sample input and Output</b></font><br>
   <font size="4">Enter the size of an array: 5<br>
Enter array elements:1 2 3 4 5<br>
Enter the insertion index position of an array: 3<br>
Enter element to be inserted: 30<br>
     
New Array after Insertion:1 2 3 30 4 5 </font><br>
</p>
  <font size="5"><b>Algorithm</b></font><br>
<li>Input the size of the array (n) and the array elements.</li> 
<li>Input the element to be deleted (num).</li> 
<li>Search for the element in the array and delete it.<br>
    Searches for the element (num) in the array. If found, it shifts the elements to the left to overwrite the position of the element to be deleted.</li> 
<li>Display the new array after deletion.<br>
    Prints the elements of the modified array after the deletion operation.</li>
<!-- Delation section -->
  <h3 align="center"><font size="5" color="red">Delation</font></h3>
<p><font size="3">To Delate an element in an array, you can use the following general approach:</font><br>

<br>1. Deletion is nothing but process of remove an element from the array.<br>
2. Here we have shifted the numbers of placed after the position from where the number is to be deleted, one place to the left of their existing positions.<br>
<div align="center">
    <a>
      <img width="700" height="480" src="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/assets/128937137/72a41ba6-e8de-496e-9b0b-0b7e2d38f671" alt=""/>
    </a>
  </div>
   
   
<font size="5">Here's an example in cpp (C++):  <a href="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/blob/main/Array/Deletion_in_index_variable.cpp"><b> <font color="red"> Code </font></b></a> <font size="0.5">(Click on Code and Display the program)</font>
</font>
<br></p>
<p>
  </p>
<p>
  <font size="5"><b>Sample input and Output</b></font><br>
   <font size="4">Enter the size of an array: 5<br>
Enter array elements:1 2 3 4 5<br>
Enter the Delating element of an array: 3<br>
     
New Array after Delation:1 2 4 5 </font><br>
</p>
  <font size="5"><b>Algorithm</b></font><br>
  1. Input the size of the array (n):<br>
<li>Prompt the user to enter the size of the array.</li> 
  2. Input array elements: <br>
<li>Use a loop to input the elements of the array.</li> 
  3. Input the element to be deleted (num):<br>
<li>Prompt the user to enter the element they want to delete.</li> 
  4. Find the index of the element to be deleted:<br>
<li>Iterate through the array to find the index (i) where the element matches the user input (num).<br>
   5. Shift elements to the left to delete the element:<br>
<li>Use a loop to shift all elements from the index (i) to the end of the array one position to the left</li>
   6. Display the new array:<br>
<li>Use a loop to print the elements of the array after deletion.</li>

<!-- Searching section -->
  <h3 align="center"><font size="5" color="red">Searching</font></h3>
<p>
  Searching is an operation or a technique that helps finds the place of a given element or value in the list.<br>
  Any search is said to be successful or unsuccessful depending upon whether the element that is being searched is found or not.<br>
<font size="4"><b>Searching techniques</b></font> <br>
There are three types of searching in data structure and analysis <br>
<li>Linear Search </li>
<li>Binary Search </li>
<li>Interpolation Search </li>
</p>
<font size="5"><b>Linear Search</b></font> <br>
<li>Linear search is a very simple search algorithm.</li> 
<li>In this type of search, a sequential search is made over all items one by one. </li> 
<li>Every item is checked and if a match is found then that particular item is returned. </li> 
<li>Otherwise the search continues till the end of the data collection.</li><br>
<div align="center">
    <a>
      <img width="700" height="480" src="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/assets/128937137/03a919d8-8424-49c6-8ebc-7974c7e9eaaa" alt=""/>
    </a>
  </div>
  <br>
<font size="5">Here's an example in cpp (C++):  <a href="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/blob/main/Array/Array_liner_search.cpp"><b> <font color="red"> Code </font></b></a> <font size="0.5">(Click on Code and Display the program)</font>
</font>
<br>
<p>
  <font size="5"><b>Sample input and Output</b></font><br>
   <font size="4">Enter the size of an array: 5<br>
Enter array elements:1 2 3 4 5<br>
Enter your searching value: 4<br>
4 Found the location a[3]</font><br>
</p>
  <font size="5"><b>Algorithm</b></font><br>
  1. Input the size of the array (n):<br>
<li>Prompt the user to enter the size of the array.</li> 
  2. Input array elements: <br>
<li>Use a loop to input the elements of the array.</li> 
  3. Input the value to be searched (num):<br>
<li>Prompt the user to enter the value they want to search for.</li> 
  4. Search for the value in the array:<br>
<li>Use a loop to iterate through the array.<br>
  <li>If the current element (a[i]) matches the search value (num), print the index and break out of the loop.<br>
   5. Display the result:<br>
<li>If the loop completes without finding the value (i == n), print a message indicating that the value was not found.</li><br>



<font size="5"><b>Binary Search</b></font> <br>
<li>Binary search is a fast search algorithm with run-time complexity of O(log n).</li> 
<li>This search algorithm works on the principle of divide and conquer. For this algorithm to work properly. </li> 
<li>The data collection should be in the sorted form. </li> 
<li>Binary search looks for a particular item by comparing the middle most item of the collection. If a match occurs, then the index of item is returned.</li>
<li>If the middle item is greater than the item, then the item is searched in the sub-array to the right of the middle item. </li> 
<li>Otherwise, the item is searched for in the sub-array to the left of the middle item.</li> 
<li>The process continues on till the subarray reduces to zero.</li> 
<li>Compare x with the middle element. If x matches with middle element, we return the mid index.</li>
<li>Else If x is greater than the mid element, then x can only lie in right half subarray after the mid element. So we recur for right half. </li> 
<li>Else (x is smaller) recur for the left half.</li><br>


<div align="center">
    <a>
      <img width="700" height="480" src="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/assets/128937137/233464cf-65d5-4cce-9692-cbab50b67d3a" alt=""/>
    </a>
  </div>
  <br>
<font size="5">Here's an example in cpp (C++):  <a href="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/blob/main/Array/Array_Binary_Search.cpp"><b> <font color="red"> Code </font></b></a> <font size="0.5">(Click on Code and Display the program)</font>
</font>
<br>
<p>
  <font size="5"><b>Sample input and Output</b></font><br>
   <font size="4">Enter the size of an array: 5<br>
Enter array elements:1 2 3 4 5<br>
Enter your searching value: 3<br>
3 Found the location a[2]</font><br>
</p>

  <font size="5"><b>Algorithm</b></font><br>
   <b> 1. Input:<br>  </b>
<li>The user is prompted to enter the size of the array (n).</li> 
<li>The user is then asked to input the elements of the array (a).</li> 
  <b>  2. Binary Search Algorithm: <br>  </b>
<li>The program initializes low to 0 and high to n-1, representing the search interval.</li> 
<li>It calculates the initial value of mid as the average of low and high.</li> 
<li>It enters a while loop as long as low is less than or equal to high.</li> 
   <b> 3. Inside the loop:<br>  </b>
<li>If the element at the middle (a[mid]) is less than the target num, it means the target must be in the right half of the array. So, low is updated to mid + 1.</li> 
<li>If a[mid] is equal to num, the target is found, and the program prints the index and exits the loop.<br>
<li>If a[mid] is greater than num, the target must be in the left half of the array. So, high is updated to mid - 1.<br><li>The value of mid is recalculated based on the new values of low and high.<br>
    <b> 4. Output:<br>  </b>
<li>If the while loop exits without finding the target (when low is greater than high), the program prints "Element not found."</li><br>


<font size="5"><b>Interpolation Search </b></font> <br>
<li>Interpolation search is an improved variant of binary search.</li> 
<li>This search algorithm works on the probing position of the required value. </li> 
<li>For this algorithm to work properly, the data collection should be in a sorted form and equally distributed. </li> <br>

<font size="5"><b>Interpolation search usage </b></font> <br>

<li>There are cases where the location of target data may be known in advance.</li>
<li>For example, in case of a telephone directory, if we want to search the telephone number of Morphius Here, linear search and even binary search will seem slow as we can directly jump to memory space where the names start from 'M' are stored </li> <br>


<div align="center">
    <a>
      <img width="700" height="480" src="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/assets/128937137/a0ec8af6-b844-4069-8a32-96a36d56c997" alt=""/>
    </a>
  </div>
  <br>
<font size="5">Here's an example in cpp (C++):  <a href="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/blob/main/Array/Array_Interpolation_search.cpp"><b> <font color="red"> Code </font></b></a> <font size="0.5">(Click on Code and Display the program)</font>
</font>
<br>
<p>
  <font size="5"><b>Sample input and Output</b></font><br>
   <font size="4">Enter the size of an array: 5<br>
Enter array elements:1 2 3 4 5<br>
Enter your searching value: 3<br>
3 Found the location a[2]</font><br>
</p>
  <font size="5"><b>Algorithm</b></font><br>
    <b>1. Input:  </b><br>
<li>The user is prompted to enter the size of the array (n).</li> 
<li>The user then inputs the array elements.</li> 
<li>The user is prompted to enter the element to be searched (e).</li> 
    <b>2. Array Initialization:   </b><br>
<li>An array a of size n is declared and initialized with user-input elements.</li> 
   <b> 3.Interpolation Search Initialization:  </b><br>
<li>Variables start, end, and pos are initialized.</li> 
<li>start represents the starting index of the search range.<br>
<li>end represents the ending index of the search range.<br>
  <li>pos is calculated using the interpolation formula to estimate the probable position of the target element within the array.<br>
  <b> 4.Search Loop:  </b><br>
<li>A while loop is used to iteratively search for the element e in the array.</li> 
<li>Inside the loop, it checks if the current position pos is less than, equal to, or greater than the target element e.<br>
<li>If a[pos]< e it updates start and recalculates pos.<br>
<li>If a[pos] == e, it prints the index where the element is found and breaks out of the loop.<br>
<li>If a[pos] > e, it updates end and recalculates pos..<br>
<li>The loop continues until start becomes greater than end or the element is found.<br>
    
  <b>5. Output:</b><br>
<li>If the element is found, it prints the index where the element is located.</li>
<li>If the element is not found, it prints a message indicating that the element is not in the array. </li>
  

<!--
<h2 align="left">Open terminal and run</h2>
<h3>
- Any C++ compiler : Run<a href="https://www.programiz.com/cpp-programming/online-compiler/"> BMI Calculator</a>
</h3>
-->
