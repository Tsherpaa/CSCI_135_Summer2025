#include <iostream>
#include <string>

int main() {
std::string name;
std::cout << "Enter your full name (first and last): ";
std::getline(std::cin, name); //getline reads entire line of text inputed by the user.

std::string fn; //Initialize fn(firstname)
std::string ln; //Initialize fn(lastname)

int i = 0; 

while (i < name.length()) { // while loop using 
if (name[i] == ' ') {
fn = name.substr(0, i); //first name stored from 0 to i(index of space)
ln = name.substr(i+1); //last name stored from i+1(to get rid of space)
for (int i = 0; i < fn.length(); i++) { //For loop to turn first name characters to uppercase
if (fn[i] >= 'a' && fn[i] <= 'z') { //checks for lowercase letters
fn[i] = fn[i]- 32; //turns lowercase to uppercase
}
}
for (int i = 0; i < ln.length(); i++) { //For loop to turn last name characters to uppercase
if (ln[i] >= 'a' && ln[i] <= 'z') { //checks for lowercase letters
ln[i] = ln[i]- 32; //turns lowercase to uppercase
}
}
}
i++;
}
std::string Un = fn + ' ' + ln; // Concatenation
std::cout << "Your name in uppercase is: " << Un;
}

