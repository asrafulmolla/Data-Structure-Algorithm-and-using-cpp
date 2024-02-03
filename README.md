<h1 align="center"><font color="#ff0000">Data Structures and Algorithm</font></h1>
<h2 align="left">About</h2>
<p>
Data structures are fundamental components of computer science that allow for the organization and storage of data in a way that facilitates efficient access and modification. They are essential for designing and implementing algorithms and play a crucial role in the efficiency of software.</p>
<p>
  Here are some common data structures:
</p>
<p>
 <b>1. Arrays:</b> A collection of elements stored in contiguous memory locations, with each element accessible by its index.<br>

<b>2. Linked Lists:</b> A linear collection of elements, where each element points to the next one in the sequence.<br>

<b>3. Stacks:</b> A Last In, First Out (LIFO) data structure, where elements are added and removed from the same end, known as the "top."<br>

<b>4. Queues:</b> A First In, First Out (FIFO) data structure, where elements are added at the rear and removed from the front.<br>

<b>5. Trees:</b> Hierarchical data structures with a root element and branches, where each node has a parent and zero or more children.<br>

<b>6. Graphs:</b> A collection of nodes connected by edges, allowing for more complex relationships between elements.<br>

<b>7. Hash Tables:</b> A data structure that maps keys to values, providing efficient data retrieval based on the key.<br>

<b>8. Heaps:</b> A specialized tree-based data structure that satisfies the heap property, often used for priority queues.<br>

<b>9. Trie:</b> A tree-like data structure used to store a dynamic set or associative array where the keys are usually strings.<br>

<b>10. Sets and Maps:</b> Collections that store unique elements, where a set only contains elements, and a map associates keys with values.<br>
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
<h3 align="center">Insertion</h3>
<p><font size="8">To insert an element at a specific position in an array, you can use the following general approach:</font><br>

<br>Create a new array with a size one greater than the original array.<br>
Copy the elements from the original array to the new array up to the desired position.<br>
Insert the new element at the desired position in the new array.<br>
Copy the remaining elements from the original array to the new array.<br>
Here's an example in Python:<br></p>
<!--
<h2 align="left">Open terminal and run</h2>
<h3>
- Any C++ compiler : Run<a href="https://www.programiz.com/cpp-programming/online-compiler/"> BMI Calculator</a>
</h3>
-->
