#include <iostream>
#include <string>

//Function protoypes:
std::string reversestring(std::string userinput);
int sentencewordcount(std::string userinput2);
bool palendromecheck(std::string userinput3);
double averagenum(double arr[], int size);
double celsiustofahrenheit(double userinput4);

int main () {
    //Takes userinput, flips it by calling reversestring and outputs result
    std::string userinput;
    std::cout << "Enter a string to reverse: ";
    std::getline(std::cin, userinput);
    std::string revstring = reversestring(userinput); //Calls reversestring function and stores into revstring
    std::cout << "Reversed: " << revstring << "\n" << std::endl;

    //Takes userinput, counts words by calling sentencewordcount and outputs result
    std::string userinput2;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, userinput2);
    int wordcount = sentencewordcount(userinput2);
    std::cout << "Word count: " << wordcount << "\n" << std::endl;

    //Takes userinput, checks if it is palindrome by calling palendromecheck function and outputs result
    std::string userinput3;
    std::cout << "Enter a number: ";
    std::getline(std::cin, userinput3);
    if (palendromecheck(userinput3)) {
        std::cout << "Palindrome? Yes" << "\n" << std::endl;
    } 
    else {
        std::cout << "Palindrome? No" << "\n" << std::endl;
    }

    //Takes userinput and stores in an array, calculates the average by calling averagenum function and outputs result
    double numbers[5]; //array initialized as double to account for decimal values
    int size = 5;

    std::cout << "Enter 5 numbers: ";
    //Stores the numbers into an array automatically 
    for(int i = 0; i < size; i++) {
        std::cin >> numbers[i]; 
    }
    double sum = averagenum(numbers, 5); //Call the function and passes the array and size
    std::cout << "Average: " << sum << "\n" << std::endl;

    //Takes userinput, converts it into farenheit by calling celsiustofahrenheit function and outputs result
    double userinput4;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> userinput4;
    double F = celsiustofahrenheit(userinput4);

    std::cout << "Fahrenheit: " << F << std::endl;

    return 0;
}

//FUNCTION DEFINITIONS:

//Reverses input by iterating backwards and storing into revstring to be returned
std::string reversestring(std::string userinput) { 
    std::string revstring;

    for (int i = userinput.length() - 1; i >= 0; i--) {
        revstring += userinput[i];
    }
    return revstring;
}

//Counts words in a sentence by counting spaces
int sentencewordcount(std::string userinput2) {
    int wordcount = 0; //wordcount = 0 to account for no user input

    if (userinput2.length() > 0)  //Checks if string is empty
        wordcount = 1; //Start at 1 if there is an input to account for the word before the first space
        for (int i = 0; i < userinput2.length(); i++){
             if (userinput2[i] == ' ') {
                wordcount = wordcount + 1;
             }
        }
        return wordcount;
}

//Checks if string is palindrome numbers from both ends and moving to the center
bool palendromecheck(std::string userinput3) {
    int left = 0; //Left most index
    int right = userinput3.length() - 1; //Rightmost index

    while(left < right) { //Keeps running until left is greater than right
        if(userinput3[left] != userinput3[right]) {
            return false;
        }
        left++; //Move left index one to the right
        right--; //Move right index one to the left
    }
    return true;
}

//Takes array of numbers and calcuates the average
double averagenum(double arr[], int size) {
    double sum = 0;
    //Sum of array elements
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    sum = sum / size; //average
    return sum;
}

//Converts celsius to farenheit
double celsiustofahrenheit(double userinput4) {
    double F;
    F = userinput4 * 9.0 / 5 + 32; //Conversion formula
    return F;
}
