# Color Compatability Calculator 

## Description

This program, when promted with any of the 140 colors that are supported by CSS files, outputs 5 other colors that are compatable with that base color and with each other so that the colors can be used together for charts/graphics and colorblind people would be able to decipher them. 

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

Zoe Kunhart

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
Please enter a color name that is of the 140 color names supported by CSS. Enter it in the form seen that is compatable with CSS (no spaces and a capitol only as the first letter of every word, eg: SlateBlue) Copy and paste this link into your browser for the list of 140 colors to choose from. https://www.w3schools.com/colors/colors_names.asp
SlateBlue
Please enter a one word name for your file that your theme will be saved to.
zoe
Your compatable colors are: Black, White, SkyBlue, SlateBlue, Yellow, Goldenrod. Would you like to make another color palette? Type y for yes or n for no.
n
 
```

## C++ Guide

### Variables and Data Types

in this program, the data types string and char are used effectively. string is used to store the users input (basecolor) which is a word that contains more than one character or letter. char is used to store the users input of yes or no (in this case y or n) about whether or not to run the program or not. I used char becuase y and n are just one character. 

### Console Input and Output

I have used both cout and cin statements in my program, the cin gathers the basecolor information from the user, as well as the decision of whether to run the program again, and the cout puts out data that the user is looking for. 

### Decisions

I have used if, if else, and else statements to successfully code this program. It starts with an if statement, and then moves to multiple if else statements, and if none of these statements are true, the program tells the user there has been an invalid input and prompts the user to try again. 

### Iteration

I have used a while loop in this program in order to be able to re-run the program if the users input is invalid, or if the user just wants to run it again after successfully running it already. I thought a wile loop was the best choice for my program becuase I needed the conditions inside the loop to be checked (whether or not the user inputted yes to indicate they want to run the program again) before the program runs again. 

### File Input and Output

I have used the myfile input to save the file to the users computer, and I have utilized correct format for a CSS file. 

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
