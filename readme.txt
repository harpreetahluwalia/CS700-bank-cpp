**************************************************************** Section 1 ******************************************************************
	Author : Harpreet Singh
	Date of creation : 10/10/2021

*********************************************************************************************************************************************

*********************************************************************************************************************************************

	GITHUB @harpreetahluwalia
	Repo : https://github.com/harpreetahluwalia/CS700-AS2

*********************************************************************************************************************************************

*********************************************************************************************************************************************
FUNCTIONALITY OF THE PROGRAM : 

Program that allows you to examine the effects of array size and initial data order by measuring the time of the program when your favorite sort operates on an array of integers.

We will tests 10 arrays each time with three different array sizes (n =100,000, n =1,000,000, and n =10,000,000) and three different array orderings (random order, ascending order, and inverse order). Three test results (random time, ordered time, reverse time) will be produced for each array in a well-formatted fashion. A table will be used for each array size where columns represent the 10 arrays and rows represent the three tests.

Ultimately, tables are printed one after another separated by a line indicating the size of the arrays.

*********************************************************************************************************************************************

*********************************************************************************************************************************************
FILES OF THE PROGRAM (INCLUDING HEADERS AND IMPLEMENTATION) : 

AS2 Sec1.cbp 	Project file
main.cpp	It is the main program file
calcTime.h	It includes declaration of calcTime method which calculates the time taken to sort the array.
calcTime.cpp	It includes implementation of calcTime method which calculates the time taken to sort the array.

	
Doxygen documentation in HTML file	/html/index.html
Screenshots of the console output	/Screenshots
exe file for the program.		/debug/AS2 Sec 1.exe

*********************************************************************************************************************************************

INSTRUCTION :
1. Open the AS2 Sec1.cbp file or import the project.
2. Build and run the project.
3. Output will be presented on the console.
Note : Once results of array size of 100000 and 1000000 are printed, compiler might take 2-3 minutes to print results for arrays of size 10000000.

*********************************************************************************************************************************************
