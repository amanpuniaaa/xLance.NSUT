# Let Us C #

## Decision Control Instruction ##
These are the instructions used to control the flow of the program in such a way so that it executes certain statements based on the outcome of a condition.
A *Decision Control Instruction* can be implemented in C using three statements
1. The **if** statement
2. The **if-else** statement
3. The **conditional operators**

### The **if** statement ###
* The *if* statement is used to execute a statement if the condition in the *if* statement is *true*. If the condition is not true, the statement is not executed and the program skips the *if* statement.
* The syntax for *if statement* is 
<img width="337" alt="pic 1" src="https://user-images.githubusercontent.com/74143496/128640658-8dc6aa24-9064-4932-829c-6f0e1701b288.PNG">

* We can also use arithmetic expression in the condition for *if statement*. If the expression is a *non zero*, it gets executed as C language trets non-zero as *True*.
* *Relational operators* can be used in the condition, if the relation holds true, the program gets executed. The relational operators are shown in the figure.
<img width="295" alt="pic 2" src="https://user-images.githubusercontent.com/74143496/128640685-421f17ef-845b-42c3-a97a-caf0a1e8b9a8.PNG">

* Multiple statements can be used in the *if statement*, if the condition is hold true, all the statements within the if statements gets executed.

*NOTE: If there is only one statement within if, it is not mandatory to write the statement within '{}'. But, in case of multiple statements, it is mandatory.*

### The **if-else** statement ###
* The *if-else* statement is used to execute a statement when the condition is true and other statement when it is false.
* The syntax for *if-else* statement is


<img width="256" alt="pic 3" src="https://user-images.githubusercontent.com/74143496/128640789-53bcd927-4045-4858-84c5-46dd408f1a0f.PNG">

#### **Nested if-else** ####
* We write an **if-else** construct within either the body of **if** statement or the body of **else** statement.
* The syntax of *Nested if-else* is


<img width="175" alt="pic 4" src="https://user-images.githubusercontent.com/74143496/128640819-ef01eb31-2e58-40e5-84b8-ccc272eda590.PNG">

### The Conditional Operators ###
* They are used like *if-else* statement but the code is much smaller for it.
* The syntax for *Conditional Operator* is 


<img width="338" alt="pic 5" src="https://user-images.githubusercontent.com/74143496/128640917-c8018764-d7b1-49b2-89ab-89021d6eccce.PNG">

In the following syntax, if the *expression 1* is true, then *expression 2* is executed and if the *expression 1* is false, then *expression 3* is executed.
### Logical Operators ###
There are 3 *Logical Operators* namely
1. AND '&&'
2. OR '||'
3. NOT '!'
#### AND operator ####
If both the operands are non-zero, it gives true.
#### OR operator ####
If any of the two operands is non-zero, it gives true.
#### NOT operator ####
It is used to reverse the logical output. So, if the condition is true, it will turn it false and vice-versa.
The following table will summarize the working of all the *Logical Operators*

<img width="285" alt="pic 6" src="https://user-images.githubusercontent.com/74143496/128640937-04afb4f7-3fe2-49c0-b094-a3b1fb552d97.PNG">

