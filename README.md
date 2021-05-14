# Color Compatability Calculator 

## Description

This program, when promted with any of the 140 colors that are supported by CSS files, outputs 5 other colors that are compatable with that base color and with each other so that the colors can be used together for charts/graphics and colorblind people would be able to decipher them. It then saves these colors to a CSS file titled whatever the user input.  It also can, when given two colors, tell the user if they would be compatable colors for a color blind person. It can also give the user the hex code of whichever color they input  

### v0.2 Updates

I fixed my file input/output from version 1 that was incorrect, now the program will make a file and store your compatable colors to it on the left hand side of the repl. I also added two functions, a vector, and many more if else statements.

### v1.0 Updates

I added another functionality to my program which has the ability to give the user the HEX code of the color that they input. I did this using a class. 


## Developer

Zoe Kunhart

## Example

To run the program, give the following commands:
g++ -std=c++11 *.cpp -o cvp; ./cvp

```
 
what would you like to do? enter 'themecompleter' to enter a color and get a 5 color theme that will be saved to a CSS file, enter 'distinguishcolors' to enter two colors and find out if they would be 
 g++ -std=c++11 *.cpp -o cvp; ./cvp
what would you like to do? enter 'themecompleter' to enter a color and get a 5 color theme that will be saved to a CSS file, enter 'distinguishcolors' to enter two colors and find out if they would be compatable for a color blind person, or enter 'HEX' to find out the hex number for your color.
themecompleter
Please enter a color name that is of the 143 color names supported by CSS. Enter it in the form seen that is compatable with CSS (no spaces and a capitol only as the first letter of every word, eg: SlateBlue) Copy and paste this link into your browser for the list of 143 colors to choose from. https://www.w3schools.com/colors/colors_names.asp
LightSalmon 
valid color
Please enter a one word name for your file that your theme will be saved to.
zoe
Your compatable colors are: CornFlowerBlue, BlueViolet, Magenta, LightSalmon, Gold, Black. Would you like to make another color palette? Type y for yes or n for no.
y
what would you like to do? enter 'themecompleter' to enter a color and get a 5 color theme that will be saved to a CSS file, enter 'distinguishcolors' to enter two colors and find out if they would be compatable for a color blind person, or enter 'HEX' to find out the hex number for your color.
distinguishcolors
enter your first color that is of the 143 colors supported by CSS: 
OrangeRed
enter your second color that is of the 143 colors supported by CSS: 
Coral
these colors are too close to be compatable for a person with color blindness. Type y if you would like to run the program again or n to quit 
y
what would you like to do? enter 'themecompleter' to enter a color and get a 5 color theme that will be saved to a CSS file, enter 'distinguishcolors' to enter two colors and find out if they would be compatable for a color blind person, or enter 'HEX' to find out the hex number for your color.
HEX
Enter a color
Black
#000000
would you like to try again? Enter y for yes or n for no
n
```

## C++ Guide

### Variables and Data Types

in this program, the data types string and char are used effectively. string is used to store the users input (basecolor) which is a word that contains more than one character or letter. char is used to store the users input of yes or no (in this case y or n) about whether or not to run the program or not. I used char becuase y and n are just one character. I also used boolean data types on functions that returned either a true or false. 

### Console Input and Output

I have used both cout and cin statements in my program, the cin gathers the basecolor information from the user, as well as the decision of whether to run the program again, and the cout puts out data that the user is looking for. 

### Decisions

I have used if, if else, and else statements to successfully code this program. It starts with an if statement, and then moves to multiple if else statements, and if none of these statements are true, the program tells the user there has been an invalid input and prompts the user to try again. 

### Iteration

I have used a while loop in this program in order to be able to re-run the program if the users input is invalid, or if the user just wants to run it again after successfully running it already. I thought a wile loop was the best choice for my program becuase I needed the conditions inside the loop to be checked (whether or not the user inputted yes to indicate they want to run the program again) before the program runs again. 

### File Input and Output

I have used the myfile input to save the file to the users computer, and I have utilized correct format for a CSS file. 

### Arrays/Vectors

The vector that I chose to use is a vector called myvector, and this vector is used when the user wants to use the distinguish colors function of the program. once the user puts in their two colors, they are added to the vector myvector and then a function is performed to make sure that the two colors in the vector are not the same color. once this is determined, a series of if else statements check if the two colors in the vector are compatable. The data type for this vector is a string becuase the two values that it holds are a sequence of letters that form a word. 

### Functions

The first function that I used in the second deliverable is called isacolor, it is a pass by value, because I am not changing the value of the parameter in the function, and it is a boolean function that takes the users input for the color they chose and sees if it is one of the colors listed in the htmlcolornames.txt file. If it is a valid color, it returns true, and if not is returns false. I used a boolean return type here because the function returns a true or false statement. The second function is called isunique and it is a pass by reference that sees if the two colors in myvector are the same color. If they are, it ends the program and prompts the user to try again, but if they are not it evaluates their compatability. The return type I used for this function is void because the particular function doesnt have to return a value. I used a pass by reference here because I am changing the value of the parameter passed in by the client program. 
### Classes

I used a class called Hex that when prompted by inputting HEX, the program will ask the user for a color, and when entered, the program will give them the hex code for that color. In the hex.h file, I put the variables of the color name and the hex number in private so that they were hidden and would only be used inside the class Hex. I put the member function prototypes in public so that they could be used inside and outside the class. in the Hex.cpp file I put the member function implementations. In my main.cpp, I made a vector valled hexvector and the class will basically scan through the hexvalues.txt file and find the color that the user input. The class basically combines the hex value and the color name into one variable. Once the vector finds the color, it will output the hex value that is grouped with that color in the class. I'm trying to put this into words the best i can so I hope that makes sense :))
