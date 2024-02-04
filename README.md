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
   
   
<font size="5">Here's an example in cpp (C++):  <a href="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/blob/main/Insertion.cpp"><b> <font color="red"> Code </font></b></a> <font size="0.5">(Click on Code and Display the program)</font>
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
   
   
<font size="5">Here's an example in cpp (C++):  <a href="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/blob/main/Deletion_in_element.cpp"><b> <font color="red"> Code </font></b></a> <font size="0.5">(Click on Code and Display the program)</font>
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
<font size="4">Searching techniques</font> 
There are three types of searching in data structure and analysis <br>
<li>Linear Search </li><br>
<li>Binary Search </li><br>
<li>Interpolation Search </li><br>
</p>
<font size="4">Linear Search</font> <br>
<li>Linear search is a very simple search algorithm.</li> 
<li>In this type of search, a sequential search is made over all items one by one. </li> 
<li>Every item is checked and if a match is found then that particular item is returned. </li> 
<li>Otherwise the search continues till the end of the data collection.</li><br>
<div align="center">
    <a>
      <img width="700" height="480" src="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/assets/128937137/03a919d8-8424-49c6-8ebc-7974c7e9eaaa" alt=""/>
    </a>
  </div>
   
   
<font size="5">Here's an example in cpp (C++):  <a href="https://github.com/asrafulmolla/Data-Structure-and-Algorithm-using-cpp/blob/main/Array_liner_search.cpp"><b> <font color="red"> Code </font></b></a> <font size="0.5">(Click on Code and Display the program)</font>
</font>
<br></p>
<p>
  </p>
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
<li>If the loop completes without finding the value (i == n), print a message indicating that the value was not found.</li>
  




    
<!--
<h2 align="left">Open terminal and run</h2>
<h3>
- Any C++ compiler : Run<a href="https://www.programiz.com/cpp-programming/online-compiler/"> BMI Calculator</a>
</h3>
-->
