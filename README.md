# problemset1
This problem set will introduce you to arithmetic and C++ libraries. In this problem set, you will use variables to store data
input by a user, perform arithmetic on the data contained within the variables, and output your findings using the terminal. Be
sure to read this problem set thoroughly, especially the sections of Collaboration and the Hand-in Procedure.
Collaboration
Collaboration amongst students is allowed to the extent outlined in the syllabus. That being the case, the goal of these
assignments is not to share code, but to learn the tools you need to succeed as a computer scientist. Students are expected to
write their own code free of plagiarism from any other student past or current. All assignments will be cross referenced across
all sections of CS135 using the Measure Of Software Similarity (Moss) to automatically determine the similarity of programs.
Refer to the syllabus for further details and consequences of breaking this policy.
Program: Airport Distance
Problem 1
You are working with an airplane company to develop some software for their flight systems. The first thing the company wants
to know is how far their airplanes are from their airports. This can easily be broken down to the problem of finding the distance
between the two points. You work with the airplane company to develop a plan to find the Manhattan distance between each 1
airport. The Manhattan distance is the distance between points measured along axes at right angles. A way to think of it is like
measuring how many squares away a piece is from another in checkers/chess. It is called the Manhattan distance because the
line you can build to get from point a to b looks like a routing through Manhattan. Write a program that:
1. Prompts the user to enter two (x, y) points as integers and casts them to doubles.
2. Calculates the manhattan distance between the entered two points.
The equation for manhattan distance is:
manDist = |x2 − x1| + |y2 − y1|
Note: You will need to use the abs(int n) function from the cmath library for this equation. 2
To check that this problem is complete, verify your program is printing as shown in the example output.
1 https://en.wikipedia.org/wiki/Taxicab_geometry
2 http://www.cplusplus.com/reference/cstdlib/abs/
Problem 2
Once you are finished with the manhattan distance calculations the company comes back to you and requests that you add
euclidean distance to the program. They tell you that they need it added because euclidean distance is more accurate since 3
airplanes do not have to avoid buildings like cars do, but they still want to keep the manhattan distance calculations as they are
very useful in many situations. Add to your program:
1. The ability to calculate the euclidean distance between the entered two points.
The equation for euclidean distance is:
eucDist = √(x x ) (y y ) 2 − 1
2 + 2 − 1
2
Note: You will need to use the sqrt(double x) and pow(double base, double exponent) functions from the cmath library for 4 5
this equation.
To check that this problem is complete, verify your program is printing as shown in the example output.
Problem 3
Now that you have found the distance between two points in multiple ways it is time to display your results to the screen so
your associates at the airplane company can easily see the results of the calculations they want to perform. Add functionality to
your program that:
1. Outputs the numbers you computed formatted exactly as shown below.
