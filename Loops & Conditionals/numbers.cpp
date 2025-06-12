#include <iostream>

int main() {

int snum = 4; //Hardcoded the secret number, 4, into the variable snum.
int unum; //Initializes unum, user inputed number.

/* 
This while loop repeatedly checks if the user input(unum), is NOT equal to the secret number(snum). 
If not equal, the block of code in the while loop will constantly run until the user inputs a number equal to the
secret number.
*/ 
while (unum != snum) {
std::cout << "Guess the number between 1-10: ";
std::cin >> unum;
if (unum >= 1 && unum <= 10) { // Checks to see if the user input(unum) is in range. If it is, it executes the block of code 
if (unum > snum) {
std::cout << "Too high!" << std::endl;
}
else if (unum < snum) {
std::cout << "Too low!" << std::endl;
}
else {
std::cout << "Correct! Well done." << std::endl;
break; // This break ensures that the user doesn't have to input another number after guessing correctly.
}
}
else {
std::cout << "Error: The number you entered is not between 1-10!" << std::endl;
break;
}
}
}
