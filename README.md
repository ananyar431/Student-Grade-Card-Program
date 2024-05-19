# Student-Grade-Card-Program

Program takes the names, roll numbers, and marks of 10 students, and calculates their grade for each of 3 subjects, then generating a grade card for a specified student.

Switch case is used to take input from the user on which action to perform, with each case having a function defined in a separate file, linked to the main code.

Makefile is utilized to link all the files, and mingw32-make command in command prompt can be used to compile the code which is now saved as student_grade_card. it can be run by typing .\student_grade_card in command prompt.

For phase two, the code is saved as gradecard.

For phase three, the data is stored in a file called data.csv which is read by the gradecard.c program and loaded into struct. Then, this data is used to calculate the grades of students, and display a grade card for an individual using string search.
