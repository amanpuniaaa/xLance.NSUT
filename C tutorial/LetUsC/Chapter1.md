# **Let us C**

### **Getting Started**

#### Introduction
* C is a programming language, designed and written by 'Dennis Ritchie' in 1972.
* It bacame very popular because it was reliable, simple and easy to use and replaced many familiar languages like PL/I, ALGOL, etc.
* Popular Operating system like windows, Unix, Linux and apart from that kernels of iOS, Android are also written in C.

#### Steps in Learning C language

Learning C language is just like learning any other human language and can be done in steps. 
1. Learning Alphabets, Digits, Special Symbols
2. Learning about Constants, Variables, Keywords
3. Instructions
4. Making a Program

A conclusive relation can be drawn easily to understand how a language can be understood as shown in the figure below.


<img width="481" alt="Chapter 1, Pic1" src="https://user-images.githubusercontent.com/74143496/128599637-f4406c33-72c2-4fb9-ba27-f9d078766033.PNG">


##### Learning Alphabets, Digits, Special Symbols
All these entities used in C programming are as follows


<img width="391" alt="chapter 1, pic2" src="https://user-images.githubusercontent.com/74143496/128599667-591b53c3-fa21-4f53-ae77-341edd5c81be.PNG">

##### Learning about Constants, Variables, Keywords

###### *Constant*

A *constant* is the entity that doesn't changes.
###### Type of C constants
1. Primary constants
2. Secondary Constants

These are further categorised as 


<img width="353" alt="chapter 1, pic3" src="https://user-images.githubusercontent.com/74143496/128599682-d3ebe744-4c66-4290-b064-c73fcc095381.PNG">


**Integer constant**

* As the name suggest, an *integer constant* should be an integer. 

* It can be both positive and negative.

* The allowed range for integer constants is -2147483648 to +2147483647

**Real Constant**

* A *real constant* must have a decimal point.

* It can be either positive or negative

**Character Constant**

* A *character constant* can be a single alphabet, single digit or a single special symbol.

* The constant must be enclosed within single inverted commas, 'A', '1', '@'.

###### *Variables*
Variables can also have the same characters like constants such as Integer, Real, Character. 
**Rules to construct Variable name**
* A variable name can be made up of any alphabet, digit.
* The first character in the name must either be an aplphabet or underscore.
* No other symbol except '_'can be used

###### *Keywords*

Keywords are the words whose meaning has already been explained to the C compiler.
There are 32 keywords in C language


<img width="320" alt="chapter1,pic4" src="https://user-images.githubusercontent.com/74143496/128599702-9f18a7b1-97f4-4641-8f91-0ce70def7056.PNG">


#### Comments in a C program

*Comments* in a C program are used to clarify what the statement actually means in the program. This is generally used by the programmer to keep track of the steps and understand a particular line after some time. This also helps other people to understand the logic used by the programmer.

* Comments can be written in following syntax 


<img width="47" alt="chapter1,pic5" src="https://user-images.githubusercontent.com/74143496/128599718-ec54dea6-c1c2-4251-927f-5dc505217b98.PNG">

* We can type any text inside comments and it won't affect the code in any way.
* '//' can also be used to write comments.

#### main()

* *main()* forms the crucial part of any C program.
* It is a function and all statements that belong to main() must be written between {}.
* A C program must have atleast one function and that must be *main()*.
* This function returns an integer value and this written as *int main()*. The return value for success is '0' and that for failure is any non-zero number.

#### printf()
* *printf()* is a function which is used to print the output on the screen.
* To use the printf() function, '#include <stdio.h>' must be written in the program. *#include* is a preprocessor directory and *stdio.h* is *'standard input output header file'* in which the declaration of the printf() function is written.
* The general form of *printf()* function is  **printf ("<format string>",<list of variables>);**
* It can print any real, integer, character value and also print the result of expressions by computing on its own.

#### scanf
* *scanf()* function is used to recieve values from the user.
* The declaration of this function is also written in *stdio.h*. Thus, it is mandatory to mention *#include <stdio.h>* in the program.
* To recieve input for any variable, we must use '&' symbol before the name of the variable. This symbol is an 'Address of' operator and gies the location number used by the variable in the memory.
  
  
<img width="356" alt="chapter1, pic6" src="https://user-images.githubusercontent.com/74143496/128599737-5f7010c5-16a6-47be-a00a-fa0042eec3c4.PNG">






















