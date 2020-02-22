# Task Scheduling Genetic Algorithm


###### How to use
Program has hard coded some properties which you can change in main file. Some of the values were precisely selected to maximize chance of getting optimal solution. Other values are depentend on the type of problem you want to run. More information inside main file.


###### Program`s arguments 
(order does not matter, file name at his first character must not be a number)
- number of processors
- path to file, where file stores for each tasks duration and deadline as non-negative integers.


###### Output
Firstly it prints out all tasks information from file. 
- dt - duration time
- d - deadline
Secondly it prints out which tasks on which processor should be run and in what order.
Finally, it displays the sum of delays, which means how much time has elapsed from task`s deadline.


###### Details
Program was written in C++ based on compiler version 11 or higher.