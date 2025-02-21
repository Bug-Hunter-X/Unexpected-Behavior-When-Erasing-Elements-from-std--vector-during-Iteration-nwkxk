# Unexpected Behavior When Erasing Elements from std::vector during Iteration

This repository demonstrates a common error in C++ when iterating through and removing elements from a `std::vector` simultaneously.  The code attempts to remove elements while iterating using the index, but due to the way `erase()` restructures the vector, this approach leads to unexpected behavior and potential crashes or incorrect results.  The solution shows a safer and more efficient method to handle this task. 

**Bug:** The `bug.cpp` file contains the erroneous code.  The issue lies in the nested loop. Removing elements from a vector while iterating using index-based access causes subsequent elements to shift, leading to index-out-of-bounds or skipping elements.

**Solution:** The `bugSolution.cpp` file provides a correct way to solve this by using iterators and the `erase` method of the vector.