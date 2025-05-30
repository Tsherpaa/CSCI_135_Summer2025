#include <iostream>
#include <string>

int main(){
std::string name = "Tenjing Sherpa";

std::string n1 = name.substr(0, 7); //Takes the first name and stores it in n1
std::string n2 = name.substr(8, 6); //Takes the second name and stores it in n2
/* 
This for loop goes through n1, checks if the letters in n1 are lowercase and if
they are, subtracts 32 as the Uppercase letters are 32 less than the lowercase
*/ 
for (int i = 0; i < 7; i++) {
if (n1[i] >= 'a' && n1[i] <= 'z') {
n1[i] = n1[i] - 32;
}
}
for (int i = 0; i < 6; i++) { // Does the same as the first for loop but but checks n2
if (n2[i] >= 'a' && n2[i] <= 'z') {
n2[i] = n2[i] - 32;
}
}
std::cout << n1 << " " << n2;
}