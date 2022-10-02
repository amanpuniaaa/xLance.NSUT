# Let us C #

## C Instructions ##

> An **instruction** is an order given to a computer processor by a computer program.

### Types of Instructions ###
* Type Declaration Instruction
* Arithmetic Instruction
* Control Instruction

#### Type Declaration Instruction ####
* This instruction is used to declare the type of *variable* being used in the program.


<img width="338" alt="Chapter 2  pic2" src="https://user-images.githubusercontent.com/74143496/128627888-4b6eea4f-bdb4-4a54-8ee9-59d918c3067e.PNG">

* We can also initialize the variable while declaring the type.
* The order in which the variable is declared does not matter, but we should not use a variable before defining it


<img width="321" alt="chapter 2, pic1" src="https://user-images.githubusercontent.com/74143496/128627891-c4d652e3-9712-4f93-bc26-1dd49a0593da.PNG">


#### Arithmetic Instruction ####
* A C arithmetic instruction has variable name on the left side of '=' and variable anme and constants on right side of '='.
* The variable and constants on the right side of '=' are connected by arithmetic operators.

 *The variables and constants together are called '**operands**'*.
 *During an arithmetic operation, the operands on the right side of '=' are calculated and then assigned to the variable on the left side of '='*
 *  An arithmetic statement can be of 'Integer mode', having all operands either integer variables or integer constants


 <img width="320" alt="pic3" src="https://user-images.githubusercontent.com/74143496/128627925-f9e89580-5244-4f3a-8b95-d726492d56d5.PNG">

 or 'Real mode' having all operands as real constants or real variables
 
<img width="318" alt="pic4" src="https://user-images.githubusercontent.com/74143496/128627930-02a0cfac-8b3b-45ec-a23b-3b97789e93d1.PNG">

or 'Mixed mode' having some operands as integers and some as real.

<img width="318" alt="pic5" src="https://user-images.githubusercontent.com/74143496/128627935-54b54320-e447-499a-8fb5-87fec8b60f63.PNG">


#### Difference between '/' and '%' operator ####
* '/' is called *division operator* and is used for division.
* '%' is called *modular division operator* and is used for returning remainder after division of two integers
* For example: '10/2' will give '5', while '10%2' will give '0'.
*Modular Operator cannot be used for float.*
*In modular operator, the sign of the remainder is always same as the sign of the numerator.*

#### Integer and Float conversions ####
* An arithmetic operation between *integer* and *integer* always yield *integer* result.
* An arithmetic operation between *real* and *real* always yield *real* result.
* An arithmetic operation between an *integer* and a *real* always yield a *real* result. In this case, the integer is promoted to real and thus, the result is real.


<img width="330" alt="pic 6" src="https://user-images.githubusercontent.com/74143496/128627970-d82af1db-5dad-45a6-ba38-f2dbe0c2ab1e.PNG">

* If in an assignment operator, the type of variable on the left hand side does not par with the expression on the right hand side, the value of the expression is promoted to the type of variable on the left hand side.
#### Heirarchy of Operations ####
* While executing an arithmetic statement, which has two or more operators, we need to decide which one to execute first.
* The priority in which the operations are performed are shown in the figure.


<img width="327" alt="pic7" src="https://user-images.githubusercontent.com/74143496/128627985-5a1dc0ab-3018-4357-b132-c0eb14d40c3a.PNG">

* If there are more than one set of parentheses, the innermost parentheses would be performed first.
 #### Control Instructions in C ####
*Control Instructions* enables us to specify the order in which various instructions should be executed in a program by the computer.
These are further of 4 types
1. Sequence Control Instruction
2. Selection or Decision Control Instruction
3. Repitition or Loop Control Instruciton
4. Case Control Instruction


