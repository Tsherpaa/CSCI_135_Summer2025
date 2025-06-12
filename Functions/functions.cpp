#include <iostream>
#include <string>

std::string reversestring(std::string userinput);
int sentencewordcount(std::string userinput2);
bool palendromecheck(std::string userinput3);
double averagenum(int arr[], int size);
double celsiustofahrenheit(double userinput4);

int main () {
    std::string userinput;
    std::cout << "Enter a string to reverse: ";
    std::getline(std::cin, userinput);
    std::string reversed = reversestring(userinput);

    std::string userinput2;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, userinput2);
    int wordcount = sentencewordcount(userinput2);

    std::string userinput3;
    std::cout << "Enter a number: ";
    std::getline(std::cin, userinput3);
    if (palendromecheck(userinput3)) {
        std::cout << "Palindrome? Yes" << "\n" << std::endl;
    } 
    else {
        std::cout << "Palindrome? No" << "\n" << std::endl;
    }

    int numbers[5];
    int size = 5;

    std::cout << "Enter 5 numbers: ";
    for(int i = 0; i < size; i++) {
        std::cin >> numbers[i];
    }
    double sum = averagenum(numbers, 5);
    std::cout << "Average: " << sum << "\n" << std::endl;

    double userinput4;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> userinput4;
    double F = celsiustofahrenheit(userinput4);

    std::cout << "Fahrenheit: " << F << std::endl;

    return 0;
}

std::string reversestring(std::string userinput) {
    std::string revstring;

    for (int i = userinput.length() - 1; i >= 0; i--) {
        revstring += userinput[i];
    }
    std::cout << "Reversed: " << revstring << "\n" << std::endl;
    return revstring;
}

int sentencewordcount(std::string userinput2) {
    int wordcount = 0;

    if (userinput2.length() > 0)  
        wordcount = 1;
        for (int i = 0; i < userinput2.length(); i++){
             if (userinput2[i] == ' ') {
                wordcount = wordcount + 1;
             }
        }
        std::cout << wordcount << "\n" << std::endl;
        return wordcount;
}

bool palendromecheck(std::string userinput3) {
    int left = 0;
    int right = userinput3.length() - 1;

    while(left < right) {
        if(userinput3[left] != userinput3[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

double averagenum(int arr[], int size) {
    double sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    sum = sum / size;
    return sum;
}

double celsiustofahrenheit(double userinput4) {
    double F;
    F = userinput4 * 9.0 / 5 + 32;
    return F;
}